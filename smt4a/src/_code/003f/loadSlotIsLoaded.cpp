#include "gamedata/DataTableSlots.h"
#include "battle/btlDebug.h"

extern "C" {

s32 loadSlotIsLoaded(u32 index)
{
    if (index >= DATA_TABLE_SLOTS) {
        return 0;
    }
    return g_dataTableSlots[index].data != NULL;
}

} /* extern "C" */
