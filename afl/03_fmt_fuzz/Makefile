# Enable debugging and suppress pesky warnings
CFLAGS ?= -g -w

all:	vulnerable

clean:
	rm -rf vulnerable outputs

vulnerable: vulnerable.c
	afl-gcc -Wno-format -m32 -o vulnerable vulnerable.c

fuzz: vulnerable
	afl-fuzz -i inputs -o outputs -- ./vulnerable
