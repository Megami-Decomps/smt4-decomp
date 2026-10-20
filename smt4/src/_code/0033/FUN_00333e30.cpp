#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);
extern int gameFlagIsSet(u32 id);

/* Adds `delta` to the pad's value at +0x74 (clamped to -999..999) unless one of the flags 0x1FD-0x1FF is set. */
void FUN_00333e30(int delta)
{
    PadState *pad;

    if (((gameFlagIsSet(0x1fd) == 0) && (gameFlagIsSet(0x1fe) == 0)) &&
        (gameFlagIsSet(0x1ff) == 0)) {
        pad = gameGetPlayerData();
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
