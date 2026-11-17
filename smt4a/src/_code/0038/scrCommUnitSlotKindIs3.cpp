#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {



extern u32 g_btlScriptUnit;

s32 scrGetArg(s32 index);
void scrSetResult(s32 value);

/* Script command: reports whether slot `scrGetArg` of the script unit has kind 3. Returns 1. */
u32 scrCommUnitSlotKindIs3(void)
{
    s32 slot = scrGetArg(0);
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *stats = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;

    scrSetResult(stats->values[slot] >> 10 == 3);
    return 1;
}

} /* extern "C" */
