#ifndef UI_NAVICATEGORYSELECTION_H
#define UI_NAVICATEGORYSELECTION_H
#include "common.h"
#include <stddef.h>

struct NaviCategorySelectionWork {
    u8 unk00000[0x10];
    u32 flags; // 0x10
    u8 unk00014[0x50];
    s8 selection; // 0x64
    u8 unk00065[0x467];
    u8 scene[0x18]; // 0x4cc
    u8 unk004E4[0x76ac];
    u8 refresh[2]; // 0x7b90: one redraw request per screen
    u8 discovered; // 0x7b92: set when a revealed cell was newly discovered
    u8 unk07B93[0x1897d];
    s32 selectedIcon; // 0x20510
};
typedef char NaviCategorySelectionOffsets[
    offsetof(NaviCategorySelectionWork, flags) == 0x10 &&
    offsetof(NaviCategorySelectionWork, selection) == 0x64 &&
    offsetof(NaviCategorySelectionWork, scene) == 0x4cc &&
    offsetof(NaviCategorySelectionWork, refresh) == 0x7b90 &&
    offsetof(NaviCategorySelectionWork, discovered) == 0x7b92 &&
    offsetof(NaviCategorySelectionWork, selectedIcon) == 0x20510 ? 1 : -1];
#endif
