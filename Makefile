.PHONY: all build clean

all: build

build:
	sdcc main.c

clean:
	rm -rf main.asm
	rm -rf main.lk
	rm -rf main.lst
	rm -rf main.map
	rm -rf main.mem
	rm -rf main.rel
	rm -rf main.rst
	rm -rf main.sym
