#include "shard/Shard004D.h"
#include "map/mapDepart.h"

extern "C" {

extern u32 uiPointerHitsRect(s32 x, s32 y, s32 w, s32 h, u32 flags);

/* Whether the touch pointer is inside the whole bottom screen (320x240). */
s32 setFullScreenRect(void)
{
    return uiPointerHitsRect(0, 0, 0x140, 0xF0, 0);
}

} /* extern "C" */
