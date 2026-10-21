/* NON_MATCHING: instruction selection/order differs: retail movs r2, r1; compiler mov r2, r1. */
#include "common.h"

extern "C" {

extern u8 DAT_004efcb4[];
extern s32 FUN_002c6902(void *context, u32 first, u32 second);

/* Forwards arguments through the runtime context. */
s32 FUN_00100238(u32 first, u32 second)
{
    return FUN_002c6902(DAT_004efcb4, first, second);
}

} /* extern "C" */
