TOOLCHAIN_PREFIX ?= /opt/riscv/bin/riscv64-unknown-elf-
TOOLCHAIN_FLAGS  := -nostartfiles -march=rv32im -mabi=ilp32 -Tlink.ld -g
RESET_VECTOR     ?= 0
FLASH_ADDR       ?= 0x0

BIN              := bin
EXECUTABLE       := main
LIBRARIES        := 

all: $(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): *.c
	$(TOOLCHAIN_PREFIX)gcc $(TOOLCHAIN_FLAGS) $^ -o $@.elf $(LIBRARIES)
clean:
	rm -f $(BIN)/*
