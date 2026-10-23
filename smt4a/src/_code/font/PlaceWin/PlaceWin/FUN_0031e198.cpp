/* NON_MATCHING: packet-template final pointer/size stores are paired in a different register order. */
#include "font/PlaceWin.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>

struct PlaceWindowResourceTable {
    u8 first[0x18];
    u8 second[0x18];
    u8 third[0x70];
};
extern "C" {
extern PlaceWindow *g_placeWin;
extern const u8 DAT_0052fb5c[];
void *asdMemoryAllocTracked(u32 pool, u32 alignment, u32 flags, u32 bytes, u32 clear);
void sysMemClear(void *destination, u32 bytes);
u32 placeWindowUpdateAnimation(u32 job);
u32 placeWinDraw(u32 job);
u32 asdProcessCreateSimple(const char *name, u32 group, u32, u32,
                           u32 (*update)(u32), u32, u32);
u32 taskCreateDraw(const char *name, u32 group, u32, u32,
                   u32 (*draw)(u32), u32, u32, u32 parent);
void paramsClearPacket(void *packet);
void paramsInit(void *packet, const void *first, u32 firstBytes,
                const void *second, u32 secondBytes, u32, u32, u32, u32,
                const void *third, u32 thirdBytes);
void FUN_0014e188(void *animation, u32 layer, u32 resource, void *packet, u32 mode, f32 scale);
void uiSpriteSelectAnim(void *animation, u32 index);

/* Allocate the place caption window, create its update/draw jobs and initialize its animation. */
void FUN_0031e198(void)
{
    if (g_placeWin == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\PlaceWin\\PlaceWin.cpp", 166);
        g_placeWin = static_cast<PlaceWindow *>(asdMemoryAllocTracked(256, 256, 0, sizeof(PlaceWindow), 1));
    }
    PlaceWindow *window = g_placeWin;
    sysMemClear(window, sizeof(PlaceWindow));
    u32 job = asdProcessCreateSimple("PlaceWin Calc", 3, 0, 0, placeWindowUpdateAnimation, 0, 0);
    window->job = job;
    taskCreateDraw("PlaceWin DrawUpLeft", 0x86, 0, 0, placeWinDraw, 0, 0, job);
    taskCreateDraw("PlaceWin DrawUpRight", 0xE2, 0, 0, placeWinDraw, 0, 0, window->job);
    window = g_placeWin;
    paramsClearPacket(window->parameters.packet);
    /* Retail's symbol anchors the final subtable of the contiguous packet template. */
    const PlaceWindowResourceTable *defaults = reinterpret_cast<const PlaceWindowResourceTable *>(
        DAT_0052fb5c - offsetof(PlaceWindowResourceTable, third));
    paramsInit(window->parameters.packet, defaults->first, 0x18, defaults->second, 0x18,
               0, 0, 0, 0, defaults->third, 0x70);
    FUN_0014e188(window->animation, 8, 0x87, window->parameters.packet, 1, 1.0f);
    uiSpriteSelectAnim(window->animation, 0);
}
}
