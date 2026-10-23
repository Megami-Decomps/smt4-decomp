/* NON_MATCHING: instructions match, but the defaults use a base-plus-member relocation and zero/one float literals have opposite pool order. */
#include "shard/W4_Match3_InfoWindow.h"
#include "AsdSDK/AsdDebug.h"

struct InfoWindowParameterDefaults { u8 primary[0x48]; u8 secondary[0x18]; };
extern "C" {
extern const InfoWindowParameterDefaults DAT_0052facc;
void* asdMemoryAllocTracked(u32, u32, u32, u32, u32);
void sysMemClear(void* memory, u32 size);
void FUN_00156478(void);
void FUN_00155ca8(void);
u32 asdProcessCreateSimple(const char*, u32, u32, u32, void (*)(void), void (*)(void), u32);
u32 taskCreateDraw(const char*, u32, u32, u32, void (*)(void), u32, u32, u32);
void paramsClearPacket(Params002c312c* parameters);
void paramsInit(Params002c312c*, const void*, u16, const void*, u16, const void*, u16, const void*, u16, const void*, u16);
void FUN_0014e188(UiSpriteState*, u32 group, u32 id, const Params002c312c*, u16 flags, f32 speed);
void uiSpriteSetKeyframe(UiSpriteState*, u32 keyframe, u32 flags);
void uiSpriteSetImageKeyframe(UiSpriteState*, u32 keyframe, u32 flags);
void* spriteHandleCreate(u32 flags);
void FUN_001527d8(void* sprite, s32 value);
void positionStateSet(void* sprite, u32 first, u32 second, f32 scale);

void FUN_001402d0(void)
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
    paramsInit(&window->parameters, DAT_0052facc.primary, sizeof(DAT_0052facc.primary),
               DAT_0052facc.secondary, sizeof(DAT_0052facc.secondary), NULL, 0, NULL, 0, NULL, 0);
    FUN_0014e188(&window->sprites.background, 8, 135, &window->parameters, 1, 0.0f);
    uiSpriteSetKeyframe(&window->sprites.background, 0, 0);
    FUN_0014e188(&window->labelAnimation, 8, 135, &window->parameters, 1, 0.0f);
    uiSpriteSetKeyframe(&window->labelAnimation, 2, 0);
    FUN_0014e188(&window->sprites.content, 27, 4000, &window->parameters, 1, 0.0f);
    uiSpriteSetKeyframe(&window->sprites.content, 3, 0);
    uiSpriteSetImageKeyframe(&window->sprites.content, 0, 0);
    window->text = spriteHandleCreate(0);
    FUN_001527d8(window->text, -1);
    positionStateSet(window->text, 0, 0x646464FF, 1.0f);
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
