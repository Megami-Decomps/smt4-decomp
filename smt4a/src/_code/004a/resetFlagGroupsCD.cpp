#include "shard/Shard004A.h"

extern "C" {

extern void FUN_0014384c(s32 id);
extern void FUN_001acf98(s32 id, s32 index);

void resetFlagGroupsCD(void)
{
    s32 i;

    FUN_0014384c(0xC);
    FUN_0014384c(0xD);
    for (i = 0; i < 6; i++) {
        FUN_001acf98(0xC, i);
    }
    for (i = 0; i < 5; i++) {
        FUN_001acf98(0xD, i);
    }
}

} /* extern "C" */
