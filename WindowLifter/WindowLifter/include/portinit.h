#include "S32K144.h"

#define PTD0 0 /* Port PTD0, bit 0: FRDM EVB output to blue LED */
#define PTC12 12 /* Port PTC12, bit 12: FRDM EVB input from BTN0 [SW2] */

void WDOG_disable (void);
