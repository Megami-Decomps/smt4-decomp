/* NON_MATCHING: retail uses `mov r1, #1` where armcc emits `mov r1, #1`. */
#include "common.h"

extern "C" {

extern void *g_aocSystem;
void *dataTableGet(u32 table, u32 section);
s32 dataTableGetCount(void *table);
s32 FUN_0046c35c(void *aoc, u32 table, u32 section);

s32 dataTableCountWithAoc(void)
{
    s32 count = dataTableGetCount(dataTableGet(45, 1));
    return count + FUN_0046c35c(g_aocSystem, 37, 1);
}

} /* extern "C" */
