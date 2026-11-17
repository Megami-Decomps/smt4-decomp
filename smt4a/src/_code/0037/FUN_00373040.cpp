#include "battle/btlScript.h"
#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {



s32 scrGetArg(u32 index);
int scrSetResult(bool value);

/* Script command: result is whether the state (bits 10+) of the unit's entry for the argument is 2. */
u32 FUN_00373040(void)
{
    s32 index = scrGetArg(0);
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *stats = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;

    scrSetResult(stats->values[index] >> 10 == 2);
    return 1;
}

} /* extern "C" */
