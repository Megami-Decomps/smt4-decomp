#ifndef UI_NUMBER_PANEL_WORK_H
#define UI_NUMBER_PANEL_WORK_H
#include "shard/W5_W5Match2_ScalarArguments.h"
#include <stddef.h>

struct NumberPanelWork {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 kind;
    /* 0x3C */ u8 unk3C[0x14];
    /* 0x50 */ u32 sprite;
    /* 0x54 */ s16 first;
    /* 0x56 */ s16 second;
    /* 0x58 */ s16 value;
    /* 0x5A */ u8 unk5A[0xA];
    /* 0x64 */ u32 position;
};
typedef char NumberPanelWorkOffsets[
    offsetof(NumberPanelWork, kind) == 0x38 &&
    offsetof(NumberPanelWork, first) == 0x54 &&
    offsetof(NumberPanelWork, value) == 0x58 &&
    offsetof(NumberPanelWork, position) == 0x64 && sizeof(NumberPanelWork) == 0x68 ? 1 : -1];
#endif
