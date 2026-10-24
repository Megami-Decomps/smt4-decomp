/* NON_MATCHING: contiguous template arguments use different stack-store grouping and base-relative arithmetic. */
#include "font/PlaceWin.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "sys/Task.h"
#include <stddef.h>

struct PlaceWindowTemplateResources {
    u8 first[0x18];
    u8 second[0x18];
    u8 commands[0x70];
};

extern "C" {
extern PlaceWindow *g_placeWin;
extern const u8 DAT_00403a58[];
void *asdMemAlloc(u32, u32, u32, u32, u32);
void memClear(void *, u32);
s32 FUN_0032a9fc(u32);
void placeWindowDrawLabel(void *);
u32 asdProcessCreateSimple(const char *, s32, s32, s32, AsdProcUpdateFunc, AsdProcFunc, void *);
u32 taskCreateDraw(const char *, s32, s32, s32, TaskFunc, TaskFunc, void *, u32);
void drawParameterBlockClear(void *);
void paramsInit(void *, const void *, u32, const void *, u32, const void *, u32, const void *, u32, const void *, u32);
void FUN_002bd954(void *, u32, u32, void *, u32, f32);
void spriteStartAnimationByIndex(void *, u32);

/* Create the place-name window's update process, stereo draw tasks and animation data. */
void FUN_002637c8()
{
    if (g_placeWin == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\font\\PlaceWin\\PlaceWin.cpp", 166);
        g_placeWin = static_cast<PlaceWindow *>(asdMemAlloc(0x100, 0x100, 0, sizeof(PlaceWindow), 1));
    }
    PlaceWindow *window = g_placeWin;
    memClear(window, sizeof(PlaceWindow));
    window->job = asdProcessCreateSimple("PlaceWin Calc", 1, 0, 0, FUN_0032a9fc, NULL, NULL);
    taskCreateDraw("PlaceWin DrawUpLeft", 0x81, 0, 0, placeWindowDrawLabel, NULL, NULL, window->job);
    taskCreateDraw("PlaceWin DrawUpRight", 0xdf, 0, 0, placeWindowDrawLabel, NULL, NULL, window->job);
    window = g_placeWin;
    drawParameterBlockClear(window->parameters.packet);
    /* The retail symbol names the command member of this contiguous resource block. */
    const PlaceWindowTemplateResources *resources = reinterpret_cast<const PlaceWindowTemplateResources *>(
        DAT_00403a58 - offsetof(PlaceWindowTemplateResources, commands));
    paramsInit(window->parameters.packet, resources->first, sizeof(resources->first),
               resources->second, sizeof(resources->second), NULL, 0, NULL, 0,
               resources->commands, sizeof(resources->commands));
    FUN_002bd954(window->animation, 0xe, 0x87, window->parameters.packet, 1, 1.0f);
    spriteStartAnimationByIndex(window->animation, 0);
}
}
