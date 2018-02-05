# Enable debugging and suppress pesky warnings
CFLAGS ?= -g -w

all:	vulnerable

clean:
	rm -f vulnerable

vulnerable: vulnerable.c 
	~/afl/afl-gcc -Wno-format -m32 -o vulnerable vulnerable.c

fuzz: vulnerable
	~/afl/afl-fuzz -m 4G -i inputs -o outputs -- ./vulnerable
