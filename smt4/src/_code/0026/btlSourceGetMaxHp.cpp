#include "shard/W4_W4Match2_BtlUnits.h"
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

extern "C" {

/* Uses the active combatant's maximum HP, falling back to its source record. */
s32 btlSourceGetMaxHp(const BtlUnitSource *source)
{
    s32 maxHp = source->maxHp;
    if (g_btlMainState.state != NULL && g_btlMainState.state->core.mode != 0x15) {
        for (s32 i = 0; i < 0x6d; ++i) {
            BtlEntry *unit = &g_btlMainState.state->entries[i];
            if ((unit->flags & 1) && !(unit->flags & 0x40) &&
                (unit->flags & 2) && unit->source == source) {
                maxHp = unit->maxHp;
                break;
            }
        }
    }
    return maxHp;
}
}
