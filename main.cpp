// NuMaker-PFM-NUC472
#include "mbed.h"
 
Serial device(PG_2, PG_1);  // TX0, RX0
 
int main() {
    device.baud(115200); // set UART0 baudrate at 115200
    device.printf("Hello NuMaker\n\r");
}
