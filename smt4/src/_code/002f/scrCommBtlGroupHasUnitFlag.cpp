#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
u32 scrGetArg(u32 index);
BtlState *btlGetMainState(void);
void scrSetResult(s32 value);

/* Reports whether an eligible unit in the selected group has the requested flag bit. */
u32 scrCommBtlGroupHasUnitFlag(void)
{
    u32 group = scrGetArg(0);
    u32 flag = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlUnitEntry *entry = &btlGetMainState()->units[i];
        u32 flags = entry->flags;
        if ((flags & 0x10) != 0 && (flags & 1) != 0 && (flags & 0x40) == 0 &&
            entry->groupId == group && (entry->flagMask & (1u << static_cast<u8>(flag))) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
