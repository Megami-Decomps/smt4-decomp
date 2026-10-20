#include "common.h"

extern "C" {

/* Maps a bit-width to the bucket size used for it: 4 and 8 give 8, 16 and 32 give 32, anything else 256. */
u32 widthToBucketSize(s32 width)
{
    if (width == 4 || width == 8) {
        return 8;
    }
    if (width != 0x10 && width != 0x20) {
        return 0x100;
    }
    return 0x20;
}

} /* extern "C" */
