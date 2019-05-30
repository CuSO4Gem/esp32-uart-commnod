#ifndef _UART_CMD_H_
#define	_UART_CMD_H_

#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/uart.h"
#include "esp_log.h"

#define EX_UART_NUM UART_NUM_0
#define PATTERN_CHR_NUM    (3)         /*!< Set the number of consecutive and identical characters received by receiver which defines a UART pattern*/

#define BUF_SIZE (1024)
#define RD_BUF_SIZE (BUF_SIZE)

typedef void (*uart_cmd_cb_t)(uint8_t* dtmp, uint16_t date_point);

/**
 * @description: 初始化函数
 *               initialize
 * @param {UBaseType_t} 对应任务的优先级
 * @return: 
 */
void uart_cmd_init(UBaseType_t uxPriority);

/**
 * @description: 注册命令解析的回调函数
 *               registe callback funtion of command analize
 * @param {uart_cmd_cb_t} 
 * @return: 
 */
void uart_cmd_register_callback(uart_cmd_cb_t callback);

#endif