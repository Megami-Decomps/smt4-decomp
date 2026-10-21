/* NON_MATCHING: retail table lookup call argument lifetime differs. */
#include "common.h"

extern "C" {
void dataTableGet(u32 table, u32 kind);
u32 dataTableGetCount();
extern void *g_aocSystem;
u32 FUN_0025bed8(void *system, u32 version, u32 kind);
/* Adds installed and downloadable table counts. */
u32 FUN_00323538()
{
    dataTableGet(41, 3);
    u32 count = dataTableGetCount();
    return FUN_0025bed8(g_aocSystem, 35, 3) + count;
}
}
