/*
 * FIPS 186-2 PRF for libgcrypt
 * Copyright (c) 2004-2009, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#include "includes.h"
#include <gcrypt.h>

#include "common.h"
#include "crypto.h"


int fips186_2_prf(const u8 *seed, size_t seed_len, u8 *x, size_t xlen)
{
	/* FIX: how to do this with libgcrypt? */
	return -1;
}
