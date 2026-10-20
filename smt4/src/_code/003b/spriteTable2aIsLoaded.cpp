#include "common.h"

extern "C" {

extern int FUN_002a60b4(u32 table, u32 index);

u8 spriteTable2aIsLoaded(void)
{
    return FUN_002a60b4(0x2a, 0) != 0;
}

} /* extern "C" */
