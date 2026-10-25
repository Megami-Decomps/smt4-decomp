#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

extern void *g_aocSystem;
s32 FUN_0025bed8(void *system, s32 kind, s32 slot);

/* Count base and add-on entries for the selected table. */
s32 dataTableGetRecordFifty(void)
{
    s32 count = dataTableGetCount(dataTableGetSection(50, 0));

    return FUN_0025bed8(g_aocSystem, 40, 0) + count;
}

} /* extern "C" */
