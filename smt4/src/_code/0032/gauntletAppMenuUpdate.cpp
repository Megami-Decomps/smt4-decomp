/* NON_MATCHING: 28 lines, all scratch registers. Retail adds the three scroll-bar regions to the count as
 * `add r0, r1, #3` (the build: `add r1, r1, #3`) and, at each of the three places an app is appended to the list,
 * loads the count into r1 for the store and increments it from r0 into r1 (the build uses r0 throughout).
 * Apocalypse's twin is FUN_003ce598. */
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "ui/UiSpriteApi.h"
#include "ui/GridNavigation.h"
#include "gamedata/GameDataAccess_Shard0031.h"
#include "gamedata/DataTableAccess_Smt4.h"
#include "gfx/TrackedRecord.h"
#include "script/scrScriptProcess.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match3_NameFormState.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "quest_center/qcMain.h"
#include "battle/BattleCommandMenu.h"
#include "sys/RuntimeObjects.h"
#include "code/Code0024_Smt4.h"
#include "code/Code0029_Smt4.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define GAUNTLET_TEXTURES 29
#define GAUNTLET_SE_DECIDE 0x100016D
#define GAUNTLET_SE_CANCEL 0x100016E

extern "C" {

extern GauntletAppMenuWork *g_gauntletAppMenu;

u32 FUN_00248738(GauntletAppMenuWork *menu, u32 mode);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
s32 ifTouchRegionAddRequested(u32 file, s32 index);
u32 padIsButtonPressed(u32 button);
u32 padIsButtonRepeat(u32 button);
s32 FUN_002c1658(s32 button, s32 mode);
u8 FUN_0029efd8(void *list, s32 notify);
u32 resourceRunOperationIfUnblocked(const void *list);
u32 appTryPurchase(u32 id, s32 ignoreRequirements, s32 checkOnly);
u8 appCheckPurchaseRequirements(u32 id);
u16 dataTable0BGetValueById(u32 id);
void gridNavigationConfigure(void *list, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
u32 uiScrollHandleActionsOrTouch(void *list, const TextureTableEntryIV *sprite, const s16 *rows, s32 thumb,
                                 s32 previous, s32 next, s8 *decide, s32 alternateAxis, s32 notify);
void sortMenuCreate(u32 owner, u8 option);
void useCounterStart(void);
void useCounterRelease(void);
u8 sys43e188GetState(void);
u32 messageMainGetChoiceResult(void);
void gauntletAppSortMenuEntries(void);
void scrollOwnerSetValue(void *list, s32 value);
void FUN_002dfefc(s32 suppressNotification);
void FUN_0029ede8(s32 index, u32 first, u32 second, u32 third); // declcheck: local (bible/bibleDevil.h redeclares asdMemoryAlloc against AsdSoundSystem.h)

/* One of the menu's sprites (0: the frame, 3: the purchase mark). */
static __inline UiSpriteState *gauntletSprite(GauntletAppMenuWork *menu, s32 index)
{
    return reinterpret_cast<UiSpriteState *>(&menu->list.sprites[index]);
}

/* The app of the row the cursor is on. */
static __inline u32 gauntletCursorEntry(GauntletAppMenuWork *menu)
{
    return menu->list.entries[resourceRunOperationIfUnblocked(menu->list.controller) +
                              listCursorGetRowIfUnblocked(menu->list.controller)];
}

/* Whether the menu was opened for one forced choice. */
static __inline bool gauntletMenuIsForced(GauntletAppMenuWork *menu)
{
    if (menu->list.forceFirst == 0 && menu->list.forceSecond == 0 && menu->list.forceMiddle == 0 &&
        menu->list.forceThird == 0) {
        return false;
    }
    return true;
}

/* The top screen: buy or browse; -1 when the menu is left. */
static s32 gauntletUpdateTop(GauntletAppMenuWork *menu)
{
    if (padIsButtonPressed(0)) {
        switch (menu->list.selection) {
        case 0:
            if (FUN_00248738(menu, 2)) {
                eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
            }
            break;
        case 1:
            if (FUN_00248738(menu, 3)) {
                eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
            }
            break;
        }
    } else if (padIsButtonPressed(1)) {
        eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        return -1;
    } else if (padIsButtonRepeat(5) || padIsButtonRepeat(14)) {
        menu->list.selection--;
        if (menu->list.selection < 0) {
            menu->list.selection = 1;
        }
    } else if (padIsButtonRepeat(6) || padIsButtonRepeat(15)) {
        menu->list.selection++;
        if (menu->list.selection >= 2) {
            menu->list.selection = 0;
        }
    } else if (uiPointerHitsRect(160, 48, 200, 32, 2)) {
        s32 row = listCursorGetRowIfUnblocked(menu->list.controller) - 1;
        if (row < 0) {
            row = 0;
        }
        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(menu->list.controller), row);
        FUN_0029efd8(menu->list.controller, 1);
    } else if (uiPointerHitsRect(160, 198, 200, 32, 2)) {
        s32 row = listCursorGetRowIfUnblocked(menu->list.controller) + 1;
        if (row >= static_cast<s32>(FUN_0029ee54(menu->list.controller))) {
            row--;
        }
        scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(menu->list.controller), row);
        FUN_0029efd8(menu->list.controller, 1);
    }
    return 0;
}

