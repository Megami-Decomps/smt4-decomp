/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"

namespace { struct Record { u8 padding[13]; u8 enabled; }; }

extern "C" {
s32 FUN_001b3214(u32 group, u32 id, u32 owner);
Record *FUN_001b2ca4(u32 owner, s32 index);
void FUN_001b2d54(u32 owner, u32 group, u32 id)
{
    s32 index = FUN_001b3214(group, id, owner);
    if (index != -1) {
        Record *record = FUN_001b2ca4(owner, index);
        if (record != NULL) { record->enabled = 1; }
    }
}
}
