#include "shard/Shard004D.h"

extern "C" {

extern u32 FUN_00152cf8(s32 x, s32 y, s32 w, s32 h, u32 flags);

void setFullScreenRect(void)
{
    FUN_00152cf8(0, 0, 0x140, 0xF0, 0);
}

} /* extern "C" */
