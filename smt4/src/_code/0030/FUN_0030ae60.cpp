/* NON_MATCHING: unit-base writeback and group-mask addressing use different forms. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
void scrSetResult(s32 result);
BtlState *btlGetMainState(void);
u32 scrGetArg(u32 index);

// Report whether every eligible battle unit has the selected group flag.
u32 FUN_0030ae60(void)
{
    u32 mask = 1u << scrGetArg(0);
    for (s32 index = 0; index < 0x6d; ++index) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];
        u32 flags = unit->flags;
        if ((flags & 0x10) && (flags & 1) && !(flags & 0x40) &&
            !(unit->flagMask & mask)) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}
}
