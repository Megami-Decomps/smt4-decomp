/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"

namespace { struct Record { u8 padding[13]; u8 enabled; }; }

extern "C" {
s32 FUN_002a6f48(u32 group, u32 id, u32 owner);
Record *packageFindFileRefByName(u32 owner, s32 index);
void FUN_002a60cc(u32 owner, u32 group, u32 id)
{
    s32 index = FUN_002a6f48(group, id, owner);
    if (index != -1) {
        Record *record = packageFindFileRefByName(owner, index);
        if (record != NULL) { record->enabled = 1; }
    }
}
}
