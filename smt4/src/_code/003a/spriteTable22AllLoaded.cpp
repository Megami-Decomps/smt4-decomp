#include "common.h"

extern "C" {

extern int FUN_002a60b4(u32 table, int index);

/* 1 when both entries of table 0x22 are loaded. */
u32 spriteTable22AllLoaded(void)
{
    int i = 0;

    do {
        if (FUN_002a60b4(0x22, i) == 0) {
            return 0;
        }
        i = i + 1;
    } while (i < 2);
    return 1;
}

} /* extern "C" */
