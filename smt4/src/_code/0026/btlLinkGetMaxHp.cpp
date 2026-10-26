#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

extern "C" {

// Use the active battle unit's maximum HP, or the persistent record's value outside battle.
s32 btlLinkGetMaxHp(BtlUnitLink *record)
{
    s32 maxHp = record->maxHp;
    if (g_btlMainState.state != NULL && g_btlMainState.state->core.mode != 0x15) {
        for (s32 index = 0; index < 0x6d; ++index) {
            BtlEntry *unit = &g_btlMainState.state->entries[index];
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
