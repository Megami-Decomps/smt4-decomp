#include "common.h"
#include "battle/BtlEntryLookup.h"



extern "C" {

extern u32 g_btlScriptUnit;


/* Script command: sets the script unit's parameter halfword at 0x1be to six. */
s32 FUN_0035e9d0(void)
{
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitA *unit = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
    BtlUnitDataA *data = unit->data;
    data->actionKind = 6;
    return 1;
}

} /* extern "C" */
