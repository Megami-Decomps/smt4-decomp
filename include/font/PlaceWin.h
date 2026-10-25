#ifndef FONT_PLACEWIN_H
#define FONT_PLACEWIN_H

#include "common.h"

struct PlaceWindow {
    union {
        /* 0x00 */ u8 unk00[8];
        /* 0x00 */ u32 job;
    };
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 frame;
    /* 0x10 */ u8 visible;
    union {
        /* 0x11 */ u8 unk11[0x23];
        struct {
            /* 0x11 */ u8 unk11[3];
            /* 0x14 */ u8 packet[0x20];
        } parameters;
    };
    /* 0x34 */ u8 animation[0x8C];
    /* 0xC0 */ u8 text[0x80];
};
typedef char PlaceWindowInitializationOffsetsCheck[
    __INTADDR__(&((PlaceWindow *)0)->job) == 0 &&
    __INTADDR__(&((PlaceWindow *)0)->parameters.packet) == 0x14 &&
    sizeof(PlaceWindow) == 0x140 ? 1 : -1];

extern "C" void placeWinStartText(const u8 *text);

#endif
