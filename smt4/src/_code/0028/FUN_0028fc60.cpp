/* NON_MATCHING: common single-target lookup loop, applicability normalization and saved register allocation differ. */
#include "shard/W7_W7Match2_PartyDamage.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {
PartyDamageSlotsIV *gameGetSlotTable();
s32 itemApplyToMember(s32, const ConsumableRecord *, s32, s32, s32);

u32 FUN_0028fc60(u32 id)
{
    if (id - 1 >= 60)
        return 0;
    const ConsumableRecord *item = itemTableGetItemRecord(id);
    if (item->type != 1 && item->type != 3)
        return 0;
    if (item->target & 0x80) {
        item = itemTableGetItemRecord(id);
        if (!item)
            return 0;
        bool applicable = itemApplyToMember(-1, item, 1, 0, 0) == 0;
        PartyDamageSlotsIV *slots = gameGetSlotTable();
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = slots->stock[i];
            if (slot >= 0 && itemApplyToMember(slot, item, 1, 0, 0) == 0)
                applicable = true;
        }
        return applicable;
    }
    PartyDamageSlotsIV *slots = gameGetSlotTable();
    for (s32 i = -1; i < 24; ++i) {
        s32 slot = -1;
        if (i >= 0) {
            slot = slots->stock[i];
            if (slot < 0)
                continue;
        }
        item = itemTableGetItemRecord(id);
        if (item && itemApplyToMember(slot, item, 1, 0, 0) == 0)
            return 1;
    }
    return 0;
}
}
