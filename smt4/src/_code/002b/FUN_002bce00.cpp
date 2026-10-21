#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
extern void *g_aocSystem;
extern u32 DAT_00446548[];
s32 FUN_00131780(void *system, u32 index);
u32 FUN_002bce00(u32 index)
{
    s32 result = FUN_00131780(g_aocSystem, index);
    if (result == 0) {
        return DAT_00446548[index];
    }
    return result;
}
}
