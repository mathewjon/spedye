# Spdylay - SPDY Library

# Copyright (c) 2012 Tatsuhiro Tsujikawa

# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:

# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
# LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
# OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
SUBDIRS = includes

AM_CFLAGS = -Wall
AM_CPPFLAGS = -I$(srcdir)/includes -I$(builddir)/includes @DEFS@

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libspdylay.pc
DISTCLEANFILES = $(pkgconfig_DATA)

lib_LTLIBRARIES = libspdylay.la

OBJECTS = spdylay_pq.c spdylay_map.c spdylay_queue.c \
	spdylay_buffer.c spdylay_frame.c spdylay_zlib.c \
	spdylay_session.c spdylay_helper.c spdylay_stream.c spdylay_npn.c \
	spdylay_submit.c spdylay_outbound_item.c

HFILES = spdylay_pq.h spdylay_int.h spdylay_map.h spdylay_queue.h \
	spdylay_buffer.h spdylay_frame.h spdylay_zlib.h \
	spdylay_session.h spdylay_helper.h spdylay_stream.h spdylay_int.h \
	spdylay_npn.h \
	spdylay_submit.h spdylay_outbound_item.h \
	spdylay_net.h

libspdylay_la_SOURCES = $(HFILES) $(OBJECTS)
libspdylay_la_LDFLAGS = -no-undefined \
	-version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE)
