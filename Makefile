.POSIX:

include config.mk

SRC = $(wildcard *.c)
HDR = $(wildcard *.h)
OBJ = $(SRC:.c=.o)

all: options $(ZC_LIBNAME)

options:
	@echo zc build options
	@echo "    ZC_LIBNAME = $(ZC_LIBNAME)"
	@echo "    ZC_VERSION = $(ZC_VERSION)"
	@echo "    ZC_PREFIX  = $(ZC_PREFIX)"
	@echo "    ZC_CFLAGS  = $(ZC_CFLAGS)"
	@echo "    ZC_LDFLAGS = $(ZC_LDFLAGS)"
	@echo "    ZC_CC      = $(ZC_CC)"

$(OBJ): $(HDR)

.c.o:
	$(ZC_CC) $(ZC_CFLAGS) -c $<

$(ZC_LIBNAME): $(OBJ)
	$(AR) rcs $@ $^

clean:
	rm -f $(ZC_LIBNAME) $(OBJ) zc-$(ZC_VERSION).tar.gz

dist: clean
	mkdir -p zc-$(ZC_VERSION)
	cp -R Makefile README LICENSE $(SRC) zc-$(ZC_VERSION)
	tar -cf - zc-$(ZC_VERSION) | gzip > zc-$(ZC_VERSION).tar.gz
	rm -rf zc-$(ZC_VERSION)

install: $(ZC_LIBNAME)
	mkdir -p $(ZC_PREFIX)/lib
	cp -f $(ZC_LIBNAME) $(ZC_PREFIX)/lib

uninstall:
	rm -f $(ZC_PREFIX)/lib/$(ZC_LIBNAME)

.PHONY: all options clean dist install uninstall
