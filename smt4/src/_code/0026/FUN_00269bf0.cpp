/* NON_MATCHING: battle-state base registers and the table-load scheduling differ. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

extern "C" {

// Use the active battle unit's maximum HP, or the persistent record's value outside battle.
s32 FUN_00269bf0(BtlUnitLink *record)
{
    s32 maxHp = record->maxHp;
    BtlMainState *battle = g_btlMainState.state;
    if (battle != NULL && battle->core.mode != 0x15) {
        BtlEntry *units = battle->entries;
        for (s32 index = 0; index < 0x6d; ++index) {
            BtlEntry *unit = &units[index];
            if ((unit->flags & 1) && !(unit->flags & 0x40) &&
                (unit->flags & 8) && unit->link == record) {
                maxHp = unit->maxHp;
                break;
            }
        }
    }
    return maxHp;
}
}
