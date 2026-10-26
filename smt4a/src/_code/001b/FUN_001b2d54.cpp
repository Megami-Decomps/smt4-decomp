#include "common.h"

namespace { struct Record { u8 padding[13]; u8 enabled; }; }

extern "C" {
unsigned int FUN_001b3214(int param_1);
Record *packageFindFileRefByName(u32 owner, s32 index, u32 id);
void FUN_001b2d54(u32 owner, u32 group, u32 id)
{
    s32 index = FUN_001b3214(group);
    if (index != -1) {
        Record *record = packageFindFileRefByName(owner, index, id);
        if (record != NULL) { record->enabled = 0; }
    }
}
}
