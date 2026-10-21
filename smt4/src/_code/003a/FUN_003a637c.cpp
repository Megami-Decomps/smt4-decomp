#include "common.h"

struct AocRecord {
    /* 0x00 */ u8 unk00[42];
    /* 0x2a */ u16 flags;
};
extern "C" {
s32 FUN_002ae3c4(u32 id);
AocRecord *aocRecordLookup84(u32 id);
/* Returns the content flags when the prerequisite query succeeds. */
s32 FUN_003a637c(u32 id)
{
    if (FUN_002ae3c4(id) != 10)
        return 0;
    AocRecord *record = aocRecordLookup84(id);
    return record ? record->flags : 0;
}
}
