all: gdb_asm_ex

gdb_asm_ex: gdb_asm_ex.c
	gcc -fcf-protection=none -fno-pie -no-pie -m32 -march=i386 -o gdb_asm_ex gdb_asm_ex.c

clean:
	rm gdb_asm_ex
