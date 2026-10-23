#include "common.h"

// Choose the two sprite IDs used to draw a status icon in either display style.
extern "C" void gfxSelectStatusIconPair(u32 kind, u32 *foreground, u32 *background, s32 alternate)
{
    switch (kind) {
    case 1:
        if (alternate) {
            *foreground = 0xF7;
            *background = 0xE7;
        } else {
            *foreground = 0xEF;
            *background = 0xDF;
        }
        return;
    case 2:
        if (alternate) {
            *foreground = 0xF8;
            *background = 0xE8;
        } else {
            *foreground = 0xF0;
            *background = 0xE0;
        }
        return;
    case 3:
        if (alternate) {
            *foreground = 0xF9;
            *background = 0xE9;
        } else {
            *foreground = 0xF1;
            *background = 0xE1;
        }
        return;
    case 4:
        if (alternate) {
            *foreground = 0xFA;
            *background = 0xEA;
        } else {
            *foreground = 0xF2;
            *background = 0xE2;
        }
        return;
    case 5:
        if (alternate) {
            *foreground = 0xFB;
            *background = 0xEB;
        } else {
            *foreground = 0xF3;
            *background = 0xE3;
        }
        return;
    case 6:
        if (alternate) {
            *foreground = 0xFC;
            *background = 0xEC;
        } else {
            *foreground = 0xF4;
            *background = 0xE4;
        }
        return;
    case 8:
        if (alternate) {
            *foreground = 0xFD;
            *background = 0xED;
        } else {
            *foreground = 0xF5;
            *background = 0xE5;
        }
        return;
    case 7:
        if (alternate) {
            *foreground = 0xFE;
            *background = 0xEE;
        } else {
            *foreground = 0xF6;
            *background = 0xE6;
        }
        return;
    case 9:
        if (alternate) {
            *foreground = 0x1ED;
            *background = 0x1EB;
        } else {
            *foreground = 0x1EC;
            *background = 0x1EA;
        }
        return;
    }
}
