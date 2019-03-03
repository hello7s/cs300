1. Write exit.c program
2. Compile exit static
	gcc -static -o exit exit.c
3. Disassemble the binary
	gdb exit
	disas _exit
4. nasm -f elf exit_shellcode.asm
5. ld -o exit_shellcode exit_shellcode.o
6. objdump -d exit_shellcode
7. gcc -o wack wack.c
8. strace ./wack
