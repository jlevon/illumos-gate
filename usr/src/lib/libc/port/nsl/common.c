/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2007 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

/*
 * Copyright 2020 Joyent, Inc.
 */

#include "mt.h"
#include <stdlib.h>

const char __nsl_dom[]  = "SUNW_OST_NETRPC";

sigset_t fillset; /* FIXME: need to fill! */

void *
thr_get_storage(pthread_key_t *keyp, size_t size, void (*destructor)(void *))
{
	void *addr;

	if (pthread_key_create_once_np(keyp, destructor) != 0)
		return (NULL);
	addr = pthread_getspecific(*keyp);
	if (addr == NULL && size != 0) {
		addr = calloc(1, size);
		if (addr != NULL && pthread_setspecific(*keyp, addr) != 0) {
			free(addr);
			return (NULL);
		}
	}

	return (addr);
}

