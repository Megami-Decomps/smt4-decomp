/* Creates the Gauntlet app menu: work area, processes, sprites and its resource files. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleAnalyze.h"
#include "gamedata/DataTable.h"
#include "script/scrScriptProcess.h"

extern "C" {

void memClear(void *memory, u32 size);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 argument, void (*update)(), void (*draw)(),
                   void *work, u32 parent);
s32 gameFlagIsSet(u32 flag);
void FUN_00248738(GauntletAppMenuWork *menu, s32 mode);
s32 fileSlotLoad(s32 id);
void drawParameterBlockClear(u8 *block);

void uiSpriteStateInitFromSource(GauntletSprite *sprite, s32 group, s32 id, u8 *params, f32 scale, s32 layer);
void timerStart(GauntletSprite *sprite, s32 animation, s32 flags);
void spriteStartAnimationByIndex(GauntletSprite *sprite, s32 mode);
void spriteSetLayer(GauntletSprite *sprite, u16 mode);
u32 gauntletAppMenuUpdate();
void gauntletAppMenuDestroy(void);
void gauntletAppMenuExit(void);

extern GauntletAppMenuWork *g_gauntletAppMenu;
extern const char DAT_00402a08[];

/* A fade key of the menu's draw parameters: the value moves from `from` to `to` over `frames`. */
struct GauntletFadeKey {
    f32 from;
    f32 to;
    s32 frames;
};

/* The menu's draw parameter tables for paramsInit; the original file defined them statically. */
static const s32 sGauntletParamsFirst[9] = { 320, 0, 8, 0, 0xFEC0, 4, 300, 0xFFC4, 0x10028 };
static const GauntletFadeKey sGauntletParamsSecond[4] = {
    { 1.0f, 0.5f, 20 }, { 0.5f, 1.0f, 40 }, { 0.0f, 1.0f, 5 }, { 1.0f, 0.0f, 25 },
};
static const s32 sGauntletParamsThird[49] = {
    -3, 0, -3, 0, 0, -3, 0,
    -3, 0, -3, 1, 0, -3, 0,
    -3, 0, -3, -2, 0, -3, 0,
    -1, 0, -1, -1, 0, -1, 0,
    -3, 0, -3, 2, 0, 0, 0,
    -3, 0, -3, 3, 0, 1, 0,
    -1, 0, -1, -1, 0, -1, 0,
};

u32 FUN_002e24c8(void)
{
    if (g_gauntletAppMenu == NULL) {
        asdDebugTrace(DAT_00402a08, 1592);
        g_gauntletAppMenu = (GauntletAppMenuWork *)asdMemAlloc(0x100, 0x100, 0, 0x534, 1);
    }
    GauntletAppMenuWork *menu = g_gauntletAppMenu;
    memClear(menu, 0x534);
    menu->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("GauntletApp CALC"), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(gauntletAppMenuUpdate), reinterpret_cast<AsdProcFunc>(gauntletAppMenuDestroy), 0);
    menu->list.drawTask = taskCreateDraw("GauntletApp DDRAW", 230, 0, 0, gauntletAppMenuExit, NULL, NULL, menu->task);
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
    FUN_00248738(menu, 0);
    fileSlotLoad(13);
    void *table = dataTableGet(13, 0);
    menu->list.table = dataTableGetEntries(table);
    menu->list.tableCount = dataTableGetCount(table);
    drawParameterBlockClear(menu->list.params);
    paramsInit(reinterpret_cast<UiResourceParameters *>(menu->list.params), sGauntletParamsFirst, sizeof(sGauntletParamsFirst),
               sGauntletParamsSecond, sizeof(sGauntletParamsSecond), NULL, 0, NULL, 0,
               sGauntletParamsThird, sizeof(sGauntletParamsThird));
    uiSpriteStateInitFromSource(&menu->list.sprites[0], 29, 0, menu->list.params, 1.0f, 201);
    timerStart(&menu->list.sprites[0], 0, 0);
    uiSpriteStateInitFromSource(&menu->list.sprites[1], 29, 0, menu->list.params, 1.0f, 201);
    spriteStartAnimationByIndex(&menu->list.sprites[1], 0);
    uiSpriteStateInitFromSource(&menu->list.sprites[2], 29, 0, menu->list.params, 1.0f, 201);
    timerStart(&menu->list.sprites[2], 2, 0);
    uiSpriteStateInitFromSource(&menu->list.sprites[3], 29, 0x59F, menu->list.params, 1.0f, 181);
    spriteSetLayer(&menu->list.sprites[3], 2);
    spriteStartAnimationByIndex(&menu->list.sprites[3], 1);
    menu->heapA = (void *)asdLoadFileSyncDefault("camp/gauntletApp.mbm");
    menu->heapB = (void *)asdLoadFileSyncDefault("camp/gauntletApp.bf");
    menu->handle = scrScriptProcessCreate(menu->heapB, menu->heapA);
    return menu->task;
}

}
