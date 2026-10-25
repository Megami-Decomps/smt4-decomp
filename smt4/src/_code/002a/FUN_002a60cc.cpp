#include "common.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

namespace { struct Record { u8 padding[13]; u8 enabled; }; }

extern "C" {
s32 FUN_002a6f48(s32 kind);
Record *packageFindFileRefByName(u32 owner, s32 kind, u32 name);
void FUN_002a60cc(u32 owner, u32 group, u32 id)
{
    s32 index = FUN_002a6f48(group);
    if (index != -1) {
        Record *record = packageFindFileRefByName(owner, index, id);
        if (record != NULL) { record->enabled = 0; }
    }
}
}