/* The category screen: the cursor moves, A opens the apps the category can still buy, B goes back. */
static s32 gauntletUpdateCategory(GauntletAppMenuWork *menu)
{
    if (FUN_0029efd8(menu->list.controller, 1)) {
        FUN_00242000(reinterpret_cast<MenuScreen *>(menu));
    } else if (padIsButtonPressed(0)) {
        if (appTryPurchase(gauntletCursorEntry(menu), 0, 0)) {
            eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
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
            if (menu->list.count == 0) {
                FUN_00248738(menu, 1);
            }
        }
    } else if (padIsButtonPressed(1)) {
        if (FUN_00248738(menu, 1)) {
            eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        }
    }
    return 0;
}

/* The app list: the cursor moves, A asks to buy the app, B leaves and X opens the sort menu. */
static s32 gauntletUpdateList(GauntletAppMenuWork *menu)
{
    s8 decide = 0;
    if (uiScrollHandleActionsOrTouch(menu->list.controller, asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x575),
                                     menu->touch.regions, menu->touch.regions[13], menu->touch.regions[11],
                                     menu->touch.regions[12], &decide, 0, 1) ||
        FUN_0029efd8(menu->list.controller, 1)) {
        FUN_00242000(reinterpret_cast<MenuScreen *>(menu));
    } else if (FUN_002c1658(0, 1) || decide) {
        u32 id = gauntletCursorEntry(menu);
        if (appTryPurchase(id, 0, 1)) {
            textEncodeFontSlot(0, reinterpret_cast<const u8 *>(dataTable0BFindById(id)));
            FUN_0029ede8(24, dataTable0BGetValueById(id), 0xFFFFFFFF, 0);
            scrScriptProcessStartEntry(menu->handle, 0);
            FUN_00248738(menu, 4);
            eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
        } else {
            eventQueueAddUnique(GAUNTLET_SE_CANCEL);
        }
    } else if (FUN_002c1658(1, 1)) {
        if (!gauntletMenuIsForced(menu)) {
            FUN_00248738(menu, 7);
            eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        }
    } else if (FUN_002c1658(9, 1)) {
        eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
        sortMenuCreate(13, 0);
        FUN_0029e328(0x21);
        FUN_0029e328(0x15);
        FUN_0029e328(0x16);
        FUN_0029e328(3);
        useCounterStart();
        FUN_00248738(menu, 6);
    }
    return 0;
}

