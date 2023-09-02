#define GPIO_BASE               0x80001010

#define READ_SW(addr)          ((*(volatile unsigned *)addr) >> 16)
#define WRITE_LED(addr, value) { (*(volatile unsigned *)addr) = (value); }

volatile unsigned int sw_value;
int main ( void )
{
    while (1) { 
        sw_value = READ_SW(GPIO_BASE);
        WRITE_LED(GPIO_BASE, sw_value);
    }

    return(0);
}
