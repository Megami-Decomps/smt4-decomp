#include "common.h"


extern "C" {
/* Reads or updates the requested state. */
s32 FUN_002e1a18(u32 kind);
s32 padButtonIsPressed(u32 button);
s32 FUN_004d0584(void)
{
    s32 result = 0;
    if (FUN_002e1a18(1) != 0) { result = 1; }
    if (padButtonIsPressed(0) != 0) { result = 1; }
    return result;
}
}
