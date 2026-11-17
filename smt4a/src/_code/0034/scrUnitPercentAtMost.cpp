#include "common.h"
#include "battle/BtlEntryLookup.h"

extern "C" {



extern u32 g_btlScriptUnit;

s32 scrGetArg(u32 index);
int scrSetResult(bool value);

/* Script command: result is whether the unit's current/max percentage is at most the script argument. */
u32 scrUnitPercentAtMost(void)
{
    s32 threshold = scrGetArg(0);
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *stats = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;

    s32 current = stats->mp;
    s32 max = stats->maxMp;

    scrSetResult(current * 100 / max <= threshold);
    return 1;
}

} /* extern "C" */
