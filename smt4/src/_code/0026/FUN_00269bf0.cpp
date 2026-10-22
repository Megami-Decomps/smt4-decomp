/* NON_MATCHING: battle-state base registers and the table-load scheduling differ. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
extern BtlState *g_btlMainState;

// Use the active battle unit's maximum HP, or the persistent record's value outside battle.
s32 FUN_00269bf0(BtlUnitLink *record)
{
    s32 maxHp = record->maxHp;
    if (g_btlMainState != NULL && g_btlMainState->mode != 0x15) {
        BtlUnitEntry *units = g_btlMainState->units;
        for (s32 index = 0; index < 0x6d; ++index) {
            BtlUnitEntry *unit = &units[index];
            if ((unit->flags & 1) && !(unit->flags & 0x40) &&
                (unit->flags & 8) && unit->link == record) {
                maxHp = unit->hpMax;
                break;
            }
        }
    }
    return maxHp;
}
}
