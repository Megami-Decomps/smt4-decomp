#ifndef UI_GRID_NAVIGATION_H
#define UI_GRID_NAVIGATION_H
#include "common.h"
#include <stddef.h>

/* The bit of each direction key in GridNavigation::rowKeysHeld and columnKeysHeld. Buttons 5 and 4 move a cursor
 * back (gridNavigationHandleConfirm tests them against the first entry), 6 and 3 forward (against the last). */
enum {
    GRID_HELD_BUTTON5 = 0,
    GRID_HELD_BUTTON6 = 1,
    GRID_HELD_BUTTON4 = 2,
    GRID_HELD_BUTTON3 = 3
};

struct RowWidget {
    u32 flags;          /* 4: a key held on the first entry wraps to it (the columns of a short last row) */
    u8 keys[4];         /* the pad buttons that move the cursor (colorSetRgba); 32 = none */
    u8 alternateKeys[4]; /* the same moves on other buttons (objectSetRgba); 32 = none */
    u32 unk0c;
    s32 rowCount;
    s32 mode;
    s32 visibleRows;
    u32 parameter;
    u32 unk20;
    u32 unk24;
};
struct GridNavigation {
    RowWidget rows;
    RowWidget columns;
    s32 count;
    s32 lastRowPosition;    /* 0x54: the row (top + offset) gridNavigationHandleConfirm saw last */
    s32 lastColumnPosition; /* 0x58 */
    u16 rowKeysHeld;        /* 0x5C: the row keys held, one bit each (GRID_HELD_BUTTON*) */
    u16 columnKeysHeld;     /* 0x5E: the same for the column keys */
    s8 changed;   /* 0x60: the selection moved this frame */
    s8 columnChanged; /* 0x61: a column key moved (or is pushing against) the column cursor */
    u8 empty;
    u8 padding63;
};
typedef char GridNavigationLayoutCheck[sizeof(RowWidget) == 0x28 &&
    offsetof(RowWidget, mode) == 0x14 && offsetof(GridNavigation, columns) == 0x28 &&
    offsetof(GridNavigation, count) == 0x50 && offsetof(GridNavigation, rowKeysHeld) == 0x5C &&
    offsetof(GridNavigation, columnKeysHeld) == 0x5E && offsetof(RowWidget, alternateKeys) == 0x08 && offsetof(GridNavigation, empty) == 0x62 &&
    sizeof(GridNavigation) == 0x64 ? 1 : -1];
#endif
