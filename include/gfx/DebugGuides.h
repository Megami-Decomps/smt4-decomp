#ifndef GFX_DEBUGGUIDES_H
#define GFX_DEBUGGUIDES_H

#include "common.h"
#include <stddef.h>

struct DebugGuidePoint {
    f32 x, y;
};
typedef char DebugGuidePointSizeCheck[sizeof(DebugGuidePoint) == 8 ? 1 : -1];

// Work prefix for the three-state screen guide drawing callback.
struct DebugGuidesWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 mode;
};
typedef char DebugGuidesWorkLayoutCheck[
    sizeof(DebugGuidesWork) == 0xC && offsetof(DebugGuidesWork, mode) == 8 ? 1 : -1];

#endif
