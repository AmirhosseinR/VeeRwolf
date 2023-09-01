TOOLCHAIN_PREFIX ?= /opt/riscv/bin/riscv64-unknown-elf-
TOOLCHAIN_FLAGS  := -nostartfiles -march=rv32im -mabi=ilp32 -Tlink.ld
RESET_VECTOR     ?= 0
FLASH_ADDR       ?= 0x0

BIN              := bin
EXECUTABLE       := count_switches
LIBRARIES        := 

all: $(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): *.S
	$(TOOLCHAIN_PREFIX)gcc $(TOOLCHAIN_FLAGS) $^ -o $@.elf $(LIBRARIES)
clean:
	rm -f $(BIN)/*
