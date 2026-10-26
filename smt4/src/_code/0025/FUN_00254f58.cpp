/* NON_MATCHING: order-reset loop registers, flag-address lifetime, and selected-index tail sharing differ. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"

extern "C" {
s16 FUN_00255de0(s32 minimum, s32 maximum);
void battleSortTurnOrder(BtlMainState *, s32);

void FUN_00254f58(BtlMainState *owner)
{
    /* This view includes fields past BtlMainState's published prefix. */
    struct OrderWorkView {
        u8 unk0000[0x1FC0];
        BtlEntry *units;
        u8 unk1FC4[4];
        s16 selected;
        u8 unk1FCA[0xF3C];
        s16 order[12];
        s16 cursor;
        u8 unk2F20[0x1580];
        u32 flags;
    };
    typedef char OrderWorkOffsets[
        offsetof(OrderWorkView, selected) == 0x1FC8 &&
        offsetof(OrderWorkView, order) == 0x2F06 &&
        offsetof(OrderWorkView, cursor) == 0x2F1E &&
        offsetof(OrderWorkView, flags) == 0x44A0 ? 1 : -1];
    OrderWorkView *work = (OrderWorkView *)owner;
    for (s32 i = 0; i < 12; ++i)
        work->order[i] = -1;
    work->cursor = -1;

    s32 first, count;
    if (work->flags & 4) {
        first = 4;
        count = 50;
    } else if (work->flags & 0x1000) {
        first = 54;
        count = 1;
    } else {
        first = 0;
        count = 4;
    }
    s32 end = first + count;
    s32 entries = 0;
    for (s32 i = first; end > i; ++i) {
        if ((work->units[i].flags & 1) && !(work->units[i].flags & 0x40)) {
            work->order[entries] = work->units[i].selectionIndex;
            ((BtlEntry *)&work->units[i])->speedBonus = 0;
            if (work->units[i].flags & 2)
                ((BtlEntry *)&work->units[i])->speedBonus = 5;
            if (!(work->flags & 0x40000)) {
                s16 variation = FUN_00255de0(-3, 3);
                ((BtlEntry *)&work->units[i])->speedBonus += variation;
            }
            ++entries;
        }
    }
    if (entries > 0) {
        work->cursor = 0;
        battleSortTurnOrder(owner, 0);
        work->selected = work->order[work->cursor];
    } else {
        work->cursor = -1;
        work->selected = -1;
    }
}
}
