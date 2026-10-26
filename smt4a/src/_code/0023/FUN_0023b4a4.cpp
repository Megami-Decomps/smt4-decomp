#include "common.h"
#include "code/Code0023_Smt4a.h"

extern "C" {

extern u32 DAT_0057f598[];

/* Returns entry `index` of the table at 0x57F598. */
u32 FUN_0023b4a4(s32 index)
{
    return DAT_0057f598[index];
}

} /* extern "C" */
