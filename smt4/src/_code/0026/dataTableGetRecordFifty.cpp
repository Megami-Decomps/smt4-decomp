/* NON_MATCHING: compiler schedules the zero argument before the table-number argument. */
#include "common.h"
extern "C" {
extern u32 g_aocSystem;
void *dataTableGet(u32 table,u32 section);
u32 dataTableGetCount(void *table);
u32 FUN_0025bed8(u32 system,u32 kind,u32 argument);
/* Count base and add-on entries for the selected table. */
u32 dataTableGetRecordFifty(void) { u32 count=dataTableGetCount(dataTableGet(50,0)); return FUN_0025bed8(g_aocSystem,40,0)+count; }
}
