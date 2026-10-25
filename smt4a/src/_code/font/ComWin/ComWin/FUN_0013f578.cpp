/* NON_MATCHING: allocation debug-source hook is absent; resource-address packing and saved registers differ. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/MenuState.h"

extern "C" {
extern MenuState *g_menuState;
extern const u8 DAT_0052f7bc[];
extern const u8 DAT_0052f7d4[];
extern const u8 DAT_0052f804[];
extern const u8 DAT_0052f84c[];
u32 FUN_00156230();
u32 FUN_0015519c();
void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void sysMemClear(void *memory, u32 size);
u32 asdProcessCreateSimple(const char *name, s32 priority, u32 flags, u32 mode,
    u32 (*update)(), u32 (*destroy)(), void *work);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 mode,
    u32 (*draw)(), u32 (*destroy)(), void *work, u32 parent);
void paramsClearPacket(UiResourceParameters *parameters);

void uiSpriteInitializeState(UiSpriteState *, u32, u32, u32, UiSpriteSource *, u16, f32);
void uiSpriteSelectAnim(UiSpriteState *, s32 animation);

void FUN_0013f578()
{
    if (g_menuState == NULL)
        g_menuState = static_cast<MenuState *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MenuState), 1));
    MenuState *menu = g_menuState;
    sysMemClear(menu, sizeof(MenuState));
    menu->process = asdProcessCreateSimple("ComWin Calc", 3, 0, 0, FUN_00156230, NULL, NULL);
    taskCreateDraw("ComWin DrawUpLeft", 0x86, 0, 0, FUN_0015519c, NULL, NULL, menu->process);
    taskCreateDraw("ComWin DrawUpRight", 0xE2, 0, 0, FUN_0015519c, NULL, NULL, menu->process);
    menu = g_menuState;
    UiResourceParameters *parameters = &menu->resources.parameters;
    paramsClearPacket(parameters);
    paramsInit(parameters, DAT_0052f7bc, 0x18, DAT_0052f7d4, 0x30,
        DAT_0052f804, 0x48, NULL, 0, DAT_0052f84c, 0x1DC);
    UiSpriteSource *source = reinterpret_cast<UiSpriteSource *>(parameters);
    uiSpriteInitializeState(&menu->primarySprites[0], 8, -1, 2, source, 1, 1.0f);
    uiSpriteSelectAnim(&menu->primarySprites[0], 0);
    uiSpriteInitializeState(&menu->primarySprites[1], 8, -1, 3, source, 1, 1.0f);
    uiSpriteSelectAnim(&menu->primarySprites[1], 2);
    uiSpriteInitializeState(&menu->secondarySprites[0], 8, 0x1A8, -1, source, 1, 1.0f);
    uiSpriteInitializeState(&menu->secondarySprites[1], 8, 0x1A9, -1, source, 1, 1.0f);
}
}
