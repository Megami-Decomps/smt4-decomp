/* frame_tex/FrameTex: SMT IV's frame-texture effects work (g_frameTex, 0xFEC bytes).
 *
 * FUN_001043c8 allocates it and registers one draw job per effect and screen ("HDR", "Zan",
 * "CAMP", two "ENCEFF" sets and a cross-fade set (Apocalypse names it "XFADE"), each with left/right capture (CL/CR) and draw (DL/DR)
 * callbacks); every callback receives this work from jobGetWork(). The capture callbacks copy the
 * frame buffer into a texture and record FUN_002bfadc's result and a per-screen "captured" flag,
 * which the draw callbacks wait for. Apocalypse's larger layout is FrameTexWorkA in
 * frame_tex/FrameTexA.h. */
#ifndef FRAME_TEX_FRAMETEX_H
#define FRAME_TEX_FRAMETEX_H

#include "frame_tex/FrameTexLayer.h"

struct FrameTexWork {
    /* 0x000 */ u32 job;                     /* the "HDRCL" process owning the other jobs */
    /* 0x004 */ AsdTexture *surfaceLeft;     /* capture textures of the CAMP/ENCEFF/fade sets */
    /* 0x008 */ AsdTexture *surfaceRight;
    /* 0x00C */ s8 encEffFadeActive;
    /* 0x00D */ u8 unk00D[3];
    /* 0x010 */ s32 encEffFadeInFrames;
    /* 0x014 */ s32 encEffFadeOutFrames;
    /* 0x018 */ s32 encEffFrame;
    /* 0x01C */ s8 campActive;
    /* 0x01D */ u8 unk01D[3];
    /* 0x020 */ s32 campFrame;
    /* 0x024 */ s8 campClosing;
    /* 0x025 */ u8 value;                    /* set by frameTexSetValue */
    /* 0x026 */ u8 unk026[2];
    /* 0x028 */ f32 campWidthScale;
    /* 0x02C */ f32 campHeightScale;
    /* 0x030 */ f32 campSpeed;
    /* 0x034 */ UiResourceParameters campResources;
    /* 0x054 */ UiSpriteState campItems[24];
    /* 0xD74 */ UiSpriteState campFrameWidget;
    /* 0xE00 */ UiSpriteState campCloseWidget;
    /* 0xE8C */ FrameTexLayer hdr;
    /* 0xED0 */ u32 hdrColors[3];           /* RGBA colours of the downsampled HDR passes */
    /* 0xEDC */ FrameTexLayer zan;
    /* 0xF20 */ AsdTexture *zanSurfaceLeft;
    /* 0xF24 */ AsdTexture *zanSurfaceRight;
    /* 0xF28 */ s8 campEnabled;
    /* 0xF29 */ u8 unkF29;
    /* 0xF2A */ u8 campCaptureResult;
    /* 0xF2B */ s8 campCapturedLeft;
    /* 0xF2C */ s8 campCapturedRight;
    /* 0xF2D */ s8 campPendingRight;         /* the right capture waits while a state selector is set */
    /* 0xF2E */ u8 unkF2E[0x32];
    /* 0xF60 */ s8 encEffEnabled;
    /* 0xF61 */ u8 unkF61;
    /* 0xF62 */ u8 encEffCaptureResult;
    /* 0xF63 */ s8 encEffCapturedLeft;
    /* 0xF64 */ s8 encEffCapturedRight;
    /* 0xF65 */ s8 encEffPendingRight;
    /* 0xF66 */ u8 unkF66[0x32];
    /* 0xF98 */ s8 unkF98;
    /* 0xF99 */ s8 encEffAlternate;          /* selects the second ENCEFF capture set */
    /* 0xF9A */ s8 fadeEnabled;              /* the cross-fade set */
    /* 0xF9B */ u8 fadeCaptureResult;
    /* 0xF9C */ s8 fadeCapturedLeft;
    /* 0xF9D */ s8 fadeCapturedRight;
    /* 0xF9E */ s8 fadePendingRight;
    /* 0xF9F */ u8 unkF9F[0x29];
    /* 0xFC8 */ u32 fadeColor;               /* RGBA, alpha in the low byte */
    /* 0xFCC */ u8 unkFCC[4];
    /* 0xFD0 */ s32 fadeElapsed;
    /* 0xFD4 */ s32 fadeDuration;
    /* 0xFD8 */ s8 captureBlocked;
    /* 0xFD9 */ u8 unkFD9[3];
    /* 0xFDC */ AsdTexture *sceneSurface;    /* the HDR and Zan layers' source */
    /* 0xFE0 */ s8 hdrDownsampleChain;       /* the half/quarter textures exist; FUN_001192c8 draws the HDR layer */
    /* 0xFE1 */ u8 unkFE1[3];
    /* 0xFE4 */ AsdTexture *hdrSurfaceHalf;  /* downsample chain */
    /* 0xFE8 */ AsdTexture *hdrSurfaceQuarter;
};
typedef char FrameTexWorkHdrOffsetCheck[offsetof(FrameTexWork, hdr) == 0xE8C ? 1 : -1];
typedef char FrameTexWorkZanOffsetCheck[offsetof(FrameTexWork, zan) == 0xEDC ? 1 : -1];
typedef char FrameTexWorkCampOffsetCheck[offsetof(FrameTexWork, campEnabled) == 0xF28 ? 1 : -1];
typedef char FrameTexWorkEncEffOffsetCheck[offsetof(FrameTexWork, encEffEnabled) == 0xF60 ? 1 : -1];
typedef char FrameTexWorkFadeOffsetCheck[offsetof(FrameTexWork, fadeEnabled) == 0xF9A ? 1 : -1];
typedef char FrameTexWorkFadeColorOffsetCheck[offsetof(FrameTexWork, fadeColor) == 0xFC8 ? 1 : -1];
typedef char FrameTexWorkSceneOffsetCheck[offsetof(FrameTexWork, sceneSurface) == 0xFDC ? 1 : -1];
typedef char FrameTexWorkSizeCheck[sizeof(FrameTexWork) == 0xFEC ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
extern FrameTexWork *g_frameTex;
#ifdef __cplusplus
}
#endif

#endif
