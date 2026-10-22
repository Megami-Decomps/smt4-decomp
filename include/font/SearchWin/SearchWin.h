#ifndef FONT_SEARCHWIN_SEARCHWIN_H
#define FONT_SEARCHWIN_SEARCHWIN_H
#include "common.h"

struct SearchWinWork {
    u32 job; // 0x00
    u32 unk04; // 0x04
    s32 state; // 0x08
    u8 unk0C[8]; // 0x0C
    u8 active; // 0x14
    u8 unk15[0xAF]; // 0x15
    u8 text[0x20]; // 0xC4
};
#endif
