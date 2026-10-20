#include "shard/Shard004B.h"

extern "C" {

extern void FUN_0019a7f4(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);

void freeTexEntry1F(void)
{
    FUN_0019a7f4(0x1F, 0);
    asdTMTexTableFreeEntry(0x1F);
}

} /* extern "C" */
