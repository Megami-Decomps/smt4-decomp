#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/PlaceWin.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/Task.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern PlaceWindow *g_placeWin;
/* The place window's sprite resource packets, in retail's order (0x18, 0x18 and 0x70 bytes). */
static const u32 sPlaceWinPacketA[6] = {
    0, 0, 0, 0xfec0, 0, 8,
};
static const u32 sPlaceWinPacketB[6] = {
    0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 4,
};
static const u32 sPlaceWinPacketC[28] = {
    1, 0, 0xfffffffd, 0, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
    0, 0, 0xfffffffd, 1, 0, 0xfffffffd, 0, 0xffffffff, 0, 0xffffffff, 0xffffffff, 0, 0xffffffff, 0,
};
s32 placeWinUpdate(u32);
void placeWindowDrawLabel(void *);
u32 taskCreateDraw(const char *, s32, s32, s32, TaskFunc, TaskFunc, void *, u32);
void drawParameterBlockClear(void *);

void uiSpriteStateInitFromSource(void *, u32, u32, void *, u32, f32);
void spriteStartAnimationByIndex(void *, u32);

/* Create the place-name window's update process, stereo draw tasks and animation data. */
void placeWinCreate()
{
    if (g_placeWin == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\PlaceWin\\PlaceWin.cpp", 166);
        g_placeWin = static_cast<PlaceWindow *>(asdMemAlloc(0x100, 0x100, 0, sizeof(PlaceWindow), 1));
    }
    PlaceWindow *window = g_placeWin;
    memClear(window, sizeof(PlaceWindow));
    window->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("PlaceWin Calc"), 1, 0, 0, placeWinUpdate, NULL, NULL);
    taskCreateDraw("PlaceWin DrawUpLeft", 0x81, 0, 0, placeWindowDrawLabel, NULL, NULL, window->job);
    taskCreateDraw("PlaceWin DrawUpRight", 0xdf, 0, 0, placeWindowDrawLabel, NULL, NULL, window->job);
    window = g_placeWin;
    drawParameterBlockClear(window->parameters.packet);
    paramsInit(reinterpret_cast<UiResourceParameters *>(window->parameters.packet), sPlaceWinPacketA, sizeof(sPlaceWinPacketA),
               sPlaceWinPacketB, sizeof(sPlaceWinPacketB), NULL, 0, NULL, 0, sPlaceWinPacketC, sizeof(sPlaceWinPacketC));
    uiSpriteStateInitFromSource(window->animation, 0xe, 0x87, window->parameters.packet, 1, 1.0f);
    spriteStartAnimationByIndex(window->animation, 0);
}
}
