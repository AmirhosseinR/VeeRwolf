# Generate elf file

    make clean
    make

# Run program

    load_image ../workspace/led_switch/bin/led_switch.elf
    reg pc 0
    resume
    // Finish
    halt
