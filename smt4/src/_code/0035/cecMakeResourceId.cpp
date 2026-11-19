/* NON_MATCHING: retail has a linker NOP and combines a separately initialized zero low byte with the masked ID; the compiler folds the expression to one shift. */
#include "common.h"

extern "C" {
/* Pack a resource id for the local StreetPass message box. */
s32 cecMakeResourceId(u32 value)
{
    return (value & 0xFF0FFFFF) << 8;
}
}
