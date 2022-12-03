
#include <stdio.h>
#include "periph/uart.h"

void recieve_callback(void *arg, uint8_t data)
{
    (void) arg;
    printf("Data: %d", data);
}

int main(void)
{
    puts("Testing UART config");
    uart_init(UART_DEV(0), 57600, recieve_callback, NULL);

    printf("TX pin: %ld, RX pin: %ld", uart_pin_tx(UART_DEV(0)), uart_pin_rx(UART_DEV(0)));

    return 0;
}