/* The Gauntlet app menu's update; -1 once the menu has closed. */
s32 gauntletAppMenuUpdate(void)
{
    GauntletAppMenuWork *menu = g_gauntletAppMenu;

    uiSpriteAdvanceAnimation(gauntletSprite(menu, 1));
    uiSpriteAdvanceAnimation(gauntletSprite(menu, 2));
    switch (menu->list.mode) {
    case 0:
        /* Sliding in: then the touch regions of the rows and of the scroll bar are registered. */
        if (uiSlidingSpriteAdvance(reinterpret_cast<UiSpriteState *>(&menu->list.sprites[0]), 0)) {
            buttonHelpSetPreset(25);
            FUN_00242000(reinterpret_cast<MenuScreen *>(menu));
            FUN_00248738(menu, 3);
            for (s32 i = 0; i < 10; i++) {
                if (i >= static_cast<s32>(FUN_0029ee54(menu->list.controller))) {
                    break;
                }
                menu->touch.regions[i] = ifTouchRegionAddRequested(GAUNTLET_TEXTURES, i + 0x40E);
                menu->touch.touchRegionCount++;
            }
            menu->touch.regions[11] = ifTouchRegionAddRequested(GAUNTLET_TEXTURES, 0x573);
            menu->touch.regions[12] = ifTouchRegionAddRequested(GAUNTLET_TEXTURES, 0x574);
            menu->touch.regions[13] = ifTouchRegionAddRequested(GAUNTLET_TEXTURES, 0x575);
            menu->touch.touchRegionCount += 3;
        }
        break;
    case 1:
        return gauntletUpdateTop(menu);
    case 2:
        return gauntletUpdateCategory(menu);
    case 3:
        return gauntletUpdateList(menu);
    case 4:
        /* The purchase question. */
        if (scrRunOpcodesStub(menu->handle) == 2 && sys43e188GetState()) {
            if (messageMainGetChoiceResult() == 0) {
                appTryPurchase(gauntletCursorEntry(menu), 0, 0);
                eventQueueAddUnique(0x100025C);
                FUN_00248738(menu, 5);
            } else {
                FUN_00248738(menu, 3);
            }
            buttonHelpSetPreset(25);
        }
        break;
    case 5:
        /* The purchase animation; a forced choice closes the menu afterwards. */
        if (uiSpriteAdvanceAnimation(gauntletSprite(menu, 3))) {
            if (gauntletMenuIsForced(menu)) {
                FUN_00248738(menu, 7);
                eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
            } else {
                s32 top = resourceRunOperationIfUnblocked(menu->list.controller);
                u32 row = flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(menu->list.controller));
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
                    for (u32 id = 1; id < 0x8D; ++id) {
                        if (appCostRecordFindById(id) != NULL && (flagBitIsSet(id) || appCheckPurchaseRequirements(id) != 2)) {
                            menu->list.entries[menu->list.count] = id;
                            ++menu->list.count;
                        }
                    }
                }
                gridNavigationConfigure(menu->list.controller, menu->list.count, 10, 1, 1, 1);
                gauntletAppSortMenuEntries();
                scrollOwnerSetValue(menu->list.controller, top);
                flaggedEntrySetValueA(reinterpret_cast<FlaggedEntry *>(menu->list.controller), row);
                FUN_00242000(reinterpret_cast<MenuScreen *>(menu));
                FUN_00248738(menu, 3);
            }
        }
        break;
    case 6:
        /* The sort menu. */
        if (useCounterIsFinished()) {
            useCounterRelease();
            buttonHelpSetPreset(25);
            FUN_00242000(reinterpret_cast<MenuScreen *>(menu));
            FUN_00248738(menu, 3);
        } else {
            gauntletAppSortMenuEntries();
        }
        break;
    case 7:
        /* Sliding out. */
        if (uiSpriteAdvanceAnimation(gauntletSprite(menu, 0))) {
            FUN_002dfefc(1);
            return -1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
