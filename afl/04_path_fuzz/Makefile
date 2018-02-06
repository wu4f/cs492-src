# Enable debugging and suppress pesky warnings
CFLAGS ?= -g -w

all:	path_based strcmp_based

clean:
	rm -rf path_based strcmp_based outputs

path_based: path_based.c
	~/afl/afl-gcc -Wno-format -m32 -o path_based path_based.c

strcmp_based: strcmp_based.c
	~/afl/afl-gcc -Wno-format -m32 -o strcmp_based strcmp_based.c

fuzz_path_based: path_based
	~/afl/afl-fuzz -m 4G -i inputs -o outputs -- ./path_based

fuzz_strcmp_based: strcmp_based
	~/afl/afl-fuzz -m 4G -i inputs -o outputs -- ./strcmp_based
