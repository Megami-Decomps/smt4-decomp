#include "common.h"
#include "battle/BtlEntryLookup.h"



extern "C" {

extern u32 g_btlScriptUnit;

s32 scrSetResult(s32 value);

/* Script command: returns the script unit's parameter block value at 0xf4. */
s32 FUN_0034e51c(void)
{
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    scrSetResult(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data->hp);
    return 1;
}

} /* extern "C" */
