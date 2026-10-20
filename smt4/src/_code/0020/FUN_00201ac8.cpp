#include "common.h"

extern "C" {

int FUN_00297410(int id);
int FUN_002a5ed0(int table, int index);
int asdTMTexTableLoadSprites(int table);

void FUN_00201ac8(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x19);
    i = 0;
    do {
        FUN_002a5ed0(0x19, i);
        i++;
    } while (i < 3);
    FUN_00297410(0x39);
}

} /* extern "C" */
