/* NON_MATCHING: retail table lookup call argument lifetime differs. */
#include "common.h"

extern "C" {
void dataTableGet(u32 table, u32 kind);
u32 dataTableGetCount();
extern void *g_aocSystem;
u32 FUN_0025bed8(void *system, u32 version, u32 kind);
/* Adds installed and downloadable table counts. */
u32 FUN_00323570()
{
    dataTableGet(41, 4);
    u32 count = dataTableGetCount();
    return FUN_0025bed8(g_aocSystem, 35, 4) + count;
}
}
