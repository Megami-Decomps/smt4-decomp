/* Script command: passes its first two arguments (as halfwords) to FUN_003e4a54. Returns 1. */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
void FUN_003e4a54(u32 a, u32 b);

u32 FUN_003a989c(u32 index)
{
    u32 a = scrGetArg(index);
    u32 b = scrGetArg(1);

    FUN_003e4a54((u16)a, (u16)b);
    return 1;
}

}
