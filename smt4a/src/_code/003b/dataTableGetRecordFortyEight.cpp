/* NON_MATCHING: compiler schedules the zero argument before the table-number argument. */
#include "common.h"
extern "C" {
extern u32 g_aocSystem;
void *dataTableGet(u32 table,u32 section);
u32 dataTableGetCount(void *table);
u32 FUN_0046c35c(u32 system,u32 kind,u32 argument);
/* Count base-table entries together with the add-on entries of kind thirty-nine. */
u32 dataTableGetRecordFortyEight(void) { u32 count=dataTableGetCount(dataTableGet(48,0)); return FUN_0046c35c(g_aocSystem,39,0)+count; }
}
