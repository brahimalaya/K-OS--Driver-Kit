/*
 * k_os (Konnex Operating-System based on the OSEK/VDX-Standard).
 *
 * (C) 2007-2009 by Christoph Schueler <chris@konnex-tools.de,
 *                                      cpu12.gems@googlemail.com>
 *
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */
#if !defined(__DEM_INTERRID_H)
#define	__DEM_INTERRID_H

/* EEPROM-Abstraction. */
#define	EA_E_PARAM_CONFIG       ((uint8)0x01)
#define	EA_E_INVALID_BLOCK_NO   ((uint8)0x02)

/* MCU-Driver */
    /* Development */
#define MCU_E_PARAM_CONFIG      ((uint8)0x0A)
#define MCU_E_PARAM_CLOCK       ((uint8)0x0B)
#define MCU_E_PARAM_MODE        ((uint8)0x0C)
#define MCU_E_PARAM_RAMSECTION  ((uint8)0x0D)
#define MCU_E_PLL_NOT_LOCKED    ((uint8)0x0E)
#define MCU_E_UININIT           ((uint8)0x0F)
    /* Production */
/* #define MCU_E_CLOCK_FAILURE     *** ASSIGNED BY DEM *** */

#endif	/* __DEM_INTERRID_H */
