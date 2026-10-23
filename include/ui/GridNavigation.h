#ifndef UI_GRID_NAVIGATION_H
#define UI_GRID_NAVIGATION_H
#include "common.h"
#include <stddef.h>

struct RowWidget {
    u32 flags;
    u32 unk04;
    u32 unk08;
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
    u8 padding54[8];
    u16 row;
    u16 column;
    u8 padding60[2];
    u8 empty;
    u8 padding63;
};
typedef char GridNavigationLayoutCheck[sizeof(RowWidget) == 0x28 &&
    offsetof(RowWidget, mode) == 0x14 && offsetof(GridNavigation, columns) == 0x28 &&
    offsetof(GridNavigation, count) == 0x50 && offsetof(GridNavigation, row) == 0x5C &&
    offsetof(GridNavigation, column) == 0x5E && offsetof(GridNavigation, empty) == 0x62 &&
    sizeof(GridNavigation) == 0x64 ? 1 : -1];
#endif
