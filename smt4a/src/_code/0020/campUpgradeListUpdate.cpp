/* NON_MATCHING: 399 lines (301 by shape); same calls, branches and blocks as retail. What differs:
 * - retail keeps &g_camp in fp for the whole function and reads the touch regions' y offset as [fp, #4] (the
 *   word after g_camp, DAT_0057f10c here: a symbol of its own, so the build loads a second pool word), keeps
 *   0 in sl and the camp in r6; the build keeps 1 in sl, 0 in r9 and the camp in r5, which renames most rows;
 * - retail's frame is 148 bytes (the four previews' copies of the player at sp+0 and sp+24, their limits at
 *   sp+108, sp+128 and sp+0); the build's is 132 with the limits at sp+0 in every preview;
 * - retail passes ifTouchRegionAdd's arguments sign-extended (ldrsh, sxth), the build zero-extended as the
 *   shared u16 prototype (IDENTICAL in both definitions) asks;
 * - the registration loop addresses the row regions from a copy of the camp (mov r9, r6). */
#include "camp/CampStateA.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "event/2dEvent/SmokeFade.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/EquipmentUpgradeState.h"
#include "gamedata/FlagValueIsPositive.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gfx/TrackedRecord.h"
#include "ui/UiControl.h"
#include "ui/UiControl_Smt4a.h"
#include "ui/UiSpriteApi.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdMemUtil.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002c.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code0033.h"
#include "map/lmapMain.h"

struct Widget;
struct ObjBRecord;
struct PlayerStats;

/* The slots of the player's equipment an upgrade item can go to; the two gun slots need flag 0x410. */
enum { CAMP_UPGRADE_SLOTS = 7 };

extern "C" {
extern s32 DAT_0057f10c;    /* follows g_camp: added to the y of the camp's touch regions */

s32 padQueryLogicalKey(s32 key, s32 mode);
void campChangeState(s32 newState);
void campResetScreen(void);
void campRebuildEnabledFlagList(s32 mode);
void campSetSpriteAnimationPreset(s32 mode, s32 animation, s32 imageKey, u32 restart);
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *rectangle, const s16 *regions,
                                 s32 firstKey, s32 secondKey, s32 thirdKey, s8 *blockedMode, s32 secondary, s32 notify);
u8 gridNavigationHandleConfirm(GridNavigation *list, s32 mode);
void gridNavigationConfigure(GridNavigation *work, s32 count, s32 visibleRows, s32 columns, s32 wrap, s32 alternateKeys);
s32 widgetSubCallIfVisible(Widget *widget);
void statusPanelClose(void);
void statusPanelSetOpen(s32 open);
void FUN_0021b274(s32 mode, s32 image, u32 frame);
void FUN_0031f718(s32 id, s32 useBaseStats, u32 flags);
void FUN_003343c0(u8 value);
void FUN_0037245c(u32 slot, s32 *parameter, s32 *id);
void FUN_00372100(PlayerDataA *first, s32 second);
void FUN_003df7c4(PlayerStats *stats);
void FUN_004803e4(u32 itemId);
void FUN_0048053c(s32 item, UpgradeLimits *limits);
void objBSetRecord2000(ObjBRecord *src);
void gameGlobalsQueueValues(PlayerDataA *first, u32 second);
void gameGlobalsSetSceneState(u32 value);
s32 itemSelectionCanUse(CampStateA *selection, s32 index);
void flagValueSub(s32 id, u32 amount);
void sysPlaySe(u32 id);
}

/* The row of the upgrade list the cursor is on. */
static __inline s32 campUpgradeListRow(CampStateA *camp)
{
    return resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(&camp->upgradeGrid)) +
           listCursorGetRowIfUnblocked(&camp->upgradeGrid);
}

