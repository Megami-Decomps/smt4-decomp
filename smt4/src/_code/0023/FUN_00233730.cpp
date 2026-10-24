/* NON_MATCHING: retail keeps the two zero arguments in saved registers (r5/r6) and stores
 * visible/total with one strd; armcc here rematerializes 0 and stores them separately */
#include "common.h"

#define UNK233730_HORIZONTAL 0
#define UNK233730_VERTICAL 1

/* A scroller: its direction, size and the list object it drives at 0x10. */
struct Unk233730Scroller {
    /* 0x00 */ u8 direction;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 visible;
    /* 0x08 */ s32 total;
    /* 0x0C */ u8 dirty;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ u8 list[1];
};

extern "C" {

void FUN_0029f848(void *list, s32 total, s32 columns, s32 rows, s32 a, s32 b);
void scrollOwnerSetValue(void *list, s32 value);
void flaggedEntrySetValueA(void *list, s32 value);
void recordTrackDirtyValue(void *list, s32 value);
void flaggedEntrySetValueB(void *list, s32 value);

/* Sets the scroller up for `total` items, `visible` of them on screen along `direction`, and
 * rewinds it. */
void FUN_00233730(Unk233730Scroller *scroller, s32 visible, s32 total, s32 direction, s32 unused,
                  s32 option)
{
    if (direction == UNK233730_HORIZONTAL) {
        FUN_0029f848(scroller->list, total, visible, 1, 1, option);
    } else if (direction == UNK233730_VERTICAL) {
        FUN_0029f848(scroller->list, total, 1, visible, 1, option);
    }
    scroller->visible = visible;
    scroller->total = total;
    scroller->direction = direction;
    if (scroller->direction == UNK233730_HORIZONTAL) {
        scrollOwnerSetValue(scroller->list, 0);
        flaggedEntrySetValueA(scroller->list, 0);
    }
    if (scroller->direction == UNK233730_VERTICAL) {
        recordTrackDirtyValue(scroller->list, 0);
        flaggedEntrySetValueB(scroller->list, 0);
    }
    scroller->dirty = 0;
}

} /* extern "C" */
