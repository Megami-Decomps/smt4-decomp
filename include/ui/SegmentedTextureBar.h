#ifndef UI_SEGMENTEDTEXTUREBAR_H
#define UI_SEGMENTEDTEXTUREBAR_H
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include <stddef.h>
struct SegmentedTextureBarOrigin {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 x;
};
struct SegmentedTextureBarSize {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
};
typedef char SegmentedTextureBarOriginOffsetCheck[offsetof(SegmentedTextureBarOrigin, x) == 4 ? 1 : -1];
typedef char SegmentedTextureBarSizeCheck[sizeof(SegmentedTextureBarSize) == 4 ? 1 : -1];
#endif
