/* NON_MATCHING: instruction selection/order differs: retail movs r2, r1; compiler mov r2, r1. */
#include "common.h"

extern "C" {

extern u8 DAT_0064bf70[];
extern s32 FUN_002e2f6a(void *context, u32 first, u32 second);

/* Forwards arguments through the runtime context. */
s32 FUN_0030f220(u32 first, u32 second)
{
    return FUN_002e2f6a(DAT_0064bf70, first, second);
}

} /* extern "C" */
