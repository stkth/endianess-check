// SPDX-License-Identifier: GPLv2
// Copyright: Steffen Kothe <steffen.kothe@skothe.net>  2026

/* Self-Exercise:
 *
 * A common C assessment question is the determination of the
 * endianess of a system. Well - approach it by a recast to
 * a 8bit value from a 32bit value.
 *
 */
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

#define TESTPATTERN_UINT32 0xDEADBEAF
#define LITTLE_ENDIAN_UINT8 0xAF

int main()
{
	uint32_t value = TESTPATTERN_UINT32;
	*(uint8_t *)&value == LITTLE_ENDIAN_UINT8 ? printf("Little Endian\n") :
						    printf("Big Endian\n");

	exit(EXIT_SUCCESS);
}
