#include "ui/UiSpriteApi.h"
#include "common.h"
#include "shard/Shard0031.h"
#include "code/Code002a_VariantA.h"
#include "gamedata/SaveSlotTable.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"

/* The partner select menu (only the fields the state machine reads). */
struct PartnerMenuFull {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 fromTitle;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ s32 state;
    /* 0x00C */ s32 returnState;
    /* 0x010 */ u8 unk010[0x20];
    /* 0x030 */ u8 panel[0x8A];
    /* 0x0BA */ u8 panelClosed;
    /* 0x0BB */ u8 unk0BB[0x1A5];
    /* 0x260 */ u8 list[0x94];
    /* 0x2F4 */ u32 selection;
    /* 0x2F8 */ u8 unk2F8[0x1C];
    /* 0x314 */ u8 unk314[8];
    /* 0x31C */ u32 scriptTable;
    /* 0x320 */ ScriptProcess *script;
    /* 0x324 */ u8 unk324[4];
    /* 0x328 */ s32 shownDevil;
    /* 0x32C */ s32 cursor;
    /* 0x330 */ u8 unk330[0x14];
    /* 0x344 */ u32 mode;
};

extern "C" {
extern s8 g_callbackOwnerSlots;


s32 FUN_004be1c8(PartnerMenuFull *menu);
s32 partnerMenuUpdateList(PartnerMenuFull *menu);
s32 partnerMenuUpdateStatusPage(PartnerMenuFull *menu);
void gameGlobalsSetMenuOpenFlag(s32 owner);
void messageBannerRestartOrClear(void);
s32 messageMainGetValue(void);
void sysPlaySe(s32 id);
void saveSlotTableSetPreferredId(u32 devil);
void FUN_0035d03c(s32 flag);
void gridNavigationHandleConfirm(void *list, s32 flag);
s32 padQueryLogicalKey(s32 a, s32 b);
void dialogClose(s32 flag);
void eventQueueAddUniqueIfValid(s32 event);
s32 tableGroupFindEntryIndex(u32 group, const char *name);
void gameGlobalsSetOverlayActive(s32 flag);
void statusPanelClose(void);

/* The confirm script's entry name. */
static const char s_setMainPartnerEntry[] = "SetMainPartner2";

/* Steps the partner select menu: hands the list and confirm states to their handlers and runs the
 * confirm/cancel scripts. Always returns 0. */
u32 FUN_004be608(PartnerMenuFull *menu)
{
    switch (menu->state) {
    case 1:
        FUN_004be1c8(menu);
        break;
    case 2:
        gameGlobalsSetMenuOpenFlag(1);
        uiSpriteAdvanceAnimation((UiSpriteState *)menu->panel, 1.0f);
        if (uiSpriteGetCompletionState((const UiSpriteState *)menu->panel) != 0) {
            gameGlobalsSetMenuOpenFlag(0);
            menu->state = menu->returnState;
            if (menu->state == 3) {
                menu->mode = 1;
            } else if (menu->state == 4) {
                menu->mode = 2;
            }
        }
        break;
    case 3:
        partnerMenuUpdateList(menu);
        break;
    case 4:
        partnerMenuUpdateStatusPage(menu);
        break;
    case 5:
        if (scrRunOpcodesStub(menu->script) == 2) {
            if (menu->fromTitle == 1) {
                messageBannerRestartOrClear();
            }
            if (messageMainGetValue() == 0) {
                menu->state = 6;
            } else if (menu->fromTitle == 1) {
                menu->state = 9;
                sysPlaySe(0x11F);
            } else {
                menu->state = 3;
                gameGlobalsSetMenuOpenFlag(0);
                sysPlaySe(0xF0);
            }
        }
        break;
    case 6: {
        u8 *devil = (u8 *)partyGetSlot(*(u32 *)((u8 *)menu + 0x2C4 + menu->cursor * 4) & 0xFFFF);
        if (devil != NULL) {
            saveSlotTableSetPreferredId(*(u16 *)(devil + 300));
            menu->shownDevil = menu->cursor;
            FUN_0035d03c(0);
            if (menu->fromTitle == 1) {
                menu->state = 11;
            } else {
                gameGlobalsSetMenuOpenFlag(0);
                sysPlaySe(0x11B);
                menu->state = 3;
            }
        }
        break;
    }
    case 7:
        if (scrRunOpcodesStub(menu->script) == 2) {
            if (messageMainGetValue() != 0) {
                menu->state = 3;
                sysPlaySe(0xF0);
            } else {
                menu->state = 8;
            }
        }
        break;
    case 8:
        saveSlotTableSetPreferredId(0);
        menu->shownDevil = -1;
        FUN_0035d03c(0);
        sysPlaySe(0xF0);
        menu->state = 3;
        break;
    case 13:
        if (menu->fromTitle != 1) {
            gameGlobalsSetOverlayActive(0);
            statusPanelClose();
        }
        if (menu->script != NULL) {
            scrScriptProcessDestroy(menu->script);
            menu->script = NULL;
        }
        gameGlobalsSetMenuOpenFlag(g_callbackOwnerSlots);
        menu->state = 0;
        break;
    case 9:
        gridNavigationHandleConfirm(menu->list, 1);
        menu->selection = listCursorGetRowIfUnblocked((const Object *)menu->list);
        menu->cursor = menu->selection;
        if (padQueryLogicalKey(0, 1) != 0) {
            dialogClose(1);
            eventQueueAddUniqueIfValid(0x100020E);
            menu->state = 10;
            menu->returnState = 6;
            s32 entry = tableGroupFindEntryIndex(menu->scriptTable, s_setMainPartnerEntry);
            if (entry >= 0) {
                scrScriptProcessStartEntry(menu->script, entry);
            }
        }
        break;
    case 10:
        if (scrRunOpcodesStub(menu->script) == 2) {
            messageBannerRestartOrClear();
            menu->state = menu->returnState;
        }
        break;
    case 11:
        if (menu->fromTitle != 1) {
            gameGlobalsSetOverlayActive(0);
            statusPanelClose();
        }
        if (menu->script != NULL) {
            scrScriptProcessDestroy(menu->script);
            menu->script = NULL;
        }
        gameGlobalsSetMenuOpenFlag(g_callbackOwnerSlots);
        menu->state = 0;
        break;
    }
    return 0;
}

} /* extern "C" */
