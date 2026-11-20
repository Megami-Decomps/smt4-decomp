/* Creates the Gauntlet app menu: work area, process and draw task, unlock flags, sprites and script data. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"
#include "script/scrScriptProcess.h"

typedef void (*GauntletTaskFunc)(void);

struct GauntletParams;

extern "C" {

extern const char DAT_0052cce4[]; /* the source file name of the debug hook */
extern GauntletAppMenuWork *g_gauntletAppMenu;

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 mode, u32 size, u32 tracked);
void sysMemClear(void *buffer, u32 bytes);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, GauntletTaskFunc draw, GauntletTaskFunc destroy,
                   void *work, u32 parent);
s32 gameFlagIsSet(u32 flag);
void gauntletAppMenuSetMode(GauntletAppMenuWork *menu, s32 mode);
u32 dataTableGetCount(void *section);
void paramsClearPacket(void *params);

void uiSpriteStateInitFromSource(GauntletSprite *sprite, s32 group, s32 image, void *params, s32 flags, f32 scale);
void recordSetSecondaryValue(GauntletSprite *sprite, u16 value);
void uiSpriteSetKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void uiSpriteSetImageKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void uiSpriteSelectAnim(GauntletSprite *sprite, s32 anim);
void *asdLoadFileSyncDefault(const char *path);
void gauntletAppMenuUpdate(void);
void gauntletAppMenuDraw(void);
void gauntletAppMenuDestroy(void);

/* A fade key of the menu's draw parameters: the value moves from `from` to `to` over `frames`. */
struct GauntletFadeKey {
    f32 from;
    f32 to;
    s32 frames;
};

/* The menu's draw parameter tables for paramsInit; the original file defined them statically. */
static const s32 sGauntletParamsFirst[15] = {
    320, 0, 8, 0, 0xFEC0, 4, 300, 0xFFC4, 0x10028, 30, 0, 5, 0, 0xFFE2, 3,
};
static const GauntletFadeKey sGauntletParamsSecond[8] = {
    { 1.0f, 0.5f, 20 }, { 0.5f, 1.0f, 40 }, { 0.0f, 1.0f, 30 }, { 1.0f, 0.0f, 30 },
    { 0.0f, 1.0f, 5 }, { 1.0f, 0.0f, 25 }, { 0.0f, 1.0f, 5 }, { 1.0f, 0.0f, 3 },
};
static const s32 sGauntletParamsThird[77] = {
    -3, 0, -3, 0, 0, -3, 0,
    -3, 0, -3, 1, 0, -3, 0,
    -3, 0, -3, -2, 0, -3, 0,
    -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 4, 0, 0, 0,
    -3, 0, -3, 5, 0, 1, 0,
    -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 2, 0, -3, 0,
    -3, 0, -3, 3, 0, -3, 0,
    -2, 0, -3, -2, 0, -3, 0,
    -1, 0, -1, -1, 0, -1, 0,
};

u32 gauntletAppMenuCreate(void)
{
    GauntletAppMenuWork *menu;

    if (g_gauntletAppMenu == NULL) {
        asdDebugTrace(DAT_0052cce4, 1954);
        g_gauntletAppMenu = (GauntletAppMenuWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x538, 1);
    }
    menu = g_gauntletAppMenu;
    sysMemClear(menu, 0x538);
    menu->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("GauntletApp CALC"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(gauntletAppMenuUpdate), reinterpret_cast<AsdProcFunc>(gauntletAppMenuDestroy), NULL);
    menu->list.drawTask = taskCreateDraw("GauntletApp DDRAW", 234, 0, 0, gauntletAppMenuDraw, NULL, NULL, menu->task);
    if (gameFlagIsSet(0x520)) {
        menu->list.forceFirst = 1;
    }
    if (gameFlagIsSet(0x521)) {
        menu->list.forceSecond = 1;
    }
    if (gameFlagIsSet(0x526)) {
        menu->list.forceMiddle = 1;
    }
    if (gameFlagIsSet(0x527)) {
        menu->list.forceThird = 1;
    }
    gauntletAppMenuSetMode(menu, 0);
    loadSlotEnsureLoaded(0xd);
    {
        void *section = dataTableGet(0xd, 0);

        menu->list.table = dataTableGetEntries(section);
        menu->list.tableCount = dataTableGetCount(section);
    }
    paramsClearPacket(menu->list.params);
    paramsInit(reinterpret_cast<UiResourceParameters *>(menu->list.params), sGauntletParamsFirst, sizeof(sGauntletParamsFirst),
               sGauntletParamsSecond, sizeof(sGauntletParamsSecond), NULL, 0, NULL, 0,
               sGauntletParamsThird, sizeof(sGauntletParamsThird));
    uiSpriteStateInitFromSource(&menu->list.sprites[0], 20, 0, menu->list.params, 201, 1.0f);
    uiSpriteSetKeyframe(&menu->list.sprites[0], 3, 0);
    uiSpriteSetImageKeyframe(&menu->list.sprites[0], 6, 0);
    uiSpriteStateInitFromSource(&menu->list.sprites[1], 20, 0, menu->list.params, 201, 1.0f);
    uiSpriteSelectAnim(&menu->list.sprites[1], 0);
    uiSpriteStateInitFromSource(&menu->list.sprites[2], 20, 0, menu->list.params, 201, 1.0f);
    uiSpriteSelectAnim(&menu->list.sprites[2], 2);
    uiSpriteStateInitFromSource(&menu->list.sprites[3], 20, 0x59f, menu->list.params, 181, 1.0f);
    recordSetSecondaryValue(&menu->list.sprites[3], 2);
    uiSpriteSelectAnim(&menu->list.sprites[3], 1);
    menu->heapA = asdLoadFileSyncDefault("camp/gauntletApp.mbm");
    menu->heapB = asdLoadFileSyncDefault("camp/gauntletApp.bf");
    menu->handle = scrScriptProcessCreate(menu->heapB, menu->heapA);
    return menu->task;
}

} /* extern "C" */
