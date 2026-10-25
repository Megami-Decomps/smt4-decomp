#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/MenuState.h"
#include "AsdSDK/AsdDebug.h"
#include "ui/UiSpriteState.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct ComWinScaleKey {
    f32 x, y;
    s32 frame;
};

extern "C" {
extern MenuState *g_menuState;
const s32 DAT_0052f7bc[] = {30, 0, 4, 0, 30, 4};
const ComWinScaleKey DAT_0052f7d4[] = {
    {0.0f, 1.0f, 4}, {1.0f, 0.0f, 4},
    {0.5f, 1.0f, 10}, {1.0f, 0.5f, 20}
};
const ComWinScaleKey DAT_0052f804[] = {
    {0.8f, 1.1f, 4}, {1.1f, 1.0f, 1}, {1.0f, 1.1f, 1},
    {1.1f, 0.8f, 3}, {0.5f, 1.2f, 3}, {1.2f, 1.0f, 8}
};
const s32 DAT_0052f84c[] = {
    -3, 0, -3, 0, 0, 0, 0, -3, 0, -3, -3, 0,
    1, 0, -1, 0, -1, -1, 0, -1, 0, -3, 0, -3,
    1, 0, 2, 0, -3, 0, -3, -3, 0, 3, 0, -1,
    0, -1, -1, 0, -1, 0, -3, 0, -3, 2, 0, -3,
    0, -3, 0, -3, 3, 0, -3, 0, -3, 0, -3, -2,
    0, -3, 0, -1, 0, -1, -1, 0, -1, 0, 0, 0,
    -3, 0, 0, -3, 0, -1, 0, -1, -1, 0, -1, 0,
    1, 0, -3, 1, 0, -3, 0, -1, 0, -1, -1, 0,
    -1, 0, -3, 0, -3, -3, 0, 4, 0, -3, 0, -3,
    -3, 0, 5, 0, -1, 0, -1, -1, 0, -1, 0
};
u32 FUN_00156230();
u32 FUN_0015519c();
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *memory, u32 size);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 mode,
    u32 (*draw)(), u32 (*destroy)(), void *work, u32 parent);
void paramsClearPacket(UiResourceParameters *parameters);

void uiSpriteInitializeState(UiSpriteState *, u32, u32, u32, UiSpriteSource *, u16, f32);

void comWinInitialize()
{
    if (g_menuState == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\font\\ComWin\\ComWin.cpp", 652);
        g_menuState = static_cast<MenuState *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MenuState), 1));
    }
    MenuState *menu = g_menuState;
    sysMemClear(menu, sizeof(MenuState));
    menu->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("ComWin Calc"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_00156230), NULL, NULL);
    taskCreateDraw("ComWin DrawUpLeft", 0x86, 0, 0, FUN_0015519c, NULL, NULL, menu->process);
    taskCreateDraw("ComWin DrawUpRight", 0xE2, 0, 0, FUN_0015519c, NULL, NULL, menu->process);
    menu = g_menuState;
    paramsClearPacket(&menu->resources.parameters);
    paramsInit(&menu->resources.parameters, DAT_0052f7bc, 0x18, DAT_0052f7d4, 0x30,
        DAT_0052f804, 0x48, NULL, 0, DAT_0052f84c, 0x1DC);
    UiSpriteSource *source = reinterpret_cast<UiSpriteSource *>(&menu->resources.parameters);
    uiSpriteInitializeState(&menu->primarySprites[0], 8, -1, 2, source, 1, 1.0f);
    uiSpriteSelectAnim(&menu->primarySprites[0], 0);
    uiSpriteInitializeState(&menu->primarySprites[1], 8, -1, 3, source, 1, 1.0f);
    uiSpriteSelectAnim(&menu->primarySprites[1], 2);
    uiSpriteInitializeState(&menu->secondarySprites[0], 8, 0x1A8, -1, source, 1, 1.0f);
    uiSpriteInitializeState(&menu->secondarySprites[1], 8, 0x1A9, -1, source, 1, 1.0f);
}
}
