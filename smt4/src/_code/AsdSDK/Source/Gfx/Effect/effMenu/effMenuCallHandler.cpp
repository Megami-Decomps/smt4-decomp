#include "common.h"

extern "C" {

void FUN_0030e48c(int, u32, u32);

extern u32 g_effMenuHandles[];

/* Calls the menu handler with the handle stored for `index`, if there is one. */
void effMenuCallHandler(s32 index, u32 arg)
{
    if (g_effMenuHandles[index] != 0) {
        FUN_0030e48c(0, g_effMenuHandles[index], arg);
    }
}

} /* extern "C" */
