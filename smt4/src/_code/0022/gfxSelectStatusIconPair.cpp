#include "common.h"

/* Selects the foreground and background sprite ids for a status kind and highlighted variant. */
extern "C" void gfxSelectStatusIconPair(u32 kind, u32 *foreground, u32 *background, s32 highlighted)
{
    switch (kind) {
    case 1:
        if (highlighted) {
            *foreground = 0xF7;
            *background = 0xE7;
        } else {
            *foreground = 0xEF;
            *background = 0xDF;
        }
        return;
    case 2:
        if (highlighted) {
            *foreground = 0xF8;
            *background = 0xE8;
        } else {
            *foreground = 0xF0;
            *background = 0xE0;
        }
        return;
    case 3:
        if (highlighted) {
            *foreground = 0xF9;
            *background = 0xE9;
        } else {
            *foreground = 0xF1;
            *background = 0xE1;
        }
        return;
    case 4:
        if (highlighted) {
            *foreground = 0xFA;
            *background = 0xEA;
        } else {
            *foreground = 0xF2;
            *background = 0xE2;
        }
        return;
    case 5:
        if (highlighted) {
            *foreground = 0xFB;
            *background = 0xEB;
        } else {
            *foreground = 0xF3;
            *background = 0xE3;
        }
        return;
    case 6:
        if (highlighted) {
            *foreground = 0xFC;
            *background = 0xEC;
        } else {
            *foreground = 0xF4;
            *background = 0xE4;
        }
        return;
    case 8:
        if (highlighted) {
            *foreground = 0xFD;
            *background = 0xED;
        } else {
            *foreground = 0xF5;
            *background = 0xE5;
        }
        return;
    case 7:
        if (highlighted) {
            *foreground = 0xFE;
            *background = 0xEE;
        } else {
            *foreground = 0xF6;
            *background = 0xE6;
        }
        return;
    }
}
