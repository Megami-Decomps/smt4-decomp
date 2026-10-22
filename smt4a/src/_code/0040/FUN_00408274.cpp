/* NON_MATCHING: Mask scheduling and conditional-store lowering differ; the owner-enabled byte uses add/load instead of indexed writeback. */
#include "gamedata/IndexedFlags.h"

extern "C" {
IndexedFlags *FUN_002c2710(void);

/* Changes an indexed flag and marks its owner enabled whenever a flag is set. */
void FUN_00408274(u32 owner, u32 flag, s32 enabled)
{
    if (owner >= 110) {
        return;
    }
    if ((s32)owner >= 100 || (s32)flag > 100) {
        return;
    }
    IndexedFlags *storage = FUN_002c2710();
    u8 *bits = storage->flags + owner * 4;
    bits += flag >> 3;
    u8 mask = (u8)(1 << (flag & 7));
    if (enabled) {
        *bits |= mask;
        storage = FUN_002c2710();
        bits = storage->enabled;
        bits += owner >> 3;
        mask = (u8)(1 << (owner & 7)) | *bits;
    } else {
        mask = *bits & ~mask;
    }
    *bits = mask;
}
}
