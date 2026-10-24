#include "shard/Shard004D.h"

extern "C" {

extern u32 uiPointerHitsRect(s32 x, s32 y, s32 w, s32 h, u32 flags);

void setFullScreenRect(void)
{
    uiPointerHitsRect(0, 0, 0x140, 0xF0, 0);
}

} /* extern "C" */
