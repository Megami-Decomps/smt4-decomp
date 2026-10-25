#include "shard/W5_W5Match7_ScriptUnit.h"
#include "util/BtlScriptUnitHasFlags.h"

extern "C" {

u32 hasFlag80Or1000(u32 id, u32 *flags);

s32 btlScriptUnitHasFlags(void)
{
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (unit == NULL) {
        return 0;
    }
    return hasFlag80Or1000(g_btlScriptUnit, reinterpret_cast<u32 *>(unit)) != 0;
}

} /* extern "C" */
