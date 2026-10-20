#include "common.h"

extern "C" {

extern u8 *FUN_002bbb5c(void);

u16 QcActive_GetField24(void)
{
    u8 *block = FUN_002bbb5c();

    return *(u16 *)(block + 0x18);
}

} /* extern "C" */
