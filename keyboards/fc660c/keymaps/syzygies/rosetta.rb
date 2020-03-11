#!/usr/bin/env ruby
# Copyright 2020 Dave Bayer davebayer@mac.com @Syzygies <http://www.wtfpl.net/>

# generate keymap.c from keymap.tsv

require 'csv'

path = File.dirname(__FILE__)
tsv = "#{path}/keymap.tsv"
map = "#{path}/keymap.c"

short = {
  'x' => 'XXXXXXX',
  'o' => '_______'
}

data  = []
label = []
index = nil
CSV.read(tsv, col_sep: "\t", quote_char: nil).each do |row|
  if row[1]
    if index
      row = row.compact.map { |x| short[x.strip] or x.strip }
      if data[index]
        data[index] << row
      else
        data[index] = [row]
      end
    else
      index = row[1].to_i
      label[index] = row[2]
    end
  else
    index = nil
  end
end

widths = Array.new(15,0)
data.each do |layer|
  if layer
    layer.each do |row|
      widths = widths.zip(row.map { |x| x.length }).map { |x| x.compact.max }
    end
  end
end

data = data.map do |layer|
  if layer
    layer.map do |row|
      row.zip(widths).map { |entry, len| entry.ljust(len+1) }.join(', ').prepend('    ')
    end.join(",\n")
  else
    nil
  end
end

layout = data.each_with_index.map do |layer, index|
  if layer
    "  // #{label[index]}\n  [#{index}] = LAYOUT(\n#{layer}\n  )"
  else
    nil
  end
end.compact.join(",\n")

src = <<-EOS
// Copyright 2020 Dave Bayer davebayer@mac.com @Syzygies <http://www.wtfpl.net/>

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#{layout}
};
EOS

File.open(map, 'w') do |file|
  file << src
end
