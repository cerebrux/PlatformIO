/*
    MemeNums - Display iconic numbers on LED Matrix
    Copyright (C) 2025 Salih Emin

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

void setup()
{
  matrix.begin();
}

void loop()
{
  // Display "42" - The Answer to the Ultimate Question of Life, the Universe, and Everything
  // A classic reference from "The Hitchhiker's Guide to the Galaxy"
  byte frame42[8][12] = {
      {1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0},
      {1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0},
      {1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
      {1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0},
      {0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
      {0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0},
      {0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  matrix.renderBitmap(frame42, 8, 12);
  delay(2000);

  // Display "67" - The "Six, Seven" Meme
  // A viral meme from 2025 popular among the new generation of programmers
  byte frame67[8][12] = {
      {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0},
      {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
      {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
      {1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0},
      {1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
      {1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
      {1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
      {0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0}};

  matrix.renderBitmap(frame67, 8, 12);
  delay(2000);
}