/* NON_MATCHING: readable rebuild of the main-partner select menu's state machine (draft args completed from the surrounding calls: the entry index passed to the script start, the destroyed script and the lost return of FUN_001517b4); armcc here shares the state-store tail and the script reload differently. */
#include "common.h"
#include "shard/Shard0031.h"
#include "util/FUN_002a4894.h"
#include "util/FUN_002a4894.h"

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
    /* 0x320 */ u32 script;
    /* 0x324 */ u8 unk324[4];
    /* 0x328 */ s32 shownDevil;
    /* 0x32C */ s32 cursor;
    /* 0x330 */ u8 unk330[0x14];
    /* 0x344 */ u32 mode;
};

extern "C" {
extern s8 g_callbackOwnerSlots;

s32 FUN_004be1c8(PartnerMenuFull *menu);
s32 FUN_004bea0c(PartnerMenuFull *menu);
s32 FUN_004bf174(PartnerMenuFull *menu);
void FUN_003343f0(s32 owner);
void FUN_00163aa4(void *panel);
s32 scrRunOpcodesStub(u32 script);
void messageBannerRestartOrClear(void);
s32 messageMainGetValue(void);
void sysPlaySe(s32 id);
void *FUN_003e4d68(u32 devil);
void FUN_003e4e4c(u32 devil);
void FUN_0035d03c(s32 flag);
void FUN_00228b04(void *list, s32 flag);
s32 FUN_001517b4(s32 a, s32 b);
void dialogClose(s32 flag);
void eventQueueAddUniqueIfValid(s32 event);
s32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void scrScriptProcessDestroy(u32 script);
void FUN_002c8538(s32 flag);
void FUN_0022e774(void);

/* Steps the partner select menu: hands the list and confirm states to their handlers and runs the
 * confirm/cancel scripts. Always returns 0. */
u32 FUN_004be608(PartnerMenuFull *menu)
{
    switch (menu->state) {
    case 1:
        FUN_004be1c8(menu);
        break;
    case 2:
        FUN_003343f0(1);
        FUN_00163aa4(menu->panel);
        if (menu->panelClosed != 0) {
            FUN_003343f0(0);
            menu->state = menu->returnState;
            if (menu->state == 3)
                menu->mode = 1;
            else if (menu->state == 4)
                menu->mode = 2;
            else
                return 0;
        }
        break;
    case 3:
        FUN_004bea0c(menu);
        break;
    case 4:
        FUN_004bf174(menu);
        break;
    case 5:
        if (scrRunOpcodesStub(menu->script) != 2)
            return 0;
        if (menu->fromTitle == 1)
            messageBannerRestartOrClear();
        if (messageMainGetValue() != 0) {
            if (menu->fromTitle != 1) {
                menu->state = 3;
                FUN_003343f0(0);
                sysPlaySe(0xF0);
                return 0;
            }
            menu->state = 9;
            sysPlaySe(0x11F);
            return 0;
        }
        menu->state = 6;
        break;
    case 6: {
        u8 *devil = (u8 *)FUN_003e4d68(*(u32 *)((u8 *)menu + 0x2C4 + menu->cursor * 4) & 0xFFFF);
        if (devil == NULL)
            return 0;
        FUN_003e4e4c(*(u16 *)(devil + 300));
        menu->shownDevil = menu->cursor;
        FUN_0035d03c(0);
        if (menu->fromTitle == 1) {
            menu->state = 11;
        } else {
            FUN_003343f0(0);
            sysPlaySe(0x11B);
            menu->state = 3;
        }
        break;
    }
    case 7:
        if (scrRunOpcodesStub(menu->script) != 2)
            return 0;
        if (messageMainGetValue() != 0) {
            menu->state = 3;
            sysPlaySe(0xF0);
            return 0;
        }
        menu->state = 8;
        break;
    case 8:
        FUN_003e4e4c(0);
        menu->shownDevil = -1;
        FUN_0035d03c(0);
        sysPlaySe(0xF0);
        menu->state = 3;
        break;
    case 9:
        FUN_00228b04(menu->list, 1);
        menu->selection = FUN_002a4894(reinterpret_cast<const Object *>(menu->list));
        menu->cursor = menu->selection;
        if (FUN_001517b4(0, 1) != 0) {
            dialogClose(1);
            eventQueueAddUniqueIfValid(0x100020E);
            menu->state = 10;
            menu->returnState = 6;
            s32 entry = tableGroupFindEntryIndex(menu->scriptTable, "SetMainPartner2");
            if (entry >= 0)
                scrScriptProcessStartEntry(menu->script, entry);
        }
        break;
    case 10:
        if (scrRunOpcodesStub(menu->script) != 2)
            return 0;
        messageBannerRestartOrClear();
        menu->state = menu->returnState;
        break;
    case 11:
    case 13:
        if (menu->fromTitle != 1) {
            FUN_002c8538(0);
            FUN_0022e774();
        }
        if (menu->script != 0) {
            scrScriptProcessDestroy(menu->script);
            menu->script = 0;
        }
        FUN_003343f0(g_callbackOwnerSlots);
        menu->state = 0;
        break;
    }
    return 0;
}

} /* extern "C" */
