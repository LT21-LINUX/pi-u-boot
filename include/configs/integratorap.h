/*
 * (C) Copyright 2003
 * Texas Instruments.
 * Kshitij Gupta <kshitij@ti.com>
 * Configuation settings for the TI OMAP Innovator board.
 *
 * (C) Copyright 2004
 * ARM Ltd.
 * Philippe Robin, <philippe.robin@arm.com>
 * Configuration for Integrator AP board.
 *.
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include "integrator-common.h"

/* Integrator/AP-specific configuration */
#define CONFIG_SYS_HZ_CLOCK		24000000	/* Timer 1 is clocked at 24Mhz */

/*
 * PL010 Configuration
 */
#define CONFIG_PL010_SERIAL
#define CONFIG_CONS_INDEX	0
#define CONFIG_BAUDRATE		38400
#define CONFIG_PL01x_PORTS	{ (void *) (CONFIG_SYS_SERIAL0), (void *) (CONFIG_SYS_SERIAL1) }
#define CONFIG_SYS_SERIAL0		0x16000000
#define CONFIG_SYS_SERIAL1		0x17000000


/*
 * BOOTP options
 */
#define CONFIG_BOOTP_BOOTFILESIZE
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME


/*
 * Command line configuration.
 */
#define CONFIG_BOOTDELAY	2
#define CONFIG_BOOTARGS		"root=/dev/mtdblock0 console=ttyAM0 console=tty"
#define CONFIG_BOOTCOMMAND	""

/*
 * Miscellaneous configurable options
 */
#define CONFIG_SYS_PROMPT	"Integrator-AP # "	/* Monitor Command Prompt   */

/* Flash settings */
#define CONFIG_SYS_FLASH_SIZE		0x02000000 /* 32 MiB */
#define CONFIG_SYS_MAX_FLASH_SECT	128
#define CONFIG_ENV_IS_NOWHERE		1
#define CONFIG_ENV_SIZE			32768

/*-----------------------------------------------------------------------
 * PCI definitions
 */

#define CONFIG_PCI
#define CONFIG_CMD_PCI
#define CONFIG_PCI_PNP

#define CONFIG_TULIP
#define CONFIG_EEPRO100
#define CONFIG_SYS_RX_ETH_BUFFER	8	/* use 8 rx buffer on eepro100	*/


/*-----------------------------------------------------------------------
 * There are various dependencies on the core module (CM) fitted
 * Users should refer to their CM user guide
 * - when porting adjust u-boot/Makefile accordingly
 *   to define the necessary CONFIG_ s for the CM involved
 * see e.g. integratorcp_CM926EJ-S_config
 */
#include "armcoremodule.h"

#endif	/* __CONFIG_H */
