#!/usr/bin/env ruby
# Copyright 2020 Dave Bayer The MIT License (MIT)

# generate keymap.c from keymap.csv

require 'csv'

path = File.dirname(__FILE__)
csv = "#{path}/keymap.csv"
map = "#{path}/keymap.c"

short = {
  'o' => 'KC_NO',
  'v' => 'KC_TRANSPARENT'
}

data = []
index = nil
CSV.read(csv).each do |row|
  if row[0]
    if index
      row = row[1..-1].compact.map { |x| short[x] or x }.join(', ').prepend('    ')
      if data[index]
        data[index] << ",\n" << row
      else
        data[index] = row
      end
      index += 1
    else
      index = 0
    end
  else
    index = nil
  end
end

layout = data.each_with_index.map do |layer, index|
  "  [#{index}] = LAYOUT(\n#{layer}\n  )"
end.join(",\n")

src = <<-EOS
// Copyright 2020 Dave Bayer The MIT License (MIT)

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#{layout}
};
EOS

File.open(map, 'w') do |file|
  file << src
end
