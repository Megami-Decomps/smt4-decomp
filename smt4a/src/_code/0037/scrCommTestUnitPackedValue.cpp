/* NON_MATCHING: retail uses `ldr r1, [r0, #40]` where armcc emits `ldr r0, [r0, #40]`. */
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {



s32 scrCommTestUnitPackedValue(void)
{
    s32 slot = scrGetArg(0);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    scrSetResult((unit->data->values[slot] >> 10) == 1);
    return 1;
}

} /* extern "C" */
