#include "common.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);
int asdTMTexTableLoadSprites(int table);

void spriteTable2aLoad(void)
{
    asdTMTexTableLoadSprites(0x2a);
    asdTMTexTableLoadEntryAsync(0x2a, 0);
}

} /* extern "C" */
