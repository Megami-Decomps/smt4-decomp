#include "common.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match5_EntryCollection.h"

extern "C" {


/* Whether the touch pointer is inside the whole bottom screen (320x240). */
s32 setFullScreenRect(void)
{
    return uiPointerHitsRect(0, 0, 0x140, 0xf0, 0);
}

} /* extern "C" */
