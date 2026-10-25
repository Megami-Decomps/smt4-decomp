/* NON_MATCHING: id/kind registers are reversed and the compiler places the shared clamping and persistent-copy tails differently from retail. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

struct BattleLiveVitals {
    /* 0x00 */ u8 unk00[0xe8];
    /* 0xe8 */ s16 hp;
    /* 0xea */ s16 maxHp;
    /* 0xec */ s16 mp;
    /* 0xee */ s16 maxMp;
};

extern "C" {
BattleLiveVitals *FUN_0027da30(BtlMainState *, s32 id);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, s32 id);
BtlEquip *gameGetUnitRecord(s32 id);

static __inline void addClampedVital(s16 *value, s16 maximum, s32 amount)
{
    s32 result = *value + amount;
    if (result < 0)
        result = 0;
    if (result > maximum)
        result = maximum;
    *value = result;
}

// Add a clamped HP/MP amount and copy live battle values back to the persistent unit.
void btlAddClampedVital(s32 id, s32 kind, s32 amount)
{
    BtlMainState *state = btlGetMainState();
    if (id < BTL_ENTRY_COUNT) {
        BattleLiveVitals *live = FUN_0027da30(state, id);
        if (live == NULL)
            return;
        if (kind == 0)
            addClampedVital(&live->hp, live->maxHp, amount);
        else if (kind == 1)
            addClampedVital(&live->mp, live->maxMp, amount);
        BtlEntry *entry = btlMainFindEntryByListedId(state, id);
        if (entry->equipA) {
            entry->equipA->hp = live->hp;
            entry->equipA->mp = live->mp;
        } else if (entry->equipB) {
            entry->equipB->hp = live->hp;
            entry->equipB->mp = live->mp;
        } else if (entry->reserve) {
            entry->reserve->hp = live->hp;
            entry->reserve->mp = live->mp;
        }
        return;
    }
    BtlEquip *unit = gameGetUnitRecord(id - BTL_ENTRY_COUNT);
    if (kind == 0)
        addClampedVital(&unit->hp, unit->maxHp, amount);
    else if (kind == 1)
        addClampedVital(&unit->mp, unit->maxMp, amount);
}
}
