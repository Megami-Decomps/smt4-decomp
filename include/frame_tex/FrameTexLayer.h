/* frame_tex/FrameTex: the parts of the frame-texture effects work both games share. SMT IV's work
 * is FrameTexWork (frame_tex/FrameTex.h), Apocalypse's FrameTexWorkA (frame_tex/FrameTexA.h). */
#ifndef FRAME_TEX_FRAMETEXLAYER_H
#define FRAME_TEX_FRAMETEXLAYER_H

#include "common.h"
#include <stddef.h>
#include "shard/JobWork.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"

/* A captured frame layer drawn back as a textured quad (the HDR glow and the Zan afterimage). */
struct FrameTexLayer {
    /* 0x00 */ s8 enabled;
    /* 0x01 */ s8 ready;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 levels;           /* the capture was downsampled 2^levels times */
    /* 0x08 */ u8 captureResult;     /* FUN_002bfadc's result; 0 selects the full-width extent */
    /* 0x09 */ s8 capturedLeft;
    /* 0x0A */ s8 capturedRight;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ f32 x[4];             /* quad corners */
    /* 0x1C */ f32 y[4];
    /* 0x2C */ u8 unk2C[8];
    /* 0x34 */ u32 color;
    /* 0x38 */ f32 depth;
    /* 0x3C */ s32 blendMode;        /* 0 normal, 1 additive, 2 subtractive */
    /* 0x40 */ u8 filtered;
    /* 0x41 */ u8 unk41[3];
};
typedef char FrameTexLayerSizeCheck[sizeof(FrameTexLayer) == 0x44 ? 1 : -1];

#endif
