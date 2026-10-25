#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
void scrSetResult(s32 result);
u32 scrGetArg(u32 index);

// Report whether every eligible battle unit has the selected group flag.
u32 FUN_0030ae60(void)
{
    u32 mask = 1u << scrGetArg(0);
    for (s32 index = 0; index < 0x6d; ++index) {
        BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[index];
        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) &&
            !(unit->flagMask & mask)) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}
}
