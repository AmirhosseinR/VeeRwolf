# UART

Add the user to the following groups, and restart PC

    sudo usermod -a -G dialout $USER
    sudo usermod -a -G tty $USER
    sudo usermod -a -G uucp $USER


Plug USB to the PC, find out the file name of device (Last line)

    dmesg
    
Use minicom

    minicom -s
    
Or GTKTerm

    gtkterm
    
and set configuration in
    
    Configuration > Port
    
set monitor speed to 115200
