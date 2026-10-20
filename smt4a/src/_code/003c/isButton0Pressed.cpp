#include "shard/Shard003C.h"

extern "C" {

extern s32 FUN_001656a0(u32 button);

u8 isButton0Pressed(void)
{
    return FUN_001656a0(0) != 0;
}

} /* extern "C" */
