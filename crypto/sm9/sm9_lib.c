/* crypto/sm9/sm9_lib.c */
/* ====================================================================
 * Copyright (c) 2016 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 */

#include <openssl/sm9.h>
#include "sm9_lcl.h"

int SM9_setup(SM9_PUBLIC_PARAMS **params, SM9_MASTER_SECRET **master)
{
	SM9err(SM9_F_SM9_SETUP, SM9_R_NOT_IMPLEMENTED);
	return 0;
}

void SM9_PUBLIC_PARAMS_free(SM9_PUBLIC_PARAMS *a)
{
	SM9err(SM9_F_SM9_PUBLIC_PARAMS_FREE, SM9_R_NOT_IMPLEMENTED);
}

void SM9_MASTER_SECRET_free(SM9_MASTER_SECRET *a)
{
}

int i2d_SM9_PUBLIC_PARAMS(SM9_PUBLIC_PARAMS *a, unsigned char *out)
{
	SM9err(SM9_F_I2D_SM9_PUBLIC_PARAMS, SM9_R_NOT_IMPLEMENTED);
	return 0;
}

int i2d_SM9_MASTER_SECRET(SM9_MASTER_SECRET *a, unsigned char *out)
{
	SM9err(SM9_F_I2D_SM9_MASTER_SECRET, SM9_R_NOT_IMPLEMENTED);
	return 0;
}

SM9_PUBLIC_PARAMS *d2i_SM9_PUBLIC_PARAMS(SM9_PUBLIC_PARAMS **a, const unsigned char **in, long len)
{
	SM9err(SM9_F_D2I_SM9_PUBLIC_PARAMS, SM9_R_NOT_IMPLEMENTED);
	return NULL;
}

SM9_MASTER_SECRET *d2i_SM9_MASTER_SECRET(SM9_MASTER_SECRET **a, const unsigned char **in, long len)
{
	SM9err(SM9_F_D2I_SM9_MASTER_SECRET, SM9_R_NOT_IMPLEMENTED);
	return NULL;
}

EVP_PKEY *SM9_extract_private_key(SM9_MASTER_SECRET *master,
	const char *id, size_t idlen, EVP_PKEY **pkey)
{
	SM9err(SM9_F_SM9_EXTRACT_PRIVATE_KEY, SM9_R_NOT_IMPLEMENTED);
	return NULL;
}

int SM9_encrypt(SM9_PUBLIC_PARAMS *params,
	const unsigned char *in, size_t inlen,
	unsigned char *out, size_t *outlen,
	const char *id, size_t idlen)
{
	SM9err(SM9_F_SM9_ENCRYPT, SM9_R_NOT_IMPLEMENTED);
	return NULL;
}

int SM9_decrypt(SM9_PUBLIC_PARAMS *params,
	const unsigned char *in, size_t inlen,
	unsigned char *out, size_t *outlen,
	EVP_PKEY *pkey)
{
	SM9err(SM9_F_SM9_DECRYPT, SM9_R_NOT_IMPLEMENTED);
	return 0;
}

