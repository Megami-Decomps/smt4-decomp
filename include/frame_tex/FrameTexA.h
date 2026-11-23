/* frame_tex/FrameTex: Apocalypse's frame-texture effects work (g_frameTex, 0x14A0 bytes).
 *
 * The same effects as SMT IV's FrameTexWork (frame_tex/FrameTex.h: the "HDR", "Zan", "CAMP", two
 * "ENCEFF" and the "XFADE" cross-fade draw jobs frameTexCreate registers), with four CAMP widgets and a
 * larger block between the CAMP and ENCEFF capture states. Only Apocalypse's units include this. */
#ifndef FRAME_TEX_FRAMETEXA_H
#define FRAME_TEX_FRAMETEXA_H

#include "frame_tex/FrameTexLayer.h"

/* Fifteen values frameTransitionSetMode copies from g_frameTransitionDefaultPresets as one block. */
struct FrameTexTransitionPresets {
    f32 values[15];
};

/* One tile of the CAMP transition's board. */
struct FrameTexCampTile {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ f32 alpha;
    /* 0x10 */ u8 unk10[4];
};

/* The board of 24 tiles the CAMP transition draws over the capture (Apocalypse only). */
struct FrameTexCampBoard {
    /* 0x000 */ u8 unk000[0x60];
    /* 0x060 */ s32 tileImages[24];    /* texture-table entry drawn for each tile */
    /* 0x0C0 */ u8 unk0C0[0xC0];
    /* 0x180 */ FrameTexCampTile tiles[24];
};
typedef char FrameTexCampBoardLayoutCheck[
    sizeof(FrameTexCampTile) == 0x14 && offsetof(FrameTexCampBoard, tileImages) == 0x60 &&
    offsetof(FrameTexCampBoard, tiles) == 0x180 && sizeof(FrameTexCampBoard) == 0x360 ? 1 : -1];

/* The opacity of one board tile. Retail forms the board's address once for this read (`add r9, work, #0x1078`,
 * then `[r9 + tile * 20 + 0x18C]`) while it reads tileImages relative to the work, so the read took the board. */
static __inline f32 frameTexCampTileAlpha(const FrameTexCampBoard *board, s32 tile)
{
    return board->tiles[tile].alpha;
}

