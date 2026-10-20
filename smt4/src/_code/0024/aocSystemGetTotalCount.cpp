/* NON_MATCHING: armcc schedules the two dataTableGet argument moves in reverse order. */
#include "common.h"

extern "C" {

extern s32 g_aocSystem;
extern void *dataTableGet(s32 table, s32 group);
extern s32 dataTableGetCount(void *table);
extern s32 FUN_0025bed8(s32 system, s32 a, s32 b);

/* Adds table (0x2d, 1)'s entry count to FUN_0025bed8(g_aocSystem, 0x25, 1). */
s32 aocSystemGetTotalCount(void)
{
    s32 count = dataTableGetCount(dataTableGet(0x2d, 1));

    return FUN_0025bed8(g_aocSystem, 0x25, 1) + count;
}

} /* extern "C" */
