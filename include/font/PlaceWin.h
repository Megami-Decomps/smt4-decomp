#ifndef FONT_PLACEWIN_H
#define FONT_PLACEWIN_H

#include "common.h"

struct PlaceWindow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 frame;
    /* 0x10 */ u8 visible;
    /* 0x11 */ u8 unk11[0x23];
    /* 0x34 */ u8 animation[0x8C];
    /* 0xC0 */ u8 text[0x80];
};

#endif
