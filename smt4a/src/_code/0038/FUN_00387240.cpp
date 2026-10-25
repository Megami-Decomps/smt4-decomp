/* NON_MATCHING: same arithmetic; retail ends each arm with its own pop (the zero-size arm placed second, loading all four fields before the stores), armcc here joins the arms with a branch. */
#include "common.h"

extern "C" {

/* A UI rectangle: width/height (top bit is a flag) at 4/6, origin at 8/10, and an optional size override pair at 0xC. */
struct UiRect {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 width;
    /* 0x06 */ u16 height;
    /* 0x08 */ u16 x;
    /* 0x0A */ u16 y;
    /* 0x0C */ s16 *size;
};

/* The target object: a center point at 0x18. */
struct CenterTarget {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s16 centerX;
    /* 0x1A */ s16 centerY;
};

UiRect *asdTMTexTableEntryAt(void *owner, u32 id);

/* Stores the center of the looked-up rectangle (its size override if present) in the target. */
void FUN_00387240(CenterTarget *target, void *owner, u32 id)
{
    UiRect *rect = asdTMTexTableEntryAt(owner, id);
    s16 *size = rect->size;

    if (size != NULL) {
        s32 centerX = size[0] + rect->x / 2;
        s32 centerY = rect->y + size[1] / 2;
        target->centerX = centerX;
        target->centerY = centerY;
    } else {
        s32 centerX = rect->x + ((rect->width & 0x7FFF) >> 1);
        s32 centerY = rect->y + ((rect->height & 0x7FFF) >> 1);
        target->centerX = centerX;
        target->centerY = centerY;
    }
}

} /* extern "C" */
