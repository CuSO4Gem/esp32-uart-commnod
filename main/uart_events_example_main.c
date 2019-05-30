#include "uart_cmd.h"

void uart_commond(uint8_t* dtmp, uint16_t date_point)
{
    uart_write_bytes(EX_UART_NUM, "\r\ncommand analize", 18);
}

void app_main()
{
    uart_cmd_register_callback(uart_commond);
    uart_cmd_init(12);
}
