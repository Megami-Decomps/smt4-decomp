#include "common.h"

extern "C" {

void asdTMTexTableLoadSprites(s32 table);
void FUN_001acf98(s32 table, s32 index);

/* Prepares table 0x14 and then runs FUN_001acf98 on each of its four entries. */
void FUN_00212774(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x14);
    i = 0;
    do {
        FUN_001acf98(0x14, i);
        i = i + 1;
    } while (i < 4);
}

} /* extern "C" */
