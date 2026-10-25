/* NON_MATCHING: separate 0x7de/0x7df literals and saved-register allocation differ; retail hoists and shares the bounds, candidate optimization flags. */
#include "common.h"
#include "shard/dataTable8FindRecord.h"

struct ContentFlagsView {
    u8 unk00[0x68];
    u32 flags;
};

extern "C" {
u16 FUN_001ba3d4(s32 id);

u32 contentGetFirstFlaggedValue(void)
{
    u32 result = 0;
    u32 id = 0;
    const ContentFlagsView* record;
    while ((record = (const ContentFlagsView*)dataTable8FindRecord(id)) == NULL ||
           !(record->flags & 8)) {
        if (++id >= 0x7df) {
            return result;
        }
    }
    if (id - 1 < 0x7de) {
        result = FUN_001ba3d4(id);
    }
    return result;
}
}
