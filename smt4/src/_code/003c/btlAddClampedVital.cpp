/* NON_MATCHING: id/kind registers are reversed and the compiler places the shared clamping and persistent-copy tails differently from retail. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/UnitRecordAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {

static __inline void addClampedVital(s16 *value, s16 maximum, s32 amount)
{
    s32 result = *value + amount;
    result = result < 0 ? 0 : result;
    if (result > maximum)
        result = maximum;
    *value = result;
}

// Add a clamped HP/MP amount and copy live battle values back to the persistent unit.
void btlAddClampedVital(s32 id, s32 kind, s32 amount)
{
    BtlMainState *state = btlGetMainState();
    if (id < BTL_ENTRY_COUNT) {
        BtlUnitData *live = btlFindEntryBlockByMemberId(state, id);
        if (live == NULL)
            return;
        if (kind == 0)
            addClampedVital(&live->hp, live->maxHp, amount);
        else if (kind == 1)
            addClampedVital(&live->mp, live->maxMp, amount);
        BtlEntry *entry = btlMainFindEntryByListedId(state, id);
        if (entry->data.equipA) {
            entry->data.equipA->hp = live->hp;
            entry->data.equipA->mp = live->mp;
        } else if (entry->data.equipB) {
            entry->data.equipB->hp = live->hp;
            entry->data.equipB->mp = live->mp;
        } else if (entry->data.reserve) {
            entry->data.reserve->hp = live->hp;
            entry->data.reserve->mp = live->mp;
        }
        return;
    }
    /* battle entries view the unit record through BtlEquip (battle/BtlEntry.h) */
    BtlEquip *unit = reinterpret_cast<BtlEquip *>(gameGetUnitRecord(id - BTL_ENTRY_COUNT));
    if (kind == 0)
        addClampedVital(&unit->hp, unit->maxHp, amount);
    else if (kind == 1)
        addClampedVital(&unit->mp, unit->maxMp, amount);
}
}
