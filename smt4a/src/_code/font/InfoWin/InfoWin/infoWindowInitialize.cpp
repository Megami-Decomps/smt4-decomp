#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W4_Match3_InfoWindow.h"
#include "AsdSDK/AsdDebug.h"

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
u32 asdProcessCreateSimple(const char*, u32, u32, u32, void (*)(void), void (*)(void), u32);
u32 taskCreateDraw(const char*, u32, u32, u32, void (*)(void), u32, u32, u32);
void paramsClearPacket(UiResourceParameters* parameters);

void FUN_0014e188(UiSpriteState*, u32 group, u32 id, const UiResourceParameters*, u16 flags, f32 speed);
void uiSpriteSetKeyframe(UiSpriteState*, u32 keyframe, u32 flags);
void uiSpriteSetImageKeyframe(UiSpriteState*, u32 keyframe, u32 flags);
void* spriteHandleCreate(u32 flags);
void FUN_001527d8(void* sprite, s32 value);
void positionStateSet(void* sprite, u32 first, u32 second, f32 scale);

void infoWindowInitialize(void)
{
    if (!g_infoWin) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\InfoWin\\InfoWin.cpp", 0x197);
        g_infoWin = static_cast<InfoWindow*>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(InfoWindow), 1));
    }
    InfoWindow* window = g_infoWin;
    sysMemClear(window, sizeof(InfoWindow));
    window->task = asdProcessCreateSimple("InfoWin Calc", 3, 0, 0, FUN_00156478, NULL, 0);
    taskCreateDraw("InfoWin DrawUpLeft", 0x86, 0, 0, FUN_00155ca8, 0, 0, window->task);
    taskCreateDraw("InfoWin DrawUpRight", 0xE2, 0, 0, FUN_00155ca8, 0, 0, window->task);
    window = g_infoWin;
    paramsClearPacket(&window->parameters);
    paramsInit(&window->parameters, g_infoWindowParameterDefaults.primary, sizeof(g_infoWindowParameterDefaults.primary),
               g_infoWindowParameterDefaults.secondary, sizeof(g_infoWindowParameterDefaults.secondary), NULL, 0, NULL, 0, NULL, 0);
    FUN_0014e188(&window->sprites.background, 8, 135, &window->parameters, 1, 1.0f);
    uiSpriteSetKeyframe(&window->sprites.background, 0, 0);
    FUN_0014e188(&window->labelAnimation, 8, 135, &window->parameters, 1, 1.0f);
    uiSpriteSetKeyframe(&window->labelAnimation, 2, 0);
    FUN_0014e188(&window->sprites.content, 27, 4000, &window->parameters, 1, 1.0f);
    uiSpriteSetKeyframe(&window->sprites.content, 3, 0);
    uiSpriteSetImageKeyframe(&window->sprites.content, 0, 0);
    window->text = spriteHandleCreate(0);
    FUN_001527d8(window->text, -1);
    positionStateSet(window->text, 0, 0x646464FF, 0.0f);
    window->timer = 30;
    window->active = 0;
    window->argA = 0;
    window->argB = 0;
    window->pending = 0;
    window->initialization.resetState = 0;
    window->unk32C = 0;
    window->unk32D = 0;
}
}
