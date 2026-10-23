#ifndef UI_PARTYPANELNAVIGATION_H
#define UI_PARTYPANELNAVIGATION_H
#include "common.h"
#include <stddef.h>

struct PartyPanelNavigationView {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s32 count;
    /* 0x34 */ u8 unk34[0xE];
    /* 0x42 */ u8 blocked;
};
struct PartyPanelCursorView {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 count;
};
typedef char PartyPanelNavigationOffsetCheck[
    offsetof(PartyPanelNavigationView, count) == 0x30 &&
    offsetof(PartyPanelNavigationView, blocked) == 0x42 &&
    offsetof(PartyPanelCursorView, count) == 0x50 ? 1 : -1];
#endif
