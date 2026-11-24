#ifndef SMT4A_BATTLE_BTLSCRIPTUNITFLAGS_H
#define SMT4A_BATTLE_BTLSCRIPTUNITFLAGS_H

#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/Shard004E.h"

/* Tests the current script unit, as in the out-of-line btlScriptUnitHasFlags. */
static __inline s32 btlScriptUnitHasFlagsInline()
{
    BtlUnitA *unit = btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
    if (unit == NULL)
        return 0;
    return hasFlag80Or1000(g_btlScriptUnit, (u32 *)unit) != 0;
}

#endif
