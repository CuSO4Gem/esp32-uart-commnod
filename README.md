# UART Events Example

这是一个基于esp32的uart_events例程的做的一个工程。可以像命令行一样从串口0输入输入命令。通过自己添加命令的解析可以在没有很多按钮的情况下方便的调试其他程序，或者实现一些功能。目前我主要利用这个功能配合picocom使用。

This is a project bease on uart_events example program. Esp32 can recive string from uart0 and work like commandline. This program can help you to debug other program or make implement other funtion by these file. I recommond you to use picocom.

# How to use it?

包括uart_cmd.c和uart_cmd.h两个文件，具体函数查看uart_cmd.h

The libary include uart_cmd.c and uart_cmd.h. It is easy to understand by read uart_cmd.h