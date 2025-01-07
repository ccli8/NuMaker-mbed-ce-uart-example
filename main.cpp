#include "mbed.h"

/* UNO compatible targets have D1/D0 for UART TX/RX */
BufferedSerial my_serial(D1, D0, 115200);

int main()
{
    printf("Connect D1/D0 to Nu-COM for test...\r\n");

    std::FILE *my_serial_file = mbed::fdopen(&my_serial, "w+");
    int i = 0;
    while (1) {
        fprintf(my_serial_file, "Hello NuMaker %d\r\n", ++ i);

        ThisThread::sleep_for(2000ms);
    }
    std::fclose(my_serial_file);

    return 0;
}
