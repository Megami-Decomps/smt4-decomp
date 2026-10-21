/* NON_MATCHING: retail table lookup call argument lifetime differs. */
#include "common.h"

extern "C" {
void dataTableGet(u32 table, u32 kind);
u32 dataTableGetCount();
extern void *g_aocSystem;
u32 FUN_0025bed8(void *system, u32 version, u32 kind);
/* Adds installed and downloadable table counts. */
u32 FUN_0030f6f8()
{
    dataTableGet(45, 2);
    u32 count = dataTableGetCount();
    return FUN_0025bed8(g_aocSystem, 37, 2) + count;
}
}
