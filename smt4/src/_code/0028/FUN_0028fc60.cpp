/* NON_MATCHING: common single-target lookup loop, applicability normalization and saved register allocation differ. */
#include "shard/W7_W7Match2_PartyDamage.h"

struct PartyUseItemView {
    u8 unk00[0x6A];
    u8 targetFlags;
    u8 unk6B[2];
    u8 kind;
};
extern "C" {
const PartyUseItemView *dataTable08Sub1GetRecord(u32);
PartyDamageSlotsIV *gameGetSlotTable();
s32 FUN_00232b68(s32, const PartyUseItemView *, s32, s32, s32);

u32 FUN_0028fc60(u32 id)
{
    if (id - 1 >= 60)
        return 0;
    const PartyUseItemView *item = dataTable08Sub1GetRecord(id);
    if (item->kind != 1 && item->kind != 3)
        return 0;
    if (item->targetFlags & 0x80) {
        item = dataTable08Sub1GetRecord(id);
        if (!item)
            return 0;
        bool applicable = FUN_00232b68(-1, item, 1, 0, 0) == 0;
        PartyDamageSlotsIV *slots = gameGetSlotTable();
        for (s32 i = 0; i < 24; ++i) {
            s32 slot = slots->stock[i];
            if (slot >= 0 && FUN_00232b68(slot, item, 1, 0, 0) == 0)
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
        item = dataTable08Sub1GetRecord(id);
        if (item && FUN_00232b68(slot, item, 1, 0, 0) == 0)
            return 1;
    }
    return 0;
}
}
