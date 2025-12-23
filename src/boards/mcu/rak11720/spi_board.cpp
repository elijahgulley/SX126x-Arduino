#ifdef RAK11720

#include "boards/mcu/board.h"
#include <SPI.h>

extern SPIClass SPI_LORA;

void initSPI(void)
{
	SPI_LORA.begin();
}
#endif