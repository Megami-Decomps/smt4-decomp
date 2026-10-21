/* NON_MATCHING: retail uses `movs r1, r0` where armcc emits `cmp r0, #0`. */
#include "common.h"

extern "C" {

extern u32 g_btlScriptUnit;
void *btlUnitGet(u32 id);
s32 hasFlag80Or1000(u32 id);

s32 btlScriptUnitHasFlags(void)
{
    if (btlUnitGet(g_btlScriptUnit) == NULL) {
        return 0;
    }
    return hasFlag80Or1000(g_btlScriptUnit) != 0;
}

} /* extern "C" */
