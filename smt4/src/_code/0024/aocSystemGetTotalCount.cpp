#include "common.h"

extern "C" {

extern s32 g_aocSystem;
extern void *dataTableGet(void);
extern s32 dataTableGetCount(void *table);
extern s32 FUN_0025bed8(s32 system, s32 a, s32 b);

/* Adds the table's entry count to FUN_0025bed8(g_aocSystem, 0x25, 1). */
s32 aocSystemGetTotalCount(void)
{
    s32 count = dataTableGetCount(dataTableGet());

    return FUN_0025bed8(g_aocSystem, 0x25, 1) + count;
}

} /* extern "C" */
