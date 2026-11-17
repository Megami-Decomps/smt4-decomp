#include "common.h"
#include "battle/BtlEntryLookup.h"



extern "C" {

extern u32 g_btlScriptUnit;


/* Script command: sets the scripted unit's halfword at 0x1be to 20. */
u32 FUN_0037ef18(void)
{
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *data = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;
    data->actionKind = 20;
    return 1;
}

} /* extern "C" */
