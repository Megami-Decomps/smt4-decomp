/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"


extern "C" {
extern void *g_aocSystem;
void dataTableGet(u32 file, u32 table);
u32 dataTableGetCount(void);
u32 FUN_0025bed8(void *system, u32 category, u32 slot);
u32 FUN_002fb3f4(void)
{
    dataTableGet(45, 3);
    u32 count = dataTableGetCount();
    return FUN_0025bed8(g_aocSystem, 37, 3) + count;
}
}
