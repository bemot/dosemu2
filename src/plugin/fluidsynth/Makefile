#
# (C) Copyright 1992, ..., 2014 the "DOSEMU-Development-Team".
#
# for details see file COPYING.DOSEMU in the DOSEMU distribution
#

top_builddir=../../..
include $(top_builddir)/Makefile.conf
-include Makefile.conf

ALL_CFLAGS+=$(DL_CFLAGS) $(FLUSCFLAGS) \
	-I$(REALTOPDIR)/src/plugin/fluidsynth/fluid_rip
CFILES = mid_o_flus.c fluid_rip/fluid_seqbind.c
ALL_LDFLAGS += -Bsymbolic
ifdef USE_DL_PLUGINS
all: $(BINPATH)/bin/libplugin_fluidsynth.so
ALL_CFLAGS += -fPIC
endif

include $(REALTOPDIR)/src/Makefile.common

ifdef USE_DL_PLUGINS
$(BINPATH)/bin/libplugin_fluidsynth.so: $(OBJS) | $(BINPATH)/bin
	$(CC) $(ALL_LDFLAGS) -shared -o $@ $^ $(FLUSLIB)
endif
