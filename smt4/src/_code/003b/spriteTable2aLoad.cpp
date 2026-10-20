#include "common.h"

extern "C" {

int FUN_002a5ed0(int table, int index);
int asdTMTexTableLoadSprites(int table);

void spriteTable2aLoad(void)
{
    asdTMTexTableLoadSprites(0x2a);
    FUN_002a5ed0(0x2a, 0);
}

} /* extern "C" */
