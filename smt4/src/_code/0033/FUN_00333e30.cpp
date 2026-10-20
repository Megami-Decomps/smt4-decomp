#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);
extern int FUN_002c09d0(u32 id);

/* Adds `delta` to the pad's value at +0x74 (clamped to -999..999) unless one of the flags 0x1FD-0x1FF is set. */
void FUN_00333e30(int delta)
{
    PadState *pad;

    if (((FUN_002c09d0(0x1fd) == 0) && (FUN_002c09d0(0x1fe) == 0)) &&
        (FUN_002c09d0(0x1ff) == 0)) {
        pad = FUN_002b63ac();
        delta = pad->x + delta;
        if (delta < -999) {
            delta = -999;
        } else if (delta >= 1000) {
            delta = 999;
        }
        pad->x = (s16)delta;
    }
}

} /* extern "C" */
