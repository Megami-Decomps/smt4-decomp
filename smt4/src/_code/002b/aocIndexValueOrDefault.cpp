#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
extern void *g_aocSystem;
extern u32 DAT_00446548[];
s32 dataTableFindKeyedPayload(void *system, u32 index);
u32 aocIndexValueOrDefault(u32 index)
{
    s32 result = dataTableFindKeyedPayload(g_aocSystem, index);
    if (result == 0) {
        return DAT_00446548[index];
    }
    return result;
}
}
