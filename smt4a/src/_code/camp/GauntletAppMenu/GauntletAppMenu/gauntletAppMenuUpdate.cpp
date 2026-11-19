/* NON_MATCHING: 20 lines. Retail pools 1.0f ahead of g_gauntletAppMenu (the build: after it), adds the three
 * scroll-bar regions to the count as `add r0, r1, #3` (the build: `add r1, r1, #3`) and loads the list count into r1
 * for both entry stores of the category screen (the build: r0), as FUN_003dc0c0's copy of that code also does. */
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/GameFlags.h"
#include "camp/CampMenuEntry.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gamedata/KeyedCatalog.h"
#include "gamedata/GameDataAccess_Shard0031.h"
#include "gfx/TrackedRecord.h"
#include "script/scrScriptProcess.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "shop/ShopItemDescription.h"
#include "quest_center/qcMain.h"
#include "sys/RuntimeObjects.h"
#include "code/Code0021_Smt4a.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code0035.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

#define GAUNTLET_TEXTURES 20
#define GAUNTLET_FLAG_INTRODUCED 0x4B7
#define GAUNTLET_SE_DECIDE 0x100020E
#define GAUNTLET_SE_CANCEL 0x100020F

extern "C" {

extern GauntletAppMenuWorkA *g_gauntletAppMenu;

void sysPlaySe(u32 id);
u32 FUN_003dc0c0(GauntletAppMenuWork *menu, u32 mode);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void campHideNumericBanner(void);
void campResetScreen(void);
s32 FUN_001643b4(u32 file, s32 index);
u32 padButtonIsPressed(u32 button);
s32 padQueryLogicalKey(s32 key, s32 mode);
u8 FUN_00228b04(void *list, s32 notify);
u32 FUN_003e45bc(u32 id, s32 ignoreRequirements, s32 preview);
u8 shopGetEntryAvailability(u32 id);
void gridNavigationConfigure(void *list, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
u32 uiScrollHandleActionsOrTouch(void *list, const TextureTableEntryIV *sprite, const s16 *rows, s32 thumb,
                                 s32 previous, s32 next, s8 *decide, s32 alternateAxis, s32 notify);
u8 gameDataAreaBitTest(u32 bit);
void FUN_003e41f8(u32 id, s32 set);
u32 dataRecordGetValue(u32 id);
void sortMenuAcquire(u32 owner, u8 option);
void useCounterStart(void);
u8 useCounterIsFinished(void);
void useCounterRelease(void);
s32 areaConsumeOneShotFlags(s32 index);
void msgWindowReset(void);
void messageBannerRestartOrClear(void);
void gauntletAppBuildAvailableEntries(GauntletAppMenuWork *menu);
void gauntletAppSortMenuEntries(void);
void scrollOwnerSetValue(void *list, s32 value);
void FUN_00353b00(s32 popupOpen);

/* One of the menu's sprites (0: the frame, 3: the purchase mark). */
static __inline UiSpriteState *gauntletSprite(GauntletAppMenuWork *menu, s32 index)
{
    return reinterpret_cast<UiSpriteState *>(&menu->list.sprites[index]);
}

/* The menu's list cursor, as the cursor functions name it. */
static __inline Object *gauntletList(GauntletAppMenuWork *menu)
{
    return reinterpret_cast<Object *>(menu->list.controller);
}

/* The app of the row the cursor is on. */
static __inline u32 gauntletCursorEntry(GauntletAppMenuWork *menu)
{
    return menu->list.entries[resourceRunOperationIfUnblocked(gauntletList(menu)) +
                              listCursorGetRowIfUnblocked(menu->list.controller)];
}

/* Whether the menu was opened for one forced choice (gauntletAppMenuHasActiveFlags' test). */
static __inline bool gauntletMenuIsForced(GauntletAppMenuWork *menu)
{
    if (menu->list.forceFirst == 0 && menu->list.forceSecond == 0 && menu->list.forceMiddle == 0 &&
        menu->list.forceThird == 0) {
        return false;
    }
    return true;
}

/* Appends an app the player can still buy to the list. */
static void gauntletAddIfBuyable(GauntletAppMenuWork *menu, u32 id)
{
    if (!gameDataFlagTestBit(id) && !shopGetEntryAvailability(id)) {
        menu->list.entries[menu->list.count] = id;
        menu->list.count++;
    }
}

/* The category screen: the cursor moves, A opens the apps the category can still buy, B goes back. */
static s32 gauntletUpdateCategory(GauntletAppMenuWork *menu)
{
    if (FUN_00228b04(menu->list.controller, 1)) {
        FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
    } else if (padButtonIsPressed(0)) {
        if (FUN_003e45bc(gauntletCursorEntry(menu), 0, 0)) {
            eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
            menu->list.count = 0;
            if (menu->list.forceFirst) {
                gauntletAddIfBuyable(menu, 0x2E);
            } else if (menu->list.forceSecond) {
                gauntletAddIfBuyable(menu, 0x18);
            } else {
                for (u32 id = 1; id < 0x8D; id++) {
                    gauntletAddIfBuyable(menu, id);
                }
            }
            gridNavigationConfigure(menu->list.controller, menu->list.count, 10, 1, 1, 1);
            if (menu->list.count == 0) {
                FUN_003dc0c0(menu, 1);
            }
        }
    } else if (padButtonIsPressed(1)) {
        if (FUN_003dc0c0(menu, 1)) {
            eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        }
    }
    return 0;
}

/* The app list: the cursor moves, A asks to buy the app, B leaves, X opens the sort menu and Y clears the
   app's "new" marks. */
static s32 gauntletUpdateList(GauntletAppMenuWorkA *menu)
{
    u32 id = gauntletCursorEntry(menu);
    s8 decide = 0;
    if (uiScrollHandleActionsOrTouch(menu->list.controller, asdTMTexTableEntryAt(GAUNTLET_TEXTURES, 0x575),
                                     menu->touch.regions, menu->touch.regions[13], menu->touch.regions[11],
                                     menu->touch.regions[12], &decide, 0, 1)) {
        FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
        if (menu->idleFrames > 2 && gameDataAreaBitTest(id)) {
            FUN_003e41f8(id, 0);
        }
        menu->idleFrames = 0;
    } else if (FUN_00228b04(menu->list.controller, 1)) {
        FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
        if (menu->idleFrames > 2 && gameDataAreaBitTest(id)) {
            FUN_003e41f8(id, 0);
        }
        menu->idleFrames = 0;
    } else if (padQueryLogicalKey(0, 1) || decide) {
        if (FUN_003e45bc(id, 0, 1)) {
            scrSetStringSlot(0, FUN_00186f54(id));
            FUN_00359974(24, dataRecordGetValue(id), 0xFFFFFFFF, 0);
            scrScriptProcessStartEntry(menu->handle, 0);
            FUN_003dc0c0(menu, 4);
            eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
            if (gameDataAreaBitTest(id)) {
                FUN_003e41f8(id, 0);
            }
        } else {
            eventQueueAddUnique(GAUNTLET_SE_CANCEL);
        }
    } else if (padQueryLogicalKey(1, 1)) {
        if (!gauntletMenuIsForced(menu)) {
            FUN_003dc0c0(menu, 7);
            eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        }
    } else if (padQueryLogicalKey(9, 1)) {
        eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
        sortMenuAcquire(13, 0);
        FUN_0031f208(0x21);
        FUN_0031f208(0x15);
        FUN_0031f208(0x16);
        FUN_0031f208(3);
        useCounterStart();
        FUN_003dc0c0(menu, 6);
    } else if (padQueryLogicalKey(10, 1)) {
        if (areaConsumeOneShotFlags(id)) {
            eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        }
    }
    menu->idleFrames++;
    return 0;
}

/* The top screen: buy or browse; -1 when the menu is left. */
static s32 gauntletUpdateTop(GauntletAppMenuWork *menu)
{
    if (padButtonIsPressed(0)) {
        switch (menu->list.selection) {
        case 0:
            if (FUN_003dc0c0(menu, 2)) {
                eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
            }
            break;
        case 1:
            if (FUN_003dc0c0(menu, 3)) {
                eventQueueAddUniqueIfValid(GAUNTLET_SE_DECIDE);
            }
            break;
        }
    } else if (padButtonIsPressed(1)) {
        eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
        return -1;
    } else if (padButtonRepeat(5) || padButtonRepeat(14)) {
        menu->list.selection--;
        if (menu->list.selection < 0) {
            menu->list.selection = 1;
        }
    } else if (padButtonRepeat(6) || padButtonRepeat(15)) {
        menu->list.selection++;
        if (menu->list.selection >= 2) {
            menu->list.selection = 0;
        }
    } else if (uiPointerHitsRect(160, 48, 200, 32, 2)) {
        s32 row = listCursorGetRowIfUnblocked(menu->list.controller) - 1;
        if (row < 0) {
            row = 0;
        }
        scrollListSetSelectionTracked(reinterpret_cast<ScrollSelection *>(menu->list.controller), row);
        FUN_00228b04(menu->list.controller, 1);
    } else if (uiPointerHitsRect(160, 198, 200, 32, 2)) {
        s32 row = listCursorGetRowIfUnblocked(menu->list.controller) + 1;
        if (row >= objectApplyIfUnblocked(gauntletList(menu))) {
            row--;
        }
        scrollListSetSelectionTracked(reinterpret_cast<ScrollSelection *>(menu->list.controller), row);
        FUN_00228b04(menu->list.controller, 1);
    }
    return 0;
}

/* The Gauntlet app menu's update; -1 once the menu has closed. */
s32 gauntletAppMenuUpdate(void)
{
    GauntletAppMenuWorkA *menu = g_gauntletAppMenu;

    uiSpriteAdvanceAnimation(gauntletSprite(menu, 1), 1.0f);
    uiSpriteAdvanceAnimation(gauntletSprite(menu, 2), 1.0f);
    switch (menu->list.mode) {
    case 0:
        /* Sliding in: then the touch regions of the rows and of the scroll bar are registered. */
        if (uiSpriteAdvanceAnimation(gauntletSprite(menu, 0), 1.0f)) {
            sysPlaySe(25);
            FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
            if (gameFlagIsSet(GAUNTLET_FLAG_INTRODUCED) == 0) {
                scrScriptProcessStartEntry(menu->handle, 1);
                FUN_003dc0c0(menu, 8);
                campHideNumericBanner();
            } else {
                FUN_003dc0c0(menu, 3);
            }
            for (s32 i = 0; i < 10; i++) {
                if (i >= objectApplyIfUnblocked(gauntletList(menu))) {
                    break;
                }
                menu->touch.regions[i] = FUN_001643b4(GAUNTLET_TEXTURES, i + 0x40E);
                menu->touch.touchRegionCount++;
            }
            menu->touch.regions[11] = FUN_001643b4(GAUNTLET_TEXTURES, 0x573);
            menu->touch.regions[12] = FUN_001643b4(GAUNTLET_TEXTURES, 0x574);
            menu->touch.regions[13] = FUN_001643b4(GAUNTLET_TEXTURES, 0x575);
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
        if (scrRunOpcodesStub(menu->handle) == 2) {
            if (messageGetChoiceResult() == 0) {
                FUN_003e45bc(gauntletCursorEntry(menu), 0, 0);
                eventQueueAddUnique(0x1000308);
                FUN_003dc0c0(menu, 5);
            } else {
                FUN_003dc0c0(menu, 3);
            }
            msgWindowReset();
            messageBannerRestartOrClear();
            sysPlaySe(25);
        }
        break;
    case 5:
        /* The purchase animation; a forced choice closes the menu afterwards. */
        if (uiSpriteAdvanceAnimation(gauntletSprite(menu, 3), 1.0f)) {
            if (gauntletMenuIsForced(menu)) {
                FUN_003dc0c0(menu, 7);
                eventQueueAddUniqueIfValid(GAUNTLET_SE_CANCEL);
            } else {
                s32 top = resourceRunOperationIfUnblocked(gauntletList(menu));
                u32 row = flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(menu->list.controller));
                gauntletAppBuildAvailableEntries(menu);
                scrollOwnerSetValue(menu->list.controller, top);
                flaggedEntrySetValueA(reinterpret_cast<FlaggedEntry *>(menu->list.controller), row);
                FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
                FUN_003dc0c0(menu, 3);
            }
        }
        break;
    case 6:
        /* The sort menu. */
        if (useCounterIsFinished()) {
            useCounterRelease();
            sysPlaySe(25);
            FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
            FUN_003dc0c0(menu, 3);
        } else {
            gauntletAppSortMenuEntries();
        }
        break;
    case 7:
        /* Sliding out. */
        if (uiSpriteAdvanceAnimation(gauntletSprite(menu, 0), 1.0f)) {
            FUN_00353b00(1);
            return -1;
        }
        break;
    case 8:
        /* The first visit's introduction. */
        if (scrRunOpcodesStub(menu->handle) == 2) {
            gameFlagSetValue(GAUNTLET_FLAG_INTRODUCED, 1, 1);
            campResetScreen();
            FUN_0021b1a8(reinterpret_cast<HelpMenu *>(menu));
            FUN_003dc0c0(menu, 3);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
