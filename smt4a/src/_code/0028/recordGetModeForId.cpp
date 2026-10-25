#include "ui/IfTouch.h"
#include "shard/recordGetModeForId.h"

extern "C" {

/* Returns the mode byte of the record at 0x57F248 when its id equals `id`, otherwise 0. */
u8 recordGetModeForId(s32 id)
{
    u8 mode;

    if (g_ifTouch.state->selectedRegion == id) {
        mode = g_ifTouch.state->selectionMode;
    } else {
        mode = 0;
    }
    return mode;
}

} /* extern "C" */
