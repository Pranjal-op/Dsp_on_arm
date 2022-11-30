#ifndef __FIFO_H__
#define __FIFO_H__

#include <stdint.h>

#define RXFIFOSIZE     300
#define RXFIFOFAIL         0
#define RXFIFOSUCCESS  1

typedef uint32_t rx_dataType;

void rx_fifo_init(void);
uint8_t rx_fifo_put(rx_dataType data);
uint8_t rx_fifo_get(rx_dataType *datapt);


#endif
