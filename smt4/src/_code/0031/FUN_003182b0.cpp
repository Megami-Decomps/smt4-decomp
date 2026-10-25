/* Reports whether a present battle entry in the requested group owns the slot. */
#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrSetResult(s32 result);
s32 btlCommandOwnerHasSlotId(BtlUnitEntry *entry, u32 slot);
u32 scrGetArg(u32 index);

u32 FUN_003182b0(void)
{
    u32 group = scrGetArg(0);
    u32 slot = scrGetArg(1);
    for (s32 i = 0; i < 109; ++i) {
        BtlUnitEntry *entry = &reinterpret_cast<BtlState *>(btlGetMainState())->units[i];
        if ((entry->flags & 0x10) && (entry->flags & 1) &&
            !(entry->flags & 0x40) && entry->groupId == group &&
            btlCommandOwnerHasSlotId(entry, slot)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
