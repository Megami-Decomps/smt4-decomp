#include "camp/GauntletAppMenu/GauntletAppMenu.h"

extern "C" {
void ifTouchRegionRemove(void);
void uiSpriteSelectAnim(GauntletSprite *sprite, s32 anim);
void uiSpriteSetKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void uiSpriteSetImageKeyframe(GauntletSprite *sprite, s32 keyframe, s32 flags);
void FUN_00202400(void);
void gridNavigationConfigure(void *controller, u32 count, u32 visibleRows, u32 enabled, u32 wrap, u32 reset);
void FUN_00212724(void);
s32 listCursorGetRowIfUnblocked(void *controller);
void uiStoreTextureEntryCenter(GauntletSprite *sprite, s32 owner, s32 id);
void gauntletAppBuildAvailableEntries(GauntletAppMenuWork *menu);
s32 shopGetEntryAvailability(u32 id);
s32 gameDataFlagTestBit(u32 id);

/* Lists the apps the player can still buy: the forced one, or every app. */
static __inline void gauntletBuildBuyableEntries(GauntletAppMenuWork *menu)
{
    menu->list.count = 0;
    if (menu->list.forceFirst) {
        u32 id = 0x2E;
        if (!gameDataFlagTestBit(id) && !shopGetEntryAvailability(id)) {
            menu->list.entries[menu->list.count] = id;
            menu->list.count++;
        }
    } else if (menu->list.forceSecond) {
        u32 id = 0x18;
        if (!gameDataFlagTestBit(id) && !shopGetEntryAvailability(id)) {
            menu->list.entries[menu->list.count] = id;
            menu->list.count++;
        }
    } else {
        for (u32 id = 1; id < 0x8D; id++) {
            if (!gameDataFlagTestBit(id) && !shopGetEntryAvailability(id)) {
                menu->list.entries[menu->list.count] = id;
                menu->list.count++;
            }
        }
    }
    gridNavigationConfigure(menu->list.controller, menu->list.count, 10, 1, 1, 1);
}

/* Appends every app the player owns to the list. */
static __inline void gauntletAddOwnedEntries(GauntletAppMenuWork *menu)
{
    for (u32 id = 1; id < 0x8D; id++) {
        if (gameDataFlagTestBit(id)) {
            menu->list.entries[menu->list.count] = id;
            menu->list.count++;
        }
    }
}

/* Switches the Gauntlet app menu to `mode` and sets up what that mode shows; returns 0 when the mode was skipped. */
u32 gauntletAppMenuSetMode(GauntletAppMenuWork *menu, u32 mode)
{
    switch (mode) {
    case 0:
        uiSpriteSetKeyframe(&menu->list.sprites[0], 3, 0);
        uiSpriteSetImageKeyframe(&menu->list.sprites[0], 6, 0);
        FUN_00202400();
        gauntletAppBuildAvailableEntries(menu);
        break;
    case 1:
        menu->list.count = 0;
        gauntletAddOwnedEntries(menu);
        gridNavigationConfigure(menu->list.controller, menu->list.count, 10, 1, 1, 1);
        break;
    case 2:
        gauntletBuildBuyableEntries(menu);
        if (menu->list.count == 0) {
            gauntletAppMenuSetMode(menu, menu->list.mode);
            return 0;
        }
        break;
    case 5:
        uiSpriteSelectAnim(&menu->list.sprites[3], 1);
        uiStoreTextureEntryCenter(&menu->list.sprites[3], 0x14, listCursorGetRowIfUnblocked(menu->list.controller) + 0x40E);
        menu->list.sprites[3].unk18 = 0xA0;
        break;
    case 7:
        uiSpriteSetKeyframe(&menu->list.sprites[0], 4, 0);
        uiSpriteSetImageKeyframe(&menu->list.sprites[0], 7, 0);
        FUN_00212724();
        for (s32 i = 0; i < menu->touch.touchRegionCount; i++) {
            ifTouchRegionRemove();
        }
        menu->touch.touchRegionCount = 0;
        break;
    }
    menu->list.mode = mode;
    return 1;
}
}
