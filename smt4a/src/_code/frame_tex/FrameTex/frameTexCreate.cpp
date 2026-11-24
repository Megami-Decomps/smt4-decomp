/* NON_MATCHING: the twin of smt4 FUN_001043c8, 135 raw / 27 shape lines, one schedule: for the "HDRCL" process
 * retail keeps g_frameTex in r1 and loads the two callbacks after the flag stores (`str r2, [sp]; strd r0, [sp, #4]`),
 * where the build loads all three before them (`stm sp, {r2, r3, ip}`), one instruction shorter. The 21 draw jobs
 * match. */
#include "frame_tex/FrameTexA.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4a.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "code/Code0015_Smt4a.h"
#include "ui/ParamsClearPacket.h"

/* The camp panel's animation: it slides down from above the screen, and its sprites fade and grow in. */
static const UiSpritePositionKey sCampPositionKeys[] = {
    {0, -32, 0, 272, 60, 0, 0},
    {0, -32, 0, -32, 30, 0, 0},
};
static const UiSpriteScalarKey sCampAlphaKeys[] = {
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 1.0f, 1, 0, 0},
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
s32 FUN_0013c660(u32 job);
s32 FUN_0013c6d4(u32 job);
s32 FUN_0013cf80(u32 job);
s32 FUN_0013d030(u32 job);
s32 FUN_0013c764(u32 job);
s32 jobDisplayFlushIfIdle(u32 job);
s32 frameTexRenderBackdropOnce(u32 job);
s32 jobRenderOnce(u32 job);
s32 panelUpdateAnimatedScale(u32 job);
s32 FUN_0013d2dc(u32 job);
s32 FUN_0013ee80(u32 job);
s32 surfaceCaptureUpdate(u32 job);
s32 frameTexAdvanceEncounterFade(u32 job);
s32 FUN_0013e9e4(u32 job);
s32 frameTexCaptureSecondVariant(u32 job);
s32 FUN_00140618(u32 job);
s32 FUN_0013e7c4(u32 job);
s32 FUN_0013e848(u32 job);
s32 FUN_0013dc70(u32 job);
s32 frameTexDrawWhenReady(u32 job);

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
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\frame_tex\\FrameTex.cpp", 474);
    FrameTexWorkA *work = g_frameTex = (FrameTexWorkA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(FrameTexWorkA), 1);
    sysMemClear(work, sizeof(FrameTexWorkA));
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
    paramsClearPacket(&work->campResources);
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
    work->unk144C = 0;
    work->encEffAlternate = 0;
    work->hdrDownsampleChain = 0;

    work->job = asdProcessCreateSimple((const s8 *)"HDRCL", 0x6c, 0, 0, frameTexHdrCaptureLeft, frameTexReleaseWork,
                                       (u32)g_frameTex);
    taskCreateDraw((const s8 *)"HDRCR", 0xce, 0, 0, frameTexHdrCaptureRight, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"HDRDL", 0x6d, 0, 0, FUN_0013c660, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"HDRDR", 0xcf, 0, 0, FUN_0013c6d4, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanCL", 0x6f, 0, 0, FUN_0013cf80, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanCR", 0xd1, 0, 0, FUN_0013d030, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanDL", 0x6e, 0, 0, FUN_0013c764, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ZanDR", 0xd0, 0, 0, jobDisplayFlushIfIdle, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPCL", 0x7b, 0, 0, frameTexRenderBackdropOnce, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPCR", 0xd7, 0, 0, jobRenderOnce, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPDL", 0x65, 0, 0, panelUpdateAnimatedScale, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"CAMPDR", 0xcc, 0, 0, FUN_0013d2dc, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCL", 0x7a, 0, 0, FUN_0013ee80, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCR", 0xd6, 0, 0, surfaceCaptureUpdate, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFDL", 0x87, 0, 0, frameTexAdvanceEncounterFade, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFDR", 0xe3, 0, 0, FUN_0013e9e4, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCL", 0x82, 0, 0, frameTexCaptureSecondVariant, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"ENCEFFCR", 0xde, 0, 0, FUN_00140618, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADECL", 0x7a, 0, 0, FUN_0013e7c4, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADECR", 0xd6, 0, 0, FUN_0013e848, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADEDL", 0x7c, 0, 0, FUN_0013dc70, NULL, (u32)g_frameTex, (void *)work->job);
    taskCreateDraw((const s8 *)"XFADEDR", 0xd8, 0, 0, frameTexDrawWhenReady, NULL, (u32)g_frameTex, (void *)work->job);
}

} /* extern "C" */
