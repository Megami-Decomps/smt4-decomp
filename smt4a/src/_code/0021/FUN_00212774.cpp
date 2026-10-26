#include "common.h"
#include "shard/asdTMTexLoadMainHeap.h"

extern "C" {

void asdTMTexTableLoadSprites(s32 table);

/* Prepares table 0x14 and then runs asdTMTexLoadMainHeap on each of its four entries. */
void FUN_00212774(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x14);
    i = 0;
    do {
        asdTMTexLoadMainHeap(0x14, i);
        i = i + 1;
    } while (i < 4);
}

} /* extern "C" */
