/*
	Copyright 2012-2014 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

/*
 * app.h
 *
 *  Created on: 18 apr 2014
 *      Author: benjamin
 */

#ifndef APP_H_
#define APP_H_

#include "conf_general.h"

// Functions
void app_init(app_configuration *conf);
const app_configuration* app_get_configuration(void);
void app_set_configuration(app_configuration *conf);

// Standard apps
void app_ppm_start(void);
void app_ppm_configure(ppm_control_type ctrlt, float pme, float hyst,
		float pulse_start, float pulse_width, float lim_rpm_start, float lim_rpm_end);
void app_uartcomm_start(void);
void app_uartcomm_configure(uint32_t baudrate);
void app_nunchuk_start(void);
void app_nunchuk_configure(chuk_control_type ctrlt,
		float hyst, float lim_rpm_start, float lim_rpm_end);
float app_nunchuk_get_decoded_chuk(void);

// Custom apps
void app_gurgalof_init(void);
void app_sten_init(void);

#endif /* APP_H_ */
