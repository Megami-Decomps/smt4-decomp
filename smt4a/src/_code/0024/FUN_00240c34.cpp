/* NON_MATCHING: retail clears an otherwise unused 256-byte stack buffer; retaining it solely to match would be dead code. */
#include "common.h"

extern "C" {
s32 FUN_00167f94(void* context);

s32 FUN_00240c34(void* context)
{
    return FUN_00167f94(context) != 0;
}
}