/* Advances the menu's frame and its rows' sprites, the rows from the last one back while they slide out. */
static __inline void campAdvanceMenuSprites(void)
{
    CampStateA *camp = g_camp;
    s32 rows = widgetSubCallIfVisible(reinterpret_cast<Widget *>(&camp->menuGrid));
    uiSpriteAdvanceAnimation(&camp->sprites[0], 1.0f);
    if (uiSpriteGetOperationMode(&camp->sprites[5]) == 2 || uiSpriteGetOperationMode(&camp->sprites[5]) == 10) {
        s32 started = 0;
        for (s32 row = rows - 1; row >= 0; --row) {
            if (started <= (s32)camp->substep - 1) {
                uiSpriteAdvanceAnimation(&camp->sprites[5 + row], 1.0f);
            }
            ++started;
        }
    } else {
        for (s32 row = 0; row < rows; ++row) {
            if (row <= (s32)camp->substep - 1) {
                uiSpriteAdvanceAnimation(&camp->sprites[5 + row], 1.0f);
            }
        }
    }
}

/* Shows the status panel what the player's stats become with the upgrade of the equipment `parameter`
 * names (none: the stats as they are). */
static __inline void campPreviewUpgrade(s32 parameter)
{
    const PlayerDataA *player = gameGetPlayerData();
    UpgradeLimits limits = { 0 };
    PlayerDataA preview = *player;
    if (parameter != 0) {
        FUN_0048053c(parameter, &limits);
    }
    FUN_003df7c4(reinterpret_cast<PlayerStats *>(&preview));
    FUN_00372100(&preview, 0);
    objBSetRecord2000(reinterpret_cast<ObjBRecord *>(&limits));
    FUN_003343c0(1);
}

/* The camp's equipment-upgrade list: phase 0 lists the player's upgradable equipment and registers the rows'
 * touch regions, 1 slides the menu in and opens the status panel on the preview, 2 scrolls the list (each
 * row previews its upgrade), applies the confirmed upgrade and takes one of the item used, 3 slides the
 * menu out and 4 goes back to the item list (or out of it when it is empty). */
