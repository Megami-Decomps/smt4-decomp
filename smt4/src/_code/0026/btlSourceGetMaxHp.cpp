#include "shard/W4_W4Match2_BtlUnits.h"
#include "shard/btlSourceGetMaxHp.h"

extern "C" {
extern BtlState *g_btlMainState;

/* Uses the active combatant's maximum HP, falling back to its source record. */
s32 btlSourceGetMaxHp(const BtlUnitSource *source)
{
    s32 maxHp = source->maxHp;
    if (g_btlMainState != NULL && g_btlMainState->mode != 0x15) {
        for (s32 i = 0; i < 0x6d; ++i) {
            BtlUnitEntry *unit = &g_btlMainState->units[i];
            if ((unit->flags & 1) && !(unit->flags & 0x40) &&
                (unit->flags & 2) && unit->source == source) {
                maxHp = unit->hpMax;
                break;
            }
        }
    }
    return maxHp;
}
}
