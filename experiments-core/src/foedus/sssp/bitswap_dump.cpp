/*
 * Copyright (c) 2014-2015, Hewlett-Packard Development Company, LP.
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details. You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 * HP designates this particular file as subject to the "Classpath" exception
 * as provided by HP in the LICENSE.txt file that accompanied this code.
 */
#include <stdint.h>

#include <iostream>

uint8_t slow_bitswap(uint8_t b) {
  uint8_t ret = 0;
  for (uint8_t pos = 0; pos < 8U; ++pos) {
    if (b & (1U << pos)) {
      ret |= (1U << (7U - pos));
    }
  }
  return ret;
}

int main(int /*argc*/, char **/*argv*/) {
  for (uint32_t i = 0; i < 256U; ++i) {
    std::cout << " ";
    std::cout << static_cast<int>(slow_bitswap(i));
    std::cout << ",";
    if (i % 16 == 15) {
      std::cout << std::endl << " ";
    }
  }
}
