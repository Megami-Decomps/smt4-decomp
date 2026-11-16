#include "common.h"

namespace { struct Record { u8 padding[13]; u8 enabled; }; }

extern "C" {
unsigned int packageKindToRecordKind(int param_1);
Record *packageFindFileRefByName(u32 owner, s32 index, u32 id);
void packageFileDisableByKindName(u32 owner, u32 group, u32 id)
{
    s32 index = packageKindToRecordKind(group);
    if (index != -1) {
        Record *record = packageFindFileRefByName(owner, index, id);
        if (record != NULL) { record->enabled = 0; }
    }
}
}
