/*
 * This file is part of nmealib.
 *
 * Copyright (c) 2008 Timur Sinitsyn
 * Copyright (c) 2011 Ferry Huberts
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __NMEA_CONVERSIONS_H__
#define __NMEA_CONVERSIONS_H__

#include <nmea/sentence.h>

#ifdef  __cplusplus
extern "C" {
#endif

int nmea_gsv_npack(int sat_count);

void nmea_GPGGA2info(nmeaGPGGA *pack, nmeaINFO *info);
void nmea_GPGSA2info(nmeaGPGSA *pack, nmeaINFO *info);
void nmea_GPGSV2info(nmeaGPGSV *pack, nmeaINFO *info);
void nmea_GPRMC2info(nmeaGPRMC *pack, nmeaINFO *info);
void nmea_GPVTG2info(nmeaGPVTG *pack, nmeaINFO *info);

void nmea_info2GPGGA(const nmeaINFO *info, nmeaGPGGA *pack);
void nmea_info2GPGSA(const nmeaINFO *info, nmeaGPGSA *pack);
void nmea_info2GPGSV(const nmeaINFO *info, nmeaGPGSV *pack, int pack_idx);
void nmea_info2GPRMC(const nmeaINFO *info, nmeaGPRMC *pack);
void nmea_info2GPVTG(const nmeaINFO *info, nmeaGPVTG *pack);

#ifdef  __cplusplus
}
#endif

#endif /* __NMEA_CONVERSIONS_H__ */
