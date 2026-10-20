/* NON_MATCHING: the final offset/top stores are merged into one stm (after add r0, r0, #32); retail stores offset then top separately. */
#include "common.h"

extern "C" {

/* A scrolling list: `top` is the first visible entry, `offset` the selection's row within the window. */
typedef struct ScrollList {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 visible;   /* rows shown at once */
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ s32 count;     /* entries in the list */
    /* 0x20 */ s32 top;
    /* 0x24 */ s32 offset;
} ScrollList;

/* Selects entry `index` (clamped to the list) and scrolls the window so it stays visible. */
u32 scrollListSetSelection(ScrollList *list, s32 index)
{
    s32 count = list->count;
    s32 offset;
    s32 maxOffset;

    if (count == 0) {
        list->offset = 0;
        list->top = 0;
        return 1;
    }
    if (index <= 0) {
        index = 0;
    } else if (count < index) {
        index = count - 1;
    }
    offset = index - list->top;
    if (offset < 0) {
        list->top = index;
        list->offset = 0;
    } else {
        list->offset = offset;
        maxOffset = count - (list->visible <= count ? list->visible : count);
        if (offset > maxOffset) {
            list->offset = maxOffset;
            list->top = index - maxOffset;
        }
    }
    return 1;
}

}
