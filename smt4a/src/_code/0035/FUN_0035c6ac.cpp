#include "common.h"

extern "C" {

typedef struct FrameTex {
    /* 0x0000 */ u8 unk0000[0x1414];
    /* 0x1414 */ u8 active;
    /* 0x1415 */ u8 unk1415[2];
    /* 0x1417 */ u8 unk1417;
    /* 0x1418 */ u8 unk1418;
    /* 0x1419 */ u8 unk1419;
    /* 0x141A */ u8 unk141A[0x33];
    /* 0x144D */ u8 unk144D;
} FrameTex;

extern FrameTex *g_frameTex;

/* Starts the frame texture (active) and clears its state bytes. */
void FUN_0035c6ac(void)
{
    FrameTex *tex = g_frameTex;

    tex->active = 1;
    tex->unk1417 = 0;
    tex->unk1418 = 0;
    tex->unk1419 = 0;
    tex->unk144D = 0;
}

} /* extern "C" */
