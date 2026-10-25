/* NON_MATCHING: retail uses `push {r4, r5, r6, lr}` where armcc emits `push {r4, lr}`. */
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 scrCommTestUnitFlag(void)
{
    u32 index = scrGetArg(0);
    ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    scrSetResult((unit->data->flags & (1u << index)) != 0);
    return 1;
}

} /* extern "C" */
