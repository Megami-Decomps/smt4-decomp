#include "common.h"

extern "C" {

u8 *FUN_00301454(u8 *table);
extern u8 DAT_0062d88c[];

/* Returns the address 4 bytes into the structure FUN_00301454 returns for the global at 0x62D88C. */
u8 *FUN_00115380(void)
{
    u8 *object = FUN_00301454(DAT_0062d88c);
    return object + 4;
}

} /* extern "C" */
