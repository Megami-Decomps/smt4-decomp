/* NON_MATCHING: 121 lines (31 with the shifts blanked): the port of Apocalypse's FUN_003dc0c0 (IDENTICAL there)
 * with IV's sprite calls and its inlined list of the apps the menu shows. Mode 0 still differs: retail stores the
 * forced app through r1 with predicated moves (`movne r1, #46; strne r1`), this build through r0 behind a branch. */
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "ui/UiTexturePlacement.h"
#include "shard/W6_W6Match3_NameFormState.h"
#include "battle/BattleCommandMenu.h"
#include "code/Code0029_VariantB.h"

extern "C" {
void gridNavigationConfigure(void *list, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
void gauntletAppSortMenuEntries(void);
u8 appCheckPurchaseRequirements(u32 id);

/* One of the menu's sprites (0: the frame, 3: the purchase mark). */
static __inline UiSpriteState *gauntletSprite(GauntletAppMenuWork *menu, s32 index)
{
    return reinterpret_cast<UiSpriteState *>(&menu->list.sprites[index]);
}

/* Lists the apps the player can still buy: the forced one, or every app. */
static __inline void gauntletBuildBuyableEntries(GauntletAppMenuWork *menu)
{
    menu->list.count = 0;
    if (menu->list.forceFirst) {
        u32 id = 0x2E;
        if (!flagBitIsSet(id) && !appCheckPurchaseRequirements(id)) {
            menu->list.entries[menu->list.count] = id;
            menu->list.count++;
        }
    } else if (menu->list.forceSecond) {
        u32 id = 0x18;
        if (!flagBitIsSet(id) && !appCheckPurchaseRequirements(id)) {
            menu->list.entries[menu->list.count] = id;
            menu->list.count++;
        }
    } else {
        for (u32 id = 1; id < 0x8D; id++) {
            if (!flagBitIsSet(id) && !appCheckPurchaseRequirements(id)) {
                menu->list.entries[menu->list.count] = id;
                menu->list.count++;
            }
        }
    }
    gridNavigationConfigure(menu->list.controller, menu->list.count, 10, 1, 1, 1);
}

/* Appends every app the menu can show (on sale, and owned or not yet ruled out) to the list. */
static __inline void gauntletAddAvailableEntries(GauntletAppMenuWork *menu)
{
    for (u32 id = 1; id < 0x8D; id++) {
        if (appCostRecordFindById(id) != NULL && (flagBitIsSet(id) || appCheckPurchaseRequirements(id) != 2)) {
            menu->list.entries[menu->list.count] = id;
            menu->list.count++;
        }
    }
}

/* Appends every app the player owns to the list. */
static __inline void gauntletAddOwnedEntries(GauntletAppMenuWork *menu)
{
    for (u32 id = 1; id < 0x8D; id++) {
        if (flagBitIsSet(id)) {
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
        uiSpriteSetKeyframe(gauntletSprite(menu, 0), 0, 0);
        menu->list.count = 0;
        if (menu->list.forceFirst) {
            menu->list.entries[0] = 0x2E;
            menu->list.count = 1;
        } else if (menu->list.forceSecond) {
            menu->list.entries[0] = 0x18;
            menu->list.count = 1;
        } else if (menu->list.forceThird) {
            menu->list.entries[0] = 0x76;
            menu->list.count = 1;
        } else {
            gauntletAddAvailableEntries(menu);
        }
        gridNavigationConfigure(menu->list.controller, menu->list.count, 10, 1, 1, 1);
        gauntletAppSortMenuEntries();
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
        spriteStartAnimationByIndex(gauntletSprite(menu, 3), 1);
        uiStoreTextureEntryCenter(reinterpret_cast<PointDeltaWork *>(&menu->list.sprites[3]), 0x1D,
                                  listCursorGetRowIfUnblocked(menu->list.controller) + 0x40E);
        menu->list.sprites[3].unk18 = 0xA0;
        break;
    case 7:
        uiSpriteSetKeyframe(gauntletSprite(menu, 0), 1, 0);
        for (s32 i = 0; i < menu->touch.touchRegionCount; i++) {
            ifTouchRegionRemove();
        }
        menu->touch.touchRegionCount = 0;
        break;
    }
    menu->list.mode = mode;
    return 1;
}

} /* extern "C" */
