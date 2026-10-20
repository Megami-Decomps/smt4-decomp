#include "common.h"

extern "C" {

void FUN_003a1098(s32 a, u32 handle, u32 value);
extern u32 g_effMenuHandles[];

/* Calls FUN_003a1098(0, handle, value) with entry `index` of the handle table at 0x647194, if it is set. */
void FUN_00300100(s32 index, u32 value)
{
    if (g_effMenuHandles[index] != 0) {
        FUN_003a1098(0, g_effMenuHandles[index], value);
        return;
    }
}

} /* extern "C" */
