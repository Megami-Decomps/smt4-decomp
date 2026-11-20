/* NON_MATCHING: the id/kind registers are reversed, and the out-of-battle HP/MP clamps use different scratch registers. */
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

enum {
    VITAL_HP = 0,
    VITAL_MP = 1
};

/* Adds a clamped HP/MP amount and copies live battle values back to the persistent unit. */
void btlAddClampedVital(s32 id, s32 kind, s32 amount)
{
    BtlMainState *state = btlGetMainState();
    if (id < BTL_ENTRY_COUNT) {
        BtlUnitData *live = btlFindEntryBlockByMemberId(state, id);
        if (live == NULL)
            return;
        if (kind == VITAL_HP)
            addClampedVital(&live->hp, live->maxHp, amount);
        if (kind == VITAL_MP)
            addClampedVital(&live->mp, live->maxMp, amount);
        BtlEntry *entry = btlMainFindEntryByListedId(state, id);
        if (entry->data.equipA) {
            entry->data.equipA->hp = live->hp;
            entry->data.equipA->mp = live->mp;
            return;
        }
        if (entry->data.equipB) {
            entry->data.equipB->hp = live->hp;
            entry->data.equipB->mp = live->mp;
            return;
        }
        if (entry->data.reserve) {
            entry->data.reserve->hp = live->hp;
            entry->data.reserve->mp = live->mp;
        }
        return;
    }
    StatBlock *unit = gameGetUnitRecord(id - BTL_ENTRY_COUNT);
    if (kind == VITAL_HP)
        addClampedVital(&unit->hp, unit->maxHp, amount);
    else if (kind == VITAL_MP)
        addClampedVital(&unit->mp, unit->maxMp, amount);
}

} /* extern "C" */
