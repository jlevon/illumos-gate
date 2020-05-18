/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
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
 *	Copyright (c) 1994, by Sun Microsytems, Inc.
 */

/*
 * Copyright 2020 Joyent, Inc.
 */

#ifndef _SYS_TNF_PROBE_H
#define	_SYS_TNF_PROBE_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * FIXME Probe Macros
 */

/* CSTYLED */
#define	TNF_PROBE_0(namearg, keysarg, detail) \
		((void)0)

/* CSTYLED */
#define	TNF_PROBE_1(namearg, keysarg, detail, type_1, namearg_1, valarg_1) \
		((void)0)

/* CSTYLED */
#define	TNF_PROBE_2(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2) \
		((void)0)

/* CSTYLED */
#define	TNF_PROBE_3(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3) \
		((void)0)

/* CSTYLED */
#define	TNF_PROBE_4(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3, type_4, namearg_4, valarg_4) \
		((void)0)

/* CSTYLED */
#define	TNF_PROBE_5(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3, type_4, namearg_4, valarg_4, type_5, namearg_5, valarg_5) \
		((void)0)

/* CSTYLED */
#define	TNF_PROBE_0_DEBUG(namearg, keysarg, detail)	TNF_PROBE_0(namearg, keysarg, "debug;" detail)

/* CSTYLED */
#define	TNF_PROBE_1_DEBUG(namearg, keysarg, detail, type_1, namearg_1, valarg_1)	TNF_PROBE_1(namearg, keysarg, "debug;" detail, type_1, namearg_1, valarg_1)

/* CSTYLED */
#define	TNF_PROBE_2_DEBUG(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2)	TNF_PROBE_2(namearg, keysarg, "debug;" detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2)

/* CSTYLED */
#define	TNF_PROBE_3_DEBUG(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3)	TNF_PROBE_3(namearg, keysarg, "debug;" detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3)

/* CSTYLED */
#define	TNF_PROBE_4_DEBUG(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3, type_4, namearg_4, valarg_4)	TNF_PROBE_4(namearg, keysarg, "debug;" detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3, type_4, namearg_4, valarg_4)

/* CSTYLED */
#define	TNF_PROBE_5_DEBUG(namearg, keysarg, detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3, type_4, namearg_4, valarg_4, type_5, namearg_5, valarg_5)	TNF_PROBE_5(namearg, keysarg, "debug;" detail, type_1, namearg_1, valarg_1, type_2, namearg_2, valarg_2, type_3, namearg_3, valarg_3, type_4, namearg_4, valarg_4, type_5, namearg_5, valarg_5)

#ifdef __cplusplus
}
#endif

#endif /* _SYS_TNF_PROBE_H */
