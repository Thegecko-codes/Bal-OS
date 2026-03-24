#include "uart.h"

void kernel_main(void){
  uart_init();
  uart_prints("Welcome to Minimal OS\nCopyright (c) 2026 Gecko. All Rights Reserved.\n!!!JBJC!!!\n");
  while(1)
  {
    uart_prints(">>> ");
    while (1) {
      char c = uart_inputc();
      if(c == '\r')
        break;
      else if (c == 127)
      {
        uart_printc('\b');
        uart_printc(' ');
        uart_printc('\b');
      }
      uart_printc(c);

    }
    uart_printc('\n');
  }
}
