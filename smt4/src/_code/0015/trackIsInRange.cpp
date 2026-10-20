#include "common.h"

extern "C" {

typedef struct Track001532a0 {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0e */ s8 forced;
    /* 0x0f */ s8 level;
} Track001532a0;

typedef struct Config001532a0 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s8 enabled;
    /* 0x19 */ s8 level;
} Config001532a0;

extern Config001532a0 DAT_004e8264; /* 0x4e8264 */

/* True when the track is forced, or the configured level is enabled and not more than 2 above the track's. */
u32 trackIsInRange(Track001532a0 *track)
{
    if (track->forced == 0 && (DAT_004e8264.enabled == 0 || (s8)(DAT_004e8264.level - track->level) > 2)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
