#include "shard/Shard004B.h"

extern "C" {

extern void FUN_0014384c(s32 id);
extern void FUN_001acf98(s32 id, s32 index);

void resetFlagGroup1F(void)
{
    FUN_0014384c(0x1F);
    FUN_001acf98(0x1F, 0);
}

} /* extern "C" */
