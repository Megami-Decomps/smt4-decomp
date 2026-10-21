/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"


extern "C" {
extern void *g_aocSystem;
void dataTableGet(u32 file, u32 table);
u32 dataTableGetCount(void);
u32 FUN_0046c35c(void *system, u32 category, u32 slot);
u32 FUN_00379858(void)
{
    dataTableGet(45, 4);
    u32 count = dataTableGetCount();
    return FUN_0046c35c(g_aocSystem, 37, 4) + count;
}
}
