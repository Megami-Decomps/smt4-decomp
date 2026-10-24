/* Frame-texture work and per-frame transition flags. */
#ifndef UI_FRAMETEX_H
#define UI_FRAMETEX_H
#include "common.h"
#include <stddef.h>
struct JobSurface;
typedef struct FrameWork {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ void * bufferA;
    /* 0x0008 */ JobSurface * surface;
    /* 0x000C */ u8 unk0C;
    /* 0x000D */ u8 unk000D[3];
    /* 0x0010 */ u32 unk10;
    /* 0x0014 */ u32 unk14;
    /* 0x0018 */ u32 unk18;
    /* 0x001C */ u8 unk001C[0xE70];
    /* 0x0E8C */ u8 unkE8C;
    /* 0x0E8D */ u8 quadActive;
    /* 0x0E8E */ u8 unk0E8E[2];
    /* 0x0E90 */ u32 unkE90;
    /* 0x0E94 */ u8 unkE94;
    /* 0x0E95 */ u8 unkE95;
    /* 0x0E96 */ u8 unkE96;
    /* 0x0E97 */ u8 unkE97;
    /* 0x0E98 */ f32 quadX[4];
    /* 0x0EA8 */ f32 quadY[4];
    /* 0x0EB8 */ u8 unk0EB8[8];
    /* 0x0EC0 */ u32 unkEC0;
    /* 0x0EC4 */ f32 unkEC4;
    /* 0x0EC8 */ u32 unkEC8;
    /* 0x0ECC */ u8 unkECC;
    /* 0x0ECD */ u8 unk0ECD[0xF];
    /* 0x0EDC */ u8 unkEDC;
    /* 0x0EDD */ u8 overlayActive;
    /* 0x0EDE */ u8 unk0EDE[2];
    /* 0x0EE0 */ u32 overlayParam;
    /* 0x0EE4 */ u8 unk0EE4[4];
    /* 0x0EE8 */ f32 overlayX[4];
    /* 0x0EF8 */ f32 overlayY[4];
    /* 0x0F08 */ u8 unk0F08[8];
    /* 0x0F10 */ u32 overlayResource;
    /* 0x0F14 */ f32 overlayValue;
    /* 0x0F18 */ u32 overlayFirst;
    /* 0x0F1C */ u8 overlayOption;
    /* 0x0F1D */ u8 unk0F1D[3];
    /* 0x0F20 */ void * bufferB;
    /* 0x0F24 */ void * bufferC;
    /* 0x0F28 */ u8 unkF28;
    /* 0x0F29 */ u8 unk0F29[0x2];
    /* 0x0F2B */ u8 unkF2B;
    /* 0x0F2C */ u8 unkF2C;
    /* 0x0F2D */ u8 unkF2D;
    /* 0x0F2E */ u8 unk0F2E[0x32];
    /* 0x0F60 */ u8 unkF60;
    /* 0x0F61 */ u8 unk0F61[0x2];
    /* 0x0F63 */ u8 unkF63;
    /* 0x0F64 */ u8 unkF64;
    /* 0x0F65 */ u8 unkF65;
    /* 0x0F66 */ u8 unk0F66[0x32];
    /* 0x0F98 */ u8 unkF98;
    /* 0x0F99 */ u8 unkF99;
    /* 0x0F9A */ u8 fadeActive;
    /* 0x0F9B */ union {
        u8 unk0F9B[1];
        u8 useStandardTextureExtent;
    };
    /* 0x0F9C */ u8 fadeEnabled;
    /* 0x0F9D */ u8 unkF9D;
    /* 0x0F9E */ u8 unkF9E;
    /* 0x0F9F */ u8 unk0F9F[0x29];
    /* 0x0FC8 */ u32 color;
    /* 0x0FCC */ u8 unk0FCC[4];
    /* 0x0FD0 */ s32 elapsed;
    /* 0x0FD4 */ s32 duration;
    /* 0x0FD8 */ u8 unkFD8;
} FrameWork;

typedef struct FrameWorkA {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ void * bufferA;
    /* 0x0008 */ JobSurface * surface;
    /* 0x000C */ u8 unk000C[0xF98];
    /* 0x0FA4 */ u8 unkFA4;
    /* 0x0FA5 */ u8 unk0FA5[0x8];
    /* 0x0FAD */ u8 unkFAD;
    /* 0x0FAE */ u8 unkFAE;
    /* 0x0FAF */ u8 unk0FAF[0x45];
    /* 0x0FF4 */ u8 unkFF4;
    /* 0x0FF5 */ u8 overlayActive;
    /* 0x0FF6 */ u8 unk0FF6[2];
    /* 0x0FF8 */ u32 overlayParam;
    /* 0x0FFC */ u8 unk0FFC[4];
    /* 0x1000 */ f32 overlayX[4];
    /* 0x1010 */ f32 overlayY[4];
    /* 0x1020 */ u8 unk1020[8];
    /* 0x1028 */ u32 overlayResource;
    /* 0x102C */ f32 overlayValue;
    /* 0x1030 */ u32 overlayFirst;
    /* 0x1034 */ u8 overlayOption;
    /* 0x1035 */ u8 unk1035[3];
    /* 0x1038 */ void * bufferB;
    /* 0x103C */ void * bufferC;
    /* 0x1040 */ u8 workEnabled;
    /* 0x1041 */ u8 unk1041[0x1];
    /* 0x1042 */ u8 handle;
    /* 0x1043 */ u8 unk1043[0x1];
    /* 0x1044 */ u8 pending;
    /* 0x1045 */ u8 unk1045[0x3CF];
    /* 0x1414 */ u8 enabled;
    /* 0x1415 */ u8 unk1415[0x2];
    /* 0x1417 */ u8 first;
    /* 0x1418 */ u8 second;
    /* 0x1419 */ u8 third;
    /* 0x141A */ u8 unk141A[0x33];
    /* 0x144D */ u8 dirty;
    /* 0x144E */ u8 unk144E[0x3E];
    /* 0x148C */ u8 unk148C;
} FrameWorkA;

/* Retail 32-bit layout invariants. */
typedef char FrameWorkSizeCheck[sizeof(FrameWork) == 0xFDC ? 1 : -1];
typedef char FrameWorkASizeCheck[sizeof(FrameWorkA) == 0x1490 ? 1 : -1];
typedef char FrameWorkOffsets[offsetof(FrameWork, unk10) == 0x10 &&
    offsetof(FrameWork, unk18) == 0x18 && offsetof(FrameWork, unkF98) == 0xF98 &&
    offsetof(FrameWork, unkE8C) == 0xE8C ? 1 : -1];
typedef char FrameWorkTextureExtentOffsetCheck[
    offsetof(FrameWork, useStandardTextureExtent) == 0xF9B ? 1 : -1];

#endif
