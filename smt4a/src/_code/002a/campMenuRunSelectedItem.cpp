/* Runs the camp menu item under the cursor (FUN_003da8f4 maps the group and row to an item id): opens the
 * item's screen, list, script or unite mode. The cases are in retail's order. */
#include "camp/CampStateA.h"
#include "camp/CampSkillList.h"
#include "camp/CampMenuEntry.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "gamedata/GameFlags.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GameDataAccess_Smt4a.h"
#include "ui/UiSpriteApi.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers_Smt4a.h"
#include "code/Code002a.h"
#include "code/Code002c.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code0035.h"

extern "C" {

u8 FUN_003da8f4(s32 group, s32 index);
void campChangeState(s32 newState);
void FUN_002a5cf4(void);
void FUN_002e738c(s32 mode);
void bgmRestart(u32 value);
void campSetSpriteAnimationPreset(s32 mode, s32 animation, s32 imageKey, u32 restart);
void FUN_0021b274(s32 mode, s32 image, u32 frame);
void FUN_003d386c(s32 useSelector);
void FUN_0035dbd4(u32 value);
void campRebuildEnabledFlagList(s32 mode);
void FUN_00319b10(void);
void campSelectorRebuildList(s32 id);
void partyPanelSetHidden(s32 hidden);
/* The bible openers ignore their argument; the menu passes 0. */
void bibleOpenMode0(s32 unused);
void bibleOpenMode1(s32 unused);
void bibleOpenMode2(s32 unused);
u32 FUN_0035c810(void);
void buttonHelpSetText(const s8 *text, u32 color);
void uiQuestCreate(void);
void FUN_00334560(void);
void uiQuestReturnToList(void);
u32 uniteRequestGet(void);
void FUN_002a7b74(void);
u32 uniteStartOrQueueRequest(s32 request);
void configOpen(u32 parent, u8 mode);
void FUN_00215254(void);
u32 uniteHasPendingIdle(void);
void uniteSetMode(u8 mode);
void campReleaseSlotTouchRegions(void);
s32 FUN_0032fbd0(void *slot);
void fusionReleaseRegisteredHandle(void);
void FUN_002c39dc(u32 first, u32 second, u32 third);
void FUN_00284ee4(s32 start);
void FUN_002e2404(u32 value);
u32 messageMainStartMenuAnimationIfEnabled(void);
u32 gameDataBlocksGetSelectedValue(void);
void campCecScriptStart(u32 request);
void sysPlaySe(u32 id);
u32 stateAtF4IsActive(void);
void FUN_0038800c(u32 value);
s32 campCecEditIsStateSixteen(void);
void FUN_0036cf98(u8 value);
void FUN_0038a694(void);
void partnerTopicCreate(void);
void FUN_002a4708(void);
void texEntrySpritesLoad(void);

/* campHideNumericBanner()'s body, which retail repeats here. */
static __inline void hideNumericBanner(void)
{
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(&g_camp->sprites[29], 7, 0);
}

void campMenuRunSelectedItem(void)
{
    CampStateA *camp = g_camp;
    GridNavigation *grid = NULL;
    s32 item = FUN_003da8f4(camp->menuGroup, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid));

    switch (item) {
    case 0:
        break;
    case 0x33:
        camp->pendingState = 0x46;
        FUN_002a5cf4();
        break;
    case 7:
        camp->slotRequestPending = 1;
        slotSetRequest(0, 10, 0xff);
        bgmRestart(0x1e);
        break;
    case 9: {
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        FUN_0021b274(1, -1, 0);
        FUN_002a5cf4();
        FUN_003d386c(1);
        /* remembers the row for the status screen */
        s32 row = campSkillListRow(camp);
        CampStateA *current = g_camp;
        if (current != NULL) {
            current->statusSelection = row;
        }
        messageDismissNumericBanner(1);
        if (objectApplyIfUnblocked(reinterpret_cast<Object *>(&camp->grids[3])) > 0) {
            FUN_002c8538(1);
            FUN_00215bd0();
            FUN_0035dbd4(1);
        }
        camp->pendingState = 0x11;
        campChangeState(4);
        break;
    }
    case 0xb:
    case 0xd:
    case 0xe:
        if (item == 0xb) {
            grid = &camp->grids[0];
        } else if (item == 0xd) {
            grid = &camp->grids[1];
        } else if (item == 0xe) {
            grid = &camp->grids[2];
        }
        if (objectApplyIfUnblocked(reinterpret_cast<Object *>(grid)) > 0) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            FUN_0021b274(1, -1, 0);
            FUN_002a5cf4();
            if (item == 0xb) {
                camp->pendingState = 10;
                campRebuildEnabledFlagList(0xb);
            }
            if (item == 0xd) {
                camp->pendingState = 0xf;
                campRebuildEnabledFlagList(0xd);
            }
            if (item == 0xe) {
                camp->pendingState = 0x10;
                campRebuildEnabledFlagList(0xe);
            }
            campChangeState(4);
        }
        break;
    case 0xf:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        messageDismissNumericBanner(1);
        campChangeState(0x19);
        break;
    case 0x12:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        messageDismissNumericBanner(1);
        campChangeState(0x1a);
        break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
        if (item == 0x13) {
            grid = &camp->grids[5];
        } else if (item == 0x14) {
            grid = &camp->grids[6];
        } else if (item == 0x15) {
            grid = &camp->grids[7];
        } else if (item == 0x16) {
            grid = &camp->grids[8];
        } else if (item == 0x17) {
            grid = &camp->grids[9];
        } else if (item == 0x18) {
            grid = &camp->grids[10];
        } else if (item == 0x19) {
            grid = &camp->grids[11];
        }
        if (objectApplyIfUnblocked(reinterpret_cast<Object *>(grid)) > 0) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            FUN_0021b274(1, -1, 0);
            FUN_002a5cf4();
            messageDismissNumericBanner(1);
            FUN_002c8538(1);
            FUN_00215bd0();
            camp->pendingState = 0x1d;
            campSelectorRebuildList(0x13);
            campSelectorRebuildList(0x14);
            campSelectorRebuildList(0x15);
            campSelectorRebuildList(0x16);
            campSelectorRebuildList(0x17);
            campSelectorRebuildList(0x18);
            campSelectorRebuildList(0x19);
            campChangeState(4);
        }
        break;
    case 0x1a:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        messageDismissNumericBanner(1);
        partyPanelSetHidden(0);
        campChangeState(0x15);
        break;
    case 0x1b:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        FUN_002a5cf4();
        messageDismissNumericBanner(1);
        bibleOpenMode2(0);
        campChangeState(0x24);
        break;
    case 0x1c:
        gameFlagSetValue(0x48c, 1, 1);
        camp->unk000C = FUN_0035c810();
        FUN_002a5cf4();
        buttonHelpSetText(NULL, 0xf4f4f4ff);
        campChangeState(0x25);
        break;
    case 0x1d:
        FUN_002a5cf4();
        messageDismissNumericBanner(1);
        campChangeState(0x26);
        uiQuestCreate();
        FUN_00334560();
        camp->questMenuOpened = 1;
        break;
    case 0x1e:
        FUN_002a5cf4();
        messageDismissNumericBanner(1);
        campChangeState(0x27);
        uiQuestCreate();
        uiQuestReturnToList();
        camp->questListOpened = 1;
        break;
    case 0x2d:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        uniteSetMode(2);
        campChangeState(0x20);
        campReleaseSlotTouchRegions();
        break;
    case 0x41:
        if (uniteHasPendingIdle()) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            uniteSetMode(1);
            campChangeState(0x20);
            campReleaseSlotTouchRegions();
        }
        break;
    case 0x24:
        if (!gameFlagIsSet(0x459) && uniteRequestGet() != 0x19) {
            FUN_002a7b74();
            uniteStartOrQueueRequest(0x19);
        }
        break;
    case 0x27:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        FUN_002a5cf4();
        messageDismissNumericBanner(1);
        campChangeState(0x31);
        break;
    case 0x28:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        FUN_002a5cf4();
        messageDismissNumericBanner(1);
        campChangeState(0x32);
        break;
    case 0x29:
        configOpen(gameDataBlocksGetTableFlag(), 1);
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        FUN_0021b274(0, -1, 0);
        FUN_002a5cf4();
        hideNumericBanner();
        camp->pendingState = 0x2e;
        campChangeState(4);
        break;
    case 0x2b:
        FUN_00215254();
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        FUN_0021b274(0, -1, 0);
        FUN_002a5cf4();
        camp->pendingState = 0x2f;
        campChangeState(4);
        break;
    case 0x2c:
        if (uniteHasPendingIdle()) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            uniteSetMode(0);
            campChangeState(0x20);
            campReleaseSlotTouchRegions();
        }
        break;
    case 0x2e:
        if (uniteHasPendingIdle()) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            bibleOpenMode0(0);
            campChangeState(0x24);
            FUN_002a7b74();
            campReleaseSlotTouchRegions();
        }
        break;
    case 0x2f:
        /* opens the bible when a party member no longer matches its saved entry */
        if (uniteHasPendingIdle()) {
            SaveSlotTableA *table = gameGetSlotTable();
            for (u16 i = 0; i < table->count; i++) {
                s32 entry = table->party[i];
                if (entry >= 0 && FUN_0032fbd0(&table->entries[entry]) == 0) {
                    campSetSpriteAnimationPreset(2, 3, -1, 0);
                    bibleOpenMode1(0);
                    campChangeState(0x24);
                    FUN_002a7b74();
                    campReleaseSlotTouchRegions();
                    return;
                }
            }
        }
        break;
    case 0x31:
        if (uniteHasPendingIdle()) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            uniteSetMode(4);
            campChangeState(0x20);
            campReleaseSlotTouchRegions();
            camp->uniteMode4Opened = 1;
        }
        break;
    case 0x32:
        if (uniteHasPendingIdle()) {
            campSetSpriteAnimationPreset(2, 3, -1, 0);
            uniteSetMode(5);
            campReleaseSlotTouchRegions();
            fusionReleaseRegisteredHandle();
            messageDismissNumericBanner(1);
            partyPanelSetHidden(1);
            FUN_002c39dc(0xd, 0, -1);
            FUN_00284ee4(1);
            FUN_00215bbc();
            campChangeState(0x16);
        }
        break;
    case 0x34:
        camp->state = 0x34;
        FUN_002e2404(2);
        messageDismissNumericBanner(1);
        messageMainStartMenuAnimationIfEnabled();
        break;
    case 0x35: {
        /* StreetPass: the wait left, rounded up to a minute, or the exchange itself */
        u32 seconds = gameDataBlocksGetSelectedValue();
        if (seconds == 0) {
            camp->state = 0x35;
            camp->unk002C = 0;
            campCecScriptStart(0x26);
            sysPlaySe(0x92);
            messageDismissNumericBanner(1);
            messageMainStartMenuAnimationIfEnabled();
            uiSpriteSetImageKeyframe(&camp->sprites[29], 7, 0);
        } else {
            camp->state = 0x3a;
            s32 hours = (seconds + 59) / 3600;
            s32 minutes = (seconds + 59) % 3600 / 60;
            FUN_00359974(0, hours, -1, 0);
            FUN_00359974(1, minutes, 2, 1);
            if (hours > 0) {
                campCecScriptStart(0x2d);
            } else {
                campCecScriptStart(0x2e);
            }
        }
        break;
    }
    case 0x36:
        camp->pendingState = 0x3d;
        FUN_002e2404(1);
        messageDismissNumericBanner(1);
        messageMainStartMenuAnimationIfEnabled();
        uiSpriteSetImageKeyframe(&camp->sprites[29], 7, 0);
        break;
    case 0x37:
        camp->state = 0x3b;
        FUN_002e2404(4);
        messageDismissNumericBanner(1);
        messageMainStartMenuAnimationIfEnabled();
        break;
    case 0x38:
        camp->state = 0x3b;
        FUN_002e2404(5);
        messageDismissNumericBanner(1);
        messageMainStartMenuAnimationIfEnabled();
        break;
    case 0x39:
        camp->state = 0x45;
        FUN_002e2404(6);
        messageDismissNumericBanner(1);
        messageMainStartMenuAnimationIfEnabled();
        break;
    case 0x3a:
        if (stateAtF4IsActive()) {
            camp->state = 0x3e;
            FUN_0038800c(1);
        }
        break;
    case 0x3b:
        if (stateAtF4IsActive()) {
            camp->state = 0x3f;
            FUN_0038800c(2);
        }
        break;
    case 0x3c:
        if (stateAtF4IsActive()) {
            camp->state = 0x40;
            FUN_0038800c(3);
        }
        break;
    case 0x3d:
        camp->pendingState = 0x41;
        break;
    case 0x3e:
        if (stateAtF4IsActive()) {
            camp->state = 0x42;
            FUN_0038800c(5);
        }
        break;
    case 0x3f:
        if (stateAtF4IsActive()) {
            camp->state = 0x43;
            FUN_0038800c(6);
        }
        break;
    case 0x40:
        if (stateAtF4IsActive()) {
            camp->state = 0x44;
            FUN_0038800c(7);
        }
        break;
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
        if (campCecEditIsStateSixteen()) {
            if (item == 0x48) {
                grid = &camp->grids[5];
            } else if (item == 0x49) {
                grid = &camp->grids[6];
            } else if (item == 0x4a) {
                grid = &camp->grids[7];
            } else if (item == 0x4b) {
                grid = &camp->grids[8];
            } else if (item == 0x4c) {
                grid = &camp->grids[9];
            } else if (item == 0x4d) {
                grid = &camp->grids[10];
            } else if (item == 0x4e) {
                grid = &camp->grids[11];
            }
            if (objectApplyIfUnblocked(reinterpret_cast<Object *>(grid)) > 0) {
                campSetSpriteAnimationPreset(2, 3, -1, 0);
                FUN_0021b274(1, -1, 0);
                camp->pendingState = 0x1d;
                campSelectorRebuildList(0x48);
                campSelectorRebuildList(0x49);
                campSelectorRebuildList(0x4a);
                campSelectorRebuildList(0x4b);
                campSelectorRebuildList(0x4c);
                campSelectorRebuildList(0x4d);
                campSelectorRebuildList(0x4e);
                FUN_0036cf98(1);
                campChangeState(4);
            }
        }
        break;
    case 4:
        campChangeState(0x48);
        FUN_002a5cf4();
        hideNumericBanner();
        FUN_002e738c(0);
        break;
    case 0x11:
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        messageDismissNumericBanner(1);
        campChangeState(0x49);
        FUN_00319b10();
        break;
    case 0x42:
        campChangeState(0x50);
        FUN_002a5cf4();
        hideNumericBanner();
        FUN_0038a694();
        break;
    case 0x44:
        campChangeState(0x4b);
        messageDismissNumericBanner(1);
        campSetSpriteAnimationPreset(2, 3, -1, 0);
        break;
    case 0x45:
        campChangeState(0x51);
        FUN_002a5cf4();
        hideNumericBanner();
        partnerTopicCreate();
        break;
    case 0x46:
        campChangeState(0x52);
        FUN_002a5cf4();
        hideNumericBanner();
        FUN_002a4708();
        break;
    case 0x47:
        campChangeState(0x53);
        texEntrySpritesLoad();
        loadSlotEnsureLoaded(0x3a);
        FUN_002a5cf4();
        break;
    }
}

} /* extern "C" */
