#include "shard/Shard004A.h"

extern "C" {

extern void asdTMTexTableLoadSprites(s32 id);
extern void FUN_001acf98(s32 id, s32 index);

void resetFlagGroupsCD(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0xC);
    asdTMTexTableLoadSprites(0xD);
    for (i = 0; i < 6; i++) {
        FUN_001acf98(0xC, i);
    }
    for (i = 0; i < 5; i++) {
        FUN_001acf98(0xD, i);
    }
}

} /* extern "C" */
