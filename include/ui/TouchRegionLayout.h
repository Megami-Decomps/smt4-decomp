#ifndef UI_TOUCHREGIONLAYOUT_H
#define UI_TOUCHREGIONLAYOUT_H
#include "common.h"
#include <stddef.h>

struct TouchRegionLayout {
    /* 0x000 */ u32 unk000; // The owner and its touch-handle array are word-aligned.
    /* 0x004 */ u8 unk004[0x25];
    /* 0x029 */ u8 alternate;
    /* 0x02A */ u8 unk02A[0x7F6];
    union {
        /* 0x820 */ u16 handles[143];
        struct {
            /* 0x820 */ u16 controls[3];
            /* 0x826 */ u16 entries[136];
            /* 0x936 */ u16 footer[3];
            /* 0x93C */ u16 unk93C;
        } regions;
    };
    /* 0x93E */ s16 count;
};
typedef char TouchRegionLayoutOffsetsCheck[
    offsetof(TouchRegionLayout, handles) == 0x820 &&
    offsetof(TouchRegionLayout, regions.entries) == 0x826 &&
    offsetof(TouchRegionLayout, regions.footer) == 0x936 &&
    offsetof(TouchRegionLayout, count) == 0x93E ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif

void touchLayoutRebuildRegions(TouchRegionLayout *layout);

#ifdef __cplusplus
}
#endif

#endif