struct FrameTexWorkA {
    /* 0x0000 */ u32 job;                    /* the "HDRCL" process owning the other jobs */
    /* 0x0004 */ AsdTexture *surfaceLeft;    /* capture textures of the CAMP/ENCEFF/XFADE sets */
    /* 0x0008 */ AsdTexture *surfaceRight;
    /* 0x000C */ s8 encEffFadeActive;
    /* 0x000D */ u8 unk000D[3];
    /* 0x0010 */ s32 encEffFadeInFrames;
    /* 0x0014 */ s32 encEffFadeOutFrames;
    /* 0x0018 */ s32 encEffFrame;
    /* 0x001C */ s8 campActive;
    /* 0x001D */ u8 unk001D[3];
    /* 0x0020 */ s32 campFrame;
    /* 0x0024 */ s8 campClosing;
    /* 0x0025 */ u8 value;                   /* set by frameTexSetValue */
    /* 0x0026 */ u8 unk0026[2];
    /* 0x0028 */ f32 campWidthScale;
    /* 0x002C */ f32 campHeightScale;
    /* 0x0030 */ f32 campSpeed;
    /* 0x0034 */ UiResourceParameters campResources;
    /* 0x0054 */ UiSpriteState campItems[24];
    /* 0x0D74 */ UiSpriteState campWidgets[4];
    /* 0x0FA4 */ FrameTexLayer hdr;
    /* 0x0FE8 */ u32 hdrColors[3];          /* RGBA colours of the downsampled HDR passes */
    /* 0x0FF4 */ FrameTexLayer zan;
    /* 0x1038 */ AsdTexture *zanSurfaceLeft;
    /* 0x103C */ AsdTexture *zanSurfaceRight;
    /* 0x1040 */ u8 campEnabled;
    /* 0x1041 */ u8 unk1041;
    /* 0x1042 */ u8 campCaptureResult;
    /* 0x1043 */ s8 campCapturedLeft;
    /* 0x1044 */ s8 campCapturedRight;
    /* 0x1045 */ s8 campPendingRight;        /* the right capture waits while a state selector is set */
    /* 0x1046 */ u8 unk1046[0x32];
    /* 0x1078 */ FrameTexCampBoard campBoard;
    /* 0x13D8 */ FrameTexTransitionPresets transitionPresets;
    /* 0x1414 */ s8 encEffEnabled;
    /* 0x1415 */ u8 unk1415;
    /* 0x1416 */ u8 encEffCaptureResult;
    /* 0x1417 */ s8 encEffCapturedLeft;
    /* 0x1418 */ s8 encEffCapturedRight;
    /* 0x1419 */ s8 encEffPendingRight;
    /* 0x141A */ u8 unk141A[0x32];
    /* 0x144C */ s8 unk144C;
    /* 0x144D */ s8 encEffAlternate;         /* selects the second ENCEFF capture set */
    /* 0x144E */ s8 fadeEnabled;             /* the XFADE set */
    /* 0x144F */ s8 fadeCaptureResult;
    /* 0x1450 */ s8 fadeCapturedLeft;
    /* 0x1451 */ s8 fadeCapturedRight;
    /* 0x1452 */ s8 fadePendingRight;
    /* 0x1453 */ u8 unk1453[0x29];
    /* 0x147C */ u32 fadeColor;              /* RGBA, alpha in the low byte */
    /* 0x1480 */ u8 unk1480[4];
    /* 0x1484 */ s32 fadeElapsed;
    /* 0x1488 */ s32 fadeDuration;
    /* 0x148C */ s8 captureBlocked;
    /* 0x148D */ u8 unk148D[3];
    /* 0x1490 */ AsdTexture *sceneSurface;   /* the HDR and Zan layers' source */
    /* 0x1494 */ s8 hdrDownsampleChain;      /* the half/quarter textures exist */
    /* 0x1495 */ u8 unk1495[3];
    /* 0x1498 */ AsdTexture *hdrSurfaceHalf; /* downsample chain */
    /* 0x149C */ AsdTexture *hdrSurfaceQuarter;
};
typedef char FrameTexWorkAHdrOffsetCheck[offsetof(FrameTexWorkA, hdr) == 0xFA4 ? 1 : -1];
typedef char FrameTexWorkAZanOffsetCheck[offsetof(FrameTexWorkA, zan) == 0xFF4 ? 1 : -1];
typedef char FrameTexWorkACampOffsetCheck[offsetof(FrameTexWorkA, campEnabled) == 0x1040 ? 1 : -1];
typedef char FrameTexWorkACampBoardOffsetCheck[offsetof(FrameTexWorkA, campBoard) == 0x1078 ? 1 : -1];
typedef char FrameTexWorkAPresetsOffsetCheck[offsetof(FrameTexWorkA, transitionPresets) == 0x13D8 ? 1 : -1];
typedef char FrameTexWorkAEncEffOffsetCheck[offsetof(FrameTexWorkA, encEffEnabled) == 0x1414 ? 1 : -1];
typedef char FrameTexWorkAFadeOffsetCheck[offsetof(FrameTexWorkA, fadeEnabled) == 0x144E ? 1 : -1];
typedef char FrameTexWorkAFadeColorOffsetCheck[offsetof(FrameTexWorkA, fadeColor) == 0x147C ? 1 : -1];
typedef char FrameTexWorkASceneOffsetCheck[offsetof(FrameTexWorkA, sceneSurface) == 0x1490 ? 1 : -1];
typedef char FrameTexWorkASizeCheck[sizeof(FrameTexWorkA) == 0x14A0 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
extern FrameTexWorkA *g_frameTex;
#ifdef __cplusplus
}
#endif

#endif
