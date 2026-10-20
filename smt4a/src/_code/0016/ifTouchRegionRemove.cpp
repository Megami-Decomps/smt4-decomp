#include "shard/Block57f248.h"

extern "C" {

/* Decrements the counter at 0x64A of the record at 0x57F248 while it is above 10. */
void ifTouchRegionRemove(void)
{
    if (g_ifTouch.record->unk64A > 10) {
        g_ifTouch.record->unk64A = g_ifTouch.record->unk64A - 1;
    }
}

} /* extern "C" */
