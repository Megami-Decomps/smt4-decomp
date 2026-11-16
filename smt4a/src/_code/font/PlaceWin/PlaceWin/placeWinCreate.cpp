#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/PlaceWin.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* The place window's image, scale, and animation parameter packets. */
static const u32 sPlaceWinPacketA[6] = {
    0x00000000, 0x00000000, 0x00000000, 0x0000FEC0, 0x00000000, 0x00000008
};
static const u32 sPlaceWinPacketB[6] = {
    0x3F800000, 0x3F800000, 0x00000000, 0x3F800000, 0x00000000, 0x00000004
};
static const u32 sPlaceWinPacketC[28] = {
    0x00000001, 0x00000000, 0xFFFFFFFD, 0x00000000, 0x00000000, 0xFFFFFFFD,
    0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000,
    0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFD, 0x00000001,
    0x00000000, 0xFFFFFFFD, 0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF,
    0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000
};
extern "C" {
extern PlaceWindow *g_placeWin;
void *asdMemoryAllocTracked(u32 pool, u32 alignment, u32 flags, u32 bytes, u32 clear);
void sysMemClear(void *destination, u32 bytes);
u32 placeWindowUpdateAnimation(u32 job);
u32 placeWinDraw(u32 job);
u32 taskCreateDraw(const char *name, u32 group, u32, u32,
                   u32 (*draw)(u32), u32, u32, u32 parent);
void paramsClearPacket(void *packet);

void FUN_0014e188(void *animation, u32 layer, u32 resource, const void *packet, u16 mode, f32 scale);
void uiSpriteSelectAnim(void *animation, u32 index);

/* Allocate the place caption window, create its update/draw jobs and initialize its animation. */
void placeWinCreate(void)
{
    if (g_placeWin == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\PlaceWin\\PlaceWin.cpp", 166);
        g_placeWin = static_cast<PlaceWindow *>(asdMemoryAllocTracked(256, 256, 0, sizeof(PlaceWindow), 1));
    }
    PlaceWindow *window = g_placeWin;
    sysMemClear(window, sizeof(PlaceWindow));
    u32 job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("PlaceWin Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(placeWindowUpdateAnimation), 0, 0);
    window->job = job;
    taskCreateDraw("PlaceWin DrawUpLeft", 0x86, 0, 0, placeWinDraw, 0, 0, job);
    taskCreateDraw("PlaceWin DrawUpRight", 0xE2, 0, 0, placeWinDraw, 0, 0, window->job);
    window = g_placeWin;
    paramsClearPacket(window->parameters.packet);
    paramsInit(reinterpret_cast<UiResourceParameters *>(window->parameters.packet),
               sPlaceWinPacketA, sizeof(sPlaceWinPacketA), sPlaceWinPacketB, sizeof(sPlaceWinPacketB),
               NULL, 0, NULL, 0, sPlaceWinPacketC, sizeof(sPlaceWinPacketC));
    FUN_0014e188(window->animation, 8, 0x87, window->parameters.packet, 1, 1.0f);
    uiSpriteSelectAnim(window->animation, 0);
}
}
