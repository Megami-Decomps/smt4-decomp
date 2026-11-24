/* NON_MATCHING: 14 lines, one schedule: for the "HDRCL" process retail loads the work, the two callbacks and the
 * zero delay into r2, r1, r0 and r3 before the flag stores and forms the name last (`add r0, pc`), where the
 * build forms the name first and takes r3, r2, r1 for the stack arguments. The 21 draw jobs match.
 * With the two layer switches written after the six flag stores the call's code is retail's and only those stores
 * come out in the other order (12 lines); retail stores the two layer flags first, so that order is not used. */
#include "frame_tex/FrameTex.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "code/Code002c_Smt4.h"

/* The camp panel's animation: it slides down from above the screen, and its sprites fade and grow in. */
static const UiSpritePositionKey sCampPositionKeys[] = {
    {0, -32, 0, 272, 60, 0, 0},
    {0, -32, 0, -32, 30, 0, 0},
};
static const UiSpriteScalarKey sCampAlphaKeys[] = {
    {0.0f, 1.0f, 4, 0, 0},
};
static const UiSpriteScalarKey sCampScaleKeys[] = {
    {0.0f, 1.0f, 8, 0, 0},
};
static const SpriteAnimationCommand sCampCommands[] = {
    {0, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {1, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-2, 0, {0, 0, 0}, -3, -3, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

extern "C" {

void frameTexReleaseWork(u32 job);
s32 frameTexHdrCaptureLeft(u32 job);
s32 frameTexHdrCaptureRight(u32 job);
s32 FUN_001080c0(u32 job);
s32 FUN_0010812c(u32 job);
s32 titleJobRefreshSurface(u32 job);
s32 titleJobRefreshOverlaySurface(u32 job);
s32 FUN_001081b0(u32 job);
s32 FUN_0010821c(u32 job);
s32 FUN_00109348(u32 job);
s32 FUN_001093e8(u32 job);
s32 panelUpdateAnimatedScale(u32 job);
s32 FUN_00108b0c(u32 job);
s32 titleBackdropRender(u32 job);
s32 titleCaptureHalfSizeSurfaceOnce(u32 job);
s32 frameTexAdvanceEncounterFade(u32 job);
s32 FUN_0010a110(u32 job);
s32 titleCaptureReadySurfaceOnce(u32 job);
s32 FUN_0010b2d0(u32 job);
s32 titlePartStart(u32 job);
s32 titleCaptureSurfaceOnce(u32 job);
s32 FUN_0010949c(u32 job);
s32 FUN_00109520(u32 job);

/* The module's layer switches (frameTexSetHdrEnabled and frameTexSetZanEnabled), as this file inlines them. */
static __inline void frameTexSetHdrEnabled(u8 value)
{
    g_frameTex->hdr.enabled = value;
}
static __inline void frameTexSetZanEnabled(u8 value)
{
    g_frameTex->zan.enabled = value;
}

/* Creates the frame-texture effects: allocates the work, its capture textures and the camp panel's
 * animation, then starts the owning process and one capture and one draw job per effect and screen. */
void frameTexCreate(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\frame_tex\\FrameTex.cpp", 346);
    FrameTexWork *work = g_frameTex = (FrameTexWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(FrameTexWork), 1);
    memClear(work, sizeof(FrameTexWork));
    work->surfaceLeft = (AsdTexture *)asdGxIndexBufferCreate(0);
    work->surfaceRight = (AsdTexture *)asdGxIndexBufferCreate(0);
    work->zanSurfaceLeft = (AsdTexture *)asdGxIndexBufferCreate(0);
    work->zanSurfaceRight = (AsdTexture *)asdGxIndexBufferCreate(0);
    work->sceneSurface = NULL;
    work->encEffFadeActive = 0;
    work->encEffFadeInFrames = 0;
    work->encEffFadeOutFrames = 0;
    work->encEffFrame = 0;
    work->campActive = 0;
    drawParameterBlockClear(&work->campResources);
    paramsInit(&work->campResources, sCampPositionKeys, sizeof(sCampPositionKeys), sCampAlphaKeys,
               sizeof(sCampAlphaKeys), sCampScaleKeys, sizeof(sCampScaleKeys), NULL, 0, sCampCommands,
               sizeof(sCampCommands));
    work->campHeightScale = 0.25f;
    work->campWidthScale = 0.25f;
    work->campSpeed = 20.0f;
    frameTexSetHdrEnabled(0);
    frameTexSetZanEnabled(0);
    work->campEnabled = 0;
    work->campCapturedLeft = 0;
    work->campCapturedRight = 0;
    work->unkF98 = 0;
    work->encEffAlternate = 0;
    work->hdrDownsampleChain = 0;

    work->job = asdProcessCreateSimple((const s8 *)"HDRCL", 0x6a, 0, 0, frameTexHdrCaptureLeft, frameTexReleaseWork,
                                       (u32)g_frameTex);
    taskCreateDraw((const s8 *)"HDRCR", 0xce, 0, 0, frameTexHdrCaptureRight, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"HDRDL", 0x6b, 0, 0, FUN_001080c0, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"HDRDR", 0xcf, 0, 0, FUN_0010812c, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanCL", 0x6d, 0, 0, titleJobRefreshSurface, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanCR", 0xd1, 0, 0, titleJobRefreshOverlaySurface, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanDL", 0x6c, 0, 0, FUN_001081b0, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanDR", 0xd0, 0, 0, FUN_0010821c, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPCL", 0x78, 0, 0, FUN_00109348, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPCR", 0xd6, 0, 0, FUN_001093e8, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPDL", 0x65, 0, 0, panelUpdateAnimatedScale, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPDR", 0xcc, 0, 0, FUN_00108b0c, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCL", 0x77, 0, 0, titleBackdropRender, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCR", 0xd5, 0, 0, titleCaptureHalfSizeSurfaceOnce, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFDL", 0x82, 0, 0, frameTexAdvanceEncounterFade, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFDR", 0xe0, 0, 0, FUN_0010a110, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCL", 0x7e, 0, 0, titleCaptureReadySurfaceOnce, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCR", 0xdc, 0, 0, FUN_0010b2d0, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADECL", 0x77, 0, 0, titlePartStart, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADECR", 0xd5, 0, 0, titleCaptureSurfaceOnce, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADEDL", 0x79, 0, 0, FUN_0010949c, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADEDR", 0xd7, 0, 0, FUN_00109520, NULL, (u32)g_frameTex, (void *)work->job);
}

} /* extern "C" */
