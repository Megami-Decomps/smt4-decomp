/* NON_MATCHING: constants and register allocation match retail (the named count hoists 0x7de and derives 0x7df); retail sets up the call argument before the bounds branch and returns from mid-function, the build places the epilogue last (nop {0}; b). */
#include "gamedata/ConsumableRecordA.h"

extern "C" {
u16 flagValueRead(s32 id);

u32 contentGetFirstFlaggedValue(void)
{
    const u32 count = 0x7de;
    u32 result = 0;
    for (u32 id = 0; id < count + 1; id++) {
        const ConsumableRecordA *record = itemTableGetItemRecord(id);
        if (record != NULL && (record->flags & 8)) {
            if (id - 1 < count) {
                result = flagValueRead(id);
            }
            return result;
        }
    }
    return result;
}
}
