#include "common.h"

extern "C" {
u32 FUN_00352158(u32 handle, u8 mode, u32 first, u32 second, u32 buffer, s32 count);

/* Forwards the complete service request (the twin of Apocalypse's FUN_004267bc). */
u32 FUN_00352098(u32 handle, u8 mode, u32 first, u32 second, u32 buffer, s32 count)
{
    return FUN_00352158(handle, mode, first, second, buffer, count);
}
}
