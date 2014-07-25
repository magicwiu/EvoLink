/*
 * platform.h -- Platform abstraction for EvoLink, part of the
 * cross-platform EVO-All interface library.
 * Copyright (C) 2014 Pat Deegan. All Rights Reserved.
 *
 * http://flyingcarsandstuff.com/projects/EvoLink
 *
 * Please let me know if you use EvoLink in your projects, and
 * provide a URL if you'd like me to link to it from the EvoLink
 * home.
 *
 * Released under the GPL v3, dual licensing available.
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * ************************* OVERVIEW *************************
 *
 * This is used to hide platform-specifics, like Arduino
 * delayMicroseconds() etc, from the rest of the code.  This
 * system makes it easy to port to other MCUs.
 *
 */

#ifndef EVOLINK_PLATFORM_H_
#define EVOLINK_PLATFORM_H_

#include "dependencies.h"

uint32_t timeMs(); // current ms time

void delayMs(uint16_t ms); // delay for ms milliseconds
void delayUs(uint16_t us);



#endif /* EVOLINK_PLATFORM_H_ */