/* NON_MATCHING: retail anchors the three adjacent parameter tables on DAT_0052cb88 with chained subtractions (sub r3,r1,#96; sub r1,r3,#60) and keeps the sprite[3] pointer in r0 until after the call; armcc folds the offsets here */
/* Creates the Gauntlet app menu: work area, process and draw task, unlock flags, sprites and script data. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "gamedata/DataTable.h"
#include "gamedata/DataTable.h"

typedef void (*GauntletTaskFunc)(void);

struct GauntletParams;

extern "C" {

extern const char DAT_0052cce4[]; /* the source file name of the debug hook */
extern const u8 DAT_0052cb88[];   /* last of three adjacent parameter tables */
extern GauntletAppMenuWork *g_gauntletAppMenu;

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 mode, u32 size, u32 tracked);
void sysMemClear(void *buffer, u32 bytes);
u32 taskCreateDraw(const char *name, s32 priority, s32 a, s32 b, GauntletTaskFunc draw, GauntletTaskFunc destroy,
                   void *work, u32 parent);
s32 gameFlagIsSet(u32 flag);
void FUN_003dc0c0(GauntletAppMenuWork *menu, s32 mode);
void loadSlotEnsureLoaded(u32 slot);
u32 dataTableGetCount(void *section);
void paramsClearPacket(void *params);

void FUN_0014e188(GauntletSprite *sprite, s32 group, s32 image, void *params, s32 flags, f32 scale);
void recordSetSecondaryValue(GauntletSprite *sprite, u16 value);
void uiSpriteSetKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void uiSpriteSetImageKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void uiSpriteSelectAnim(GauntletSprite *sprite, s32 anim);
void *asdLoadFileSyncDefault(const char *path);
u32 FUN_00275bc8(void *first, void *second);
void FUN_003ce598(void);
void gauntletAppMenuExit(void);
void gauntletAppMenuDestroy(void);

u32 FUN_0035c810(void)
{
    GauntletAppMenuWork *menu;

    if (g_gauntletAppMenu == NULL) {
        asdDebugTrace(DAT_0052cce4, 1954);
        g_gauntletAppMenu = (GauntletAppMenuWork *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x538, 1);
    }
    menu = g_gauntletAppMenu;
    sysMemClear(menu, 0x538);
    menu->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>("GauntletApp CALC"), 3, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_003ce598), reinterpret_cast<AsdProcFunc>(gauntletAppMenuDestroy), NULL);
    menu->list.drawTask = taskCreateDraw("GauntletApp DDRAW", 234, 0, 0, gauntletAppMenuExit, NULL, NULL, menu->task);
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
    FUN_003dc0c0(menu, 0);
    loadSlotEnsureLoaded(0xd);
    {
        void *section = dataTableGet(0xd, 0);

        menu->list.table = dataTableGetEntries(section);
        menu->list.tableCount = dataTableGetCount(section);
    }
    paramsClearPacket(menu->list.params);
    paramsInit(reinterpret_cast<UiResourceParameters *>(menu->list.params), DAT_0052cb88 - 0x60 - 0x3c, 0x3c, DAT_0052cb88 - 0x60, 0x60, 0, 0, 0, 0, DAT_0052cb88, 0x134);
    FUN_0014e188(&menu->list.sprites[0], 20, 0, menu->list.params, 201, 1.0f);
    uiSpriteSetKeyframe(&menu->list.sprites[0], 3, 0);
    uiSpriteSetImageKeyframe(&menu->list.sprites[0], 6, 0);
    FUN_0014e188(&menu->list.sprites[1], 20, 0, menu->list.params, 201, 1.0f);
    uiSpriteSelectAnim(&menu->list.sprites[1], 0);
    FUN_0014e188(&menu->list.sprites[2], 20, 0, menu->list.params, 201, 1.0f);
    uiSpriteSelectAnim(&menu->list.sprites[2], 2);
    GauntletSprite *sprite = &menu->list.sprites[3];

    FUN_0014e188(sprite, 20, 0x59f, menu->list.params, 181, 1.0f);
    recordSetSecondaryValue(sprite, 2);
    uiSpriteSelectAnim(sprite, 1);
    menu->heapA = asdLoadFileSyncDefault("camp/gauntletApp.mbm");
    menu->heapB = asdLoadFileSyncDefault("camp/gauntletApp.bf");
    menu->handle = FUN_00275bc8(menu->heapB, menu->heapA);
    return menu->task;
}

} /* extern "C" */
