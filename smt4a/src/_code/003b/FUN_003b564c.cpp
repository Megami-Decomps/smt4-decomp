/* NON_MATCHING: retail table lookup call argument lifetime differs. */
#include "common.h"

extern "C" {
void dataTableGet(u32 table, u32 kind);
u32 dataTableGetCount();
extern void *g_aocSystem;
u32 FUN_0046c35c(void *system, u32 version, u32 kind);
/* Adds installed and downloadable table counts. */
u32 FUN_003b564c()
{
    dataTableGet(42, 1);
    u32 count = dataTableGetCount();
    return FUN_0046c35c(g_aocSystem, 36, 1) + count;
}
}
