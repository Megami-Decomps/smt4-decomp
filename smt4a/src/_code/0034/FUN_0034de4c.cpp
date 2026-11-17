#include "common.h"
#include "battle/BtlEntryLookup.h"



extern "C" {
extern u32 g_btlScriptUnit;

/* Script command: sets the halfword at 0x1be of the script unit's data record to 19. */
s32 FUN_0034de4c(void)
{
    /* g_btlScriptUnit is the slot block pointer; btlUnitGet takes it as the context reference. */
    BtlUnitDataA *data = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit))->data;
    data->actionKind = 19;
    return 1;
}
}
