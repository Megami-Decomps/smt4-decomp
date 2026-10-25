/* NON_MATCHING: paramsInit's stack-argument constant 48 uses r0 instead of r2; its third table relocates as DAT_004028f0 + 0x54 instead of DAT_00402944. */
/* Creates the Gauntlet app menu: work area, processes, sprites and its resource files. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {

void *asdMemAlloc(s32 heap, s32 alignment, s32 option, u32 size, s32 fromFront);
void memClear(void *memory, u32 size);
u32 asdProcessCreateSimple(const char *name, s32 group, s32 startDelay, s32 endDelay, u32 (*update)(),
                           void (*onEnd)(), u32 work);
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 argument, void (*update)(), void (*draw)(),
                   void *work, u32 parent);
s32 gameFlagIsSet(u32 flag);
void FUN_00248738(GauntletAppMenuWork *menu, s32 mode);
s32 fileSlotLoad(s32 id);
u32 dataTableGet(u32 table, u32 index);
const void *dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
void drawParameterBlockClear(u8 *block);
s32 paramsInit(u8 *block, const u8 *a, s32 aSize, const u8 *b, s32 bSize, const u8 *c, s32 cSize, const u8 *d,
               s32 dSize, const u8 *e, s32 eSize);
void FUN_002bd954(GauntletSprite *sprite, s32 group, s32 id, u8 *params, f32 scale, s32 layer);
void timerStart(GauntletSprite *sprite, s32 animation, s32 flags);
void spriteStartAnimationByIndex(GauntletSprite *sprite, s32 mode);
void spriteSetLayer(GauntletSprite *sprite, u16 mode);
u32 asdLoadFileSyncDefault(const char *path);
u32 FUN_00297060(u32 data, u32 archive);
u32 FUN_003291dc();
void gauntletAppMenuDestroy(void);
void gauntletAppMenuExit(void);

extern GauntletAppMenuWork *g_gauntletAppMenu;
extern const char DAT_00402a08[];

/* The menu's draw parameter tables, consecutive in the rodata. */
struct GauntletParamTables {
    u8 first[0x24];
    u8 second[0x30];
    u8 third[0xC4];
};
extern const GauntletParamTables DAT_004028f0;

u32 FUN_002e24c8(void)
{
    if (g_gauntletAppMenu == NULL) {
        asdDebugTrace(DAT_00402a08, 1592);
        g_gauntletAppMenu = (GauntletAppMenuWork *)asdMemAlloc(0x100, 0x100, 0, 0x534, 1);
    }
    GauntletAppMenuWork *menu = g_gauntletAppMenu;
    memClear(menu, 0x534);
    menu->task = asdProcessCreateSimple("GauntletApp CALC", 1, 0, 0, FUN_003291dc, gauntletAppMenuDestroy, 0);
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
    u32 table = dataTableGet(13, 0);
    menu->list.table = dataTableGetEntries();
    menu->list.tableCount = dataTableGetCount(table);
    drawParameterBlockClear(menu->list.params);
    paramsInit(menu->list.params, DAT_004028f0.first, 0x24, DAT_004028f0.second, 0x30, NULL, 0, NULL, 0,
               DAT_004028f0.third, 0xC4);
    FUN_002bd954(&menu->list.sprites[0], 29, 0, menu->list.params, 1.0f, 201);
    timerStart(&menu->list.sprites[0], 0, 0);
    FUN_002bd954(&menu->list.sprites[1], 29, 0, menu->list.params, 1.0f, 201);
    spriteStartAnimationByIndex(&menu->list.sprites[1], 0);
    FUN_002bd954(&menu->list.sprites[2], 29, 0, menu->list.params, 1.0f, 201);
    timerStart(&menu->list.sprites[2], 2, 0);
    FUN_002bd954(&menu->list.sprites[3], 29, 0x59F, menu->list.params, 1.0f, 181);
    spriteSetLayer(&menu->list.sprites[3], 2);
    spriteStartAnimationByIndex(&menu->list.sprites[3], 1);
    menu->heapA = (void *)asdLoadFileSyncDefault("camp/gauntletApp.mbm");
    menu->heapB = (void *)asdLoadFileSyncDefault("camp/gauntletApp.bf");
    menu->handle = FUN_00297060((u32)menu->heapB, (u32)menu->heapA);
    return menu->task;
}

}
