#include "common.h"

extern "C" {

void FUN_003a1098(s32 a, u32 handle, u32 value);
extern u32 DAT_00647194[];

/* Calls FUN_003a1098(0, handle, value) with entry `index` of the handle table at 0x647194, if it is set. */
void FUN_00300100(s32 index, u32 value)
{
    if (DAT_00647194[index] != 0) {
        FUN_003a1098(0, DAT_00647194[index], value);
        return;
    }
}

} /* extern "C" */
