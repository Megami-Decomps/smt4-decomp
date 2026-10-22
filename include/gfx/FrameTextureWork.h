#ifndef GFX_FRAMETEXTUREWORK_H
#define GFX_FRAMETEXTUREWORK_H

#include "common.h"

struct FrameTextureWork {
    /* 0x0000 */ u8 unk0000[0xFA4];
    /* 0x0FA4 */ u8 unkFA4;
    /* 0x0FA5 */ u8 unkFA5;
    /* 0x0FA6 */ u8 unkFA6[2];
    /* 0x0FA8 */ u32 mode;
    /* 0x0FAC */ u8 unkFAC[2];
    /* 0x0FAE */ u8 unkFAE;
    /* 0x0FAF */ u8 unkFAF;
    /* 0x0FB0 */ f32 bounds[6];
    /* 0x0FC8 */ f32 bottom[2];
    /* 0x0FD0 */ u8 unkFD0[8];
    /* 0x0FD8 */ u32 duration;
    /* 0x0FDC */ f32 time;
    /* 0x0FE0 */ u32 state;
    /* 0x0FE4 */ u8 active;
    /* 0x0FE5 */ u8 unkFE5[3];
    /* 0x0FE8 */ u8 unkFE8[0x4A4];
    /* 0x148C */ u8 unk148C;
    /* 0x148D */ u8 unk148D[3];
    /* 0x1490 */ u32 unk1490;
    /* 0x1494 */ u8 unk1494;
};

#endif
