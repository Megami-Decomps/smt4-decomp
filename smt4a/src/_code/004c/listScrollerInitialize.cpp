#include "common.h"
#include "gfx/TrackedRecord.h"

#define UNK4CFEB0_HORIZONTAL 0
#define UNK4CFEB0_VERTICAL 1

/* A scroller: its direction, size and the list object it drives at 0x10. */
struct Unk4cfeb0Scroller {
    /* 0x00 */ u8 direction;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 visible;
    /* 0x08 */ s32 total;
    /* 0x0C */ u8 dirty;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ u8 list[1];
};

extern "C" {

void gridNavigationConfigure(void *list, s32 total, s32 columns, s32 rows, s32 a, s32 b);
void scrollOwnerSetValue(void *list, s32 value);
void recordTrackDirtyValue(void *list, s32 value);
void flaggedEntrySetValueB(void *list, s32 value);

/* Moves the list driven along the scroller's direction to `top`, with the cursor at `position`. */
static __inline void scrollerSet(Unk4cfeb0Scroller *scroller, s32 top, s32 position)
{
    if (scroller->direction == UNK4CFEB0_HORIZONTAL) {
        scrollOwnerSetValue(scroller->list, top);
        flaggedEntrySetValueA(reinterpret_cast<FlaggedEntry *>(scroller->list), position);
    }
    if (scroller->direction == UNK4CFEB0_VERTICAL) {
        recordTrackDirtyValue(scroller->list, top);
        flaggedEntrySetValueB(scroller->list, position);
    }
}

/* Sets the scroller up for `total` items, `visible` of them on screen along `direction`, and
 * rewinds it. */
void listScrollerInitialize(Unk4cfeb0Scroller *scroller, s32 visible, s32 total, u8 direction, s32 unused,
                  s32 option)
{
    if (direction == UNK4CFEB0_HORIZONTAL) {
        gridNavigationConfigure(scroller->list, total, visible, 1, 1, option);
    } else if (direction == UNK4CFEB0_VERTICAL) {
        gridNavigationConfigure(scroller->list, total, 1, visible, 1, option);
    }
    scroller->visible = visible;
    scroller->total = total;
    scroller->direction = direction;
    scrollerSet(scroller, 0, 0);
    scroller->dirty = 0;
}

} /* extern "C" */
