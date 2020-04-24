#
# CDDL HEADER START
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License (the "License").
# You may not use this file except in compliance with the License.
#
# You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
# or http://www.opensolaris.org/os/licensing.
# See the License for the specific language governing permissions
# and limitations under the License.
#
# When distributing Covered Code, include this CDDL HEADER in each
# file and include the License file at usr/src/OPENSOLARIS.LICENSE.
# If applicable, add the following below this CDDL HEADER, with the
# fields enclosed by brackets "[]" replaced with your own identifying
# information: Portions Copyright [yyyy] [name of copyright owner]
#
# CDDL HEADER END
#

#
# Copyright (c) 1997, 2010, Oracle and/or its affiliates. All rights reserved.
# Copyright 2020 Joyent, Inc.
#

LIBRARY	=	libsocket.a
VERS =		.1

OBJECTS =	bindresvport.o bootparams_getbyname.o ether_addr.o \
		getaddrinfo.o getnameinfo.o getnetent.o getnetent_r.o \
		getprotoent.o getprotoent_r.o getservbyname_r.o getservent.o \
		getservent_r.o inet6_opt.o inet6_rthdr.o interface_id.o \
		link_addr.o netmasks.o rcmd.o rexec.o ruserpass.o \
		sourcefilter.o getifaddrs.o

include ../../Makefile.lib

# install this library in the root filesystem
include ../../Makefile.rootfs

LIBS =		$(DYNLIB)

SRCS =		$(INETOBJS:%.o=../inet/%.c)
LDLIBS +=	-lnsl -lc

SRCDIR =	../common

# Make string literals read-only to save memory.
CFLAGS +=	$(XSTRCONST)
CFLAGS64 +=	$(XSTRCONST)

CPPFLAGS +=	-DSYSV -D_REENTRANT -I../../common/inc
%/rcmd.o :=	CPPFLAGS += -DNIS

CERRWARN +=	-_gcc=-Wno-type-limits
CERRWARN +=	$(CNOWARN_UNINIT)

# needs work
SMOFF += all_func_returns,no_if_block,sizeof

.KEEP_STATE:

all:

pics/%.o: ../inet/%.c
	$(COMPILE.c) -o $@ $<
	$(POST_PROCESS_O)

include ../../Makefile.targ
