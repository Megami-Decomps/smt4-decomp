#ifndef UI_BYTE_SCREEN_FADE_H
#define UI_BYTE_SCREEN_FADE_H

#include "common.h"
#include <stddef.h>

// Byte-state prefix used while advancing and drawing the full-screen fade overlay.
struct ByteScreenFade {
    u8 flags;             // 0x00: bit zero marks an active fade
    u8 unk01[7];
    s8 palette;           // 0x08: zero is black, one is white
    u8 unk09;
    s8 duration;          // 0x0A
    s8 frame;             // 0x0B
    u8 screen;            // 0x0C: one selects the bottom screen
};
typedef char ByteScreenFadeOffsets[
    offsetof(ByteScreenFade, palette) == 8 &&
    offsetof(ByteScreenFade, duration) == 0xA &&
    offsetof(ByteScreenFade, frame) == 0xB &&
    offsetof(ByteScreenFade, screen) == 0xC ? 1 : -1];

#endif
