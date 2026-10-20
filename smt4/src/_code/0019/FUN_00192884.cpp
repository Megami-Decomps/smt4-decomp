#include "common.h"

extern "C" {

int FUN_002a5ed0(int table, int index);
int asdTMTexTableLoadSprites(int table);

void FUN_00192884(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x1d);
    i = 0;
    do {
        FUN_002a5ed0(0x1d, i);
        i++;
    } while (i < 3);
}

} /* extern "C" */
