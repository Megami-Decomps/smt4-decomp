#ifndef ASDSDK_SOURCE_SYS_GX_GXSTENCILSTATE_H
#define ASDSDK_SOURCE_SYS_GX_GXSTENCILSTATE_H

#include "shard/W6_W6Match4_GxDrawSettings.h"

struct GxStencilOwner {
    /* 0x00 */ u8 unk00[0x7c];
    /* 0x7c */ GxDrawSettings *settings;
};

struct GxStencilState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 writeMask;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u8 function;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 reference;
    /* 0x0c */ u32 readMask;
    /* 0x10 */ u8 failOperation;
    /* 0x11 */ u8 depthFailOperation;
    /* 0x12 */ u8 passOperation;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ GxStencilOwner *owner;
};

#endif
