#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/InfoWinA.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct InfoWindowParameterDefaults {
    u32 primary[18];
    u32 secondary[6];
};
typedef char InfoWindowParameterDefaultsLayoutCheck[
    offsetof(InfoWindowParameterDefaults, secondary) == 0x48 &&
    sizeof(InfoWindowParameterDefaults) == 0x60 ? 1 : -1];

/* Default parameter packets stored with the info-window implementation. */
static const InfoWindowParameterDefaults g_infoWindowParameterDefaults = {
    {0x00200000, 0, 8, 0, 0x00200000, 8, 320, 0, 8, 120, 0, 8,
     0, 120, 8, 0x00400000, 0, 10},
    {0, 0x3F800000, 8, 0x3F333333, 0, 8}
};
extern "C" {
void* asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void* memory, u32 size);
void FUN_00156478(void);
void FUN_00155ca8(void);
u32 taskCreateDraw(const char*, u32, u32, u32, void (*)(void), u32, u32, u32);
void paramsClearPacket(UiResourceParameters* parameters);

void uiSpriteStateInitFromSource(UiSpriteState*, u32 group, u32 id, const UiResourceParameters*, u16 flags, f32 speed);
void uiSpriteSetKeyframe(UiSpriteState*, u32 keyframe, u32 flags);
void uiSpriteSetImageKeyframe(UiSpriteState*, u32 keyframe, u32 flags);
void* spriteHandleCreate(u32 flags);
void uiObjectSetColorRgb(void* sprite, s32 value);
void positionStateSet(void* sprite, u32 first, u32 second, f32 scale);

void infoWindowInitialize(void)
{
    if (!g_infoWin) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\InfoWin\\InfoWin.cpp", 0x197);
        g_infoWin = static_cast<InfoWindowA*>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(InfoWindowA), 1));
    }
    InfoWindowA* window = g_infoWin;
    sysMemClear(window, sizeof(InfoWindowA));
    window->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("InfoWin Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00156478), NULL, 0);
    taskCreateDraw("InfoWin DrawUpLeft", 0x86, 0, 0, FUN_00155ca8, 0, 0, window->task);
    taskCreateDraw("InfoWin DrawUpRight", 0xE2, 0, 0, FUN_00155ca8, 0, 0, window->task);
    window = g_infoWin;
    paramsClearPacket(&window->parameters);
    paramsInit(&window->parameters, g_infoWindowParameterDefaults.primary, sizeof(g_infoWindowParameterDefaults.primary),
               g_infoWindowParameterDefaults.secondary, sizeof(g_infoWindowParameterDefaults.secondary), NULL, 0, NULL, 0, NULL, 0);
    uiSpriteStateInitFromSource(&window->background, 8, 135, &window->parameters, 1, 1.0f);
    uiSpriteSetKeyframe(&window->background, 0, 0);
    uiSpriteStateInitFromSource(&window->label, 8, 135, &window->parameters, 1, 1.0f);
    uiSpriteSetKeyframe(&window->label, 2, 0);
    uiSpriteStateInitFromSource(&window->content, 27, 4000, &window->parameters, 1, 1.0f);
    uiSpriteSetKeyframe(&window->content, 3, 0);
    uiSpriteSetImageKeyframe(&window->content, 0, 0);
    window->text = spriteHandleCreate(0);
    uiObjectSetColorRgb(window->text, -1);
    positionStateSet(window->text, 0, 0x646464FF, 0.0f);
    window->timer = 30;
    window->active = 0;
    window->argA = 0;
    window->argB = 0;
    window->pending = 0;
    window->resetState = 0;
    window->unk32C = 0;
    window->unk32D = 0;
}
}
