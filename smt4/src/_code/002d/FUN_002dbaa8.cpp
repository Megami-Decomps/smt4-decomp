/* NON_MATCHING: canonical unit indexing and HP-field base decomposition use different address registers. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

u32 FUN_002dbaa8()
{
    s32 threshold = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        BtlUnitEntry *unit = &btlGetMainStateExt()->units[index];
        if ((unit->flags & 0x10) && (unit->flags & 1) &&
            !(unit->flags & 0x40) &&
            unit->hp * 100 / unit->hpMax <= threshold) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}
