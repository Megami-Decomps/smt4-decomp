#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"
extern "C" {
void scrSetResult(s32);
u32 scrGetArg(u32);

// Reports whether a present, non-excluded unit has the requested value's special kind.
u32 FUN_002f05f8(void)
{
    u32 selector = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        BtlEntry* unit = &btlGetMainState()->entries[index];
        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 &&
            (unit->flags & 0x40) == 0 && (unit->values[selector] >> 10) == 2) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
