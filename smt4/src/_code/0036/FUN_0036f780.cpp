/* NON_MATCHING: retail performs an otherwise unused pointer load before returning zero; its original ownership semantics are unresolved. */
#include "common.h"

extern "C" s32 FUN_0036f780(const void *object)
{
    return 0;
}
