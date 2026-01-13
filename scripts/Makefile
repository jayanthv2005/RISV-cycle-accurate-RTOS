CC = riscv32-unknown-elf-gcc
CFLAGS = -Wall -O0 -nostdlib -march=rv32i

SRC = kernel/*.c kernel/*.S test/main.c
LINKER = linker/linker.ld

all:
	$(CC) $(CFLAGS) $(SRC) -T $(LINKER) -o rtos.elf

clean:
	rm -f *.elf
