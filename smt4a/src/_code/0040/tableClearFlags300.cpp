#include "shard/Shard0040.h"

extern "C" {

extern u8 *gameDataBlocksGetHalf280C4(s32 index);

/* Clears byte 1 and the low three bits of byte 0 of each of the 300 table entries. */
void tableClearFlags300(void)
{
    s32 i;
    u8 *entry;

    for (i = 0; i < 300; i++) {
        entry = gameDataBlocksGetHalf280C4(i);
        entry[1] = 0;
        *entry = *entry & ~7;
    }
}

} /* extern "C" */
