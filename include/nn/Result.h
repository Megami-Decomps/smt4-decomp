/* nn::Result as returned by the 3DS SDK: a 32-bit code whose top bit marks failure. */
#ifndef NN_RESULT_H
#define NN_RESULT_H

#include "common.h"

static __inline bool nnResultIsFailure(s32 result)
{
    bool failed = ((u32)result >> 31) != 0;

    return failed;
}

static __inline bool nnResultIsSuccess(s32 result)
{
    return (s32)(result & 0x80000000) >= 0;
}

/* Result layout: description in bits 0-9, module in bits 10-17. */
static __inline u32 nnResultModule(u32 result)
{
    return (result & 0x3fc00) >> 10;
}

static __inline int nnResultDescription(u32 result)
{
    return result & 0x3ff;
}

#endif
