#include "common.h"

extern "C" {

int FUN_002a5ed0(int table, int index);
int asdTMTexTableLoadSprites(int table);

void spriteTables14And15Load(void)
{
    int i;

    asdTMTexTableLoadSprites(8);
    asdTMTexTableLoadSprites(0x14);
    asdTMTexTableLoadSprites(0x15);
    FUN_002a5ed0(8, 10);
    i = 0;
    do {
        FUN_002a5ed0(0x14, i);
        i = i + 1;
    } while (i < 5);
    i = 0;
    do {
        FUN_002a5ed0(0x15, i);
        i = i + 1;
    } while (i < 4);
}

} /* extern "C" */