extern "C" void campUpgradeListUpdate(void)
{
    CampStateA *camp = g_camp;

    switch (camp->phase) {
    case 0: {
        campSetSpriteAnimationPreset(2, 1, -1, 0);
        camp->upgradeIds[0] = 0;
        camp->upgradeIds[1] = 0;
        camp->upgradeIds[2] = 0;
        camp->upgradeIds[3] = 0;
        camp->upgradeIds[4] = 0;
        camp->upgradeIds[5] = 0;
        camp->upgradeIds[6] = 0;
        sysMemClear(camp->unk3354, sizeof(camp->unk3354));
        s32 count = 0;
        s32 visibleRows = 3;
        for (s32 slot = 0; slot < CAMP_UPGRADE_SLOTS; ++slot) {
            if ((slot == 1 || slot == 2) && !gameFlagIsSet(0x410)) {
                visibleRows = 1;
                continue;
            }
            FUN_0037245c(slot, &camp->upgradeParameters[count], &camp->upgradeIds[count]);
            ++count;
        }
        for (s32 slot = 0; slot < CAMP_UPGRADE_SLOTS; ++slot) {
            if ((slot == 1 || slot == 2) && !gameFlagIsSet(0x410)) {
                continue;
            }
            const TextureTableEntryIV *row = asdTMTexTableEntryAt(0x12, 0x477 + slot);
            camp->touch.rowRegions[slot] = ifTouchRegionAdd(row->x, (s16)(row->y + DAT_0057f10c),
                                                            row->placement->width, row->placement->height);
            camp->touchRegionCount++;
        }
        gridNavigationConfigure(&camp->upgradeGrid, count, count, 1, 1, 1);
        flaggedEntrySetValueA(reinterpret_cast<FlaggedEntry *>(&camp->upgradeGrid), visibleRows);
        if (itemSelectionCanUse(camp, campUpgradeListRow(camp))) {
                sysPlaySe(0x117);
            } else {
                sysPlaySe(0x118);
            }
        gameGlobalsSetSceneState(0);
        gameGlobalsSetOverlayActive(1);
        unitStatusResetSpriteState();
        gameGlobalsSetMenuOpenFlag(1);
        camp->phase = 1;
    }
    /* fallthrough */
    case 1:
        campAdvanceMenuSprites();
        if (uiSpriteGetCompletionState(&camp->sprites[5]) != 0 && gameStateIsNotTransitioning()) {
            gameGlobalsSetSceneState(0);
            FUN_0031f718(-1, 0, 0);
            campPreviewUpgrade(camp->upgradeParameters[campUpgradeListRow(camp)]);
            FUN_0033449c(1);
            statusPanelSetOpen(1);
            camp->phase = 2;
        }
        break;
    case 2: {
        s8 blockedMode = 0;
        u8 selectionMode = ifTouchGetSelectionMode();
        if (uiScrollHandleActionsOrTouch(&camp->upgradeGrid, asdTMTexTableEntryAt(0x12, 0x461), camp->touch.rowRegions,
                                         0, 0, 0, &blockedMode, 0, 1)) {
            s32 row = campUpgradeListRow(camp);
            campPreviewUpgrade(camp->upgradeParameters[row]);
            if (itemSelectionCanUse(camp, row)) {
                sysPlaySe(0x117);
            } else {
                sysPlaySe(0x118);
            }
        } else {
            if (!gridNavigationHandleConfirm(&camp->upgradeGrid, 1)) {
                if (!padQueryLogicalKey(0, 1) && selectionMode != 6) {
                    if (padQueryLogicalKey(1, 1)) {
                        eventQueueAddUniqueIfValid(0x100020F);
                        campSetSpriteAnimationPreset(2, 3, -1, 0);
                        statusPanelClose();
                        camp->phase = 3;
                    }
                    return;
                }
                s32 row = campUpgradeListRow(camp);
                if (!itemSelectionCanUse(camp, row)) {
                    return;
                }
                eventQueueAddUniqueIfValid(0x100020E);
                sysPlayVoice(0x10000CC);
                FUN_004803e4(camp->upgradeParameters[row]);
                FUN_003df7c4(reinterpret_cast<PlayerStats *>(gameGetPlayerData()));
                gameGlobalsQueueValues(gameGetPlayerData(), 0);
                campPreviewUpgrade(camp->upgradeParameters[row]);
                u16 item = camp->gridIds0[resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(&camp->grids[0])) +
                                          listCursorGetRowIfUnblocked(&camp->grids[0])];
                flagValueSub(item, 1);
                if (!flagValueIsPositive(item)) {
                    campRebuildEnabledFlagList(11);
                    campSetSpriteAnimationPreset(2, 3, -1, 0);
                    statusPanelClose();
                    camp->phase = 3;
                }
                return;
            }
            eventQueueAddUniqueIfValid(0x100020D);
            s32 row = campUpgradeListRow(camp);
            campPreviewUpgrade(camp->upgradeParameters[row]);
            if (itemSelectionCanUse(camp, row)) {
                sysPlaySe(0x117);
            } else {
                sysPlaySe(0x118);
            }
        }
        break;
    }
    case 3:
        campAdvanceMenuSprites();
        if (uiSpriteGetCompletionState(&camp->sprites[5]) != 0) {
            if (gameGlobalsIsActiveStateFour()) {
                camp->phase = 4;
            }
        }
        break;
    case 4:
        for (s32 slot = 0; slot < CAMP_UPGRADE_SLOTS; ++slot) {
            if (camp->touch.rowRegions[slot] >= 0) {
                ifTouchRegionRemove();
                camp->touch.rowRegions[slot] = -1;
                camp->touchRegionCount--;
            }
        }
        gameGlobalsSetMenuOpenFlag(0);
        FUN_0033449c(0);
        if (!flagValueIsPositive(camp->usedItem)) {
            campRebuildEnabledFlagList(11);
        }
        campResetScreen();
        if (gridNavigationGetItemCount(reinterpret_cast<Object *>(&camp->grids[0])) > 0) {
            FUN_0021b274(1, -1, 0);
            camp->pendingState = 10;
            campChangeState(4);
        } else {
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 6;
            campChangeState(5);
        }
        break;
    }
}
