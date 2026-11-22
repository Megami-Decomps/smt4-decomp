/* NON_MATCHING: 4 lines (205 vs 205 rows): all four steps, both shopHasEntries scans, scripts, and state transitions match; only ldr r1, [r4, #28] and cmp r1, #9 schedule above str r0, [r4] in case 0. */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/FlagValueIsPositive.h"

extern "C" {

/* The shop screen work block (only the fields used here). */
typedef struct ShopMain {
    /* 0x00000 */ u32 flags;            /* 4: opened */
    /* 0x00004 */ u32 state;
    /* 0x00008 */ u32 step;
    /* 0x0000C */ u32 unk0c;
    /* 0x00010 */ u32 previousState;
    /* 0x00014 */ u32 unk14[2];
    /* 0x0001C */ u32 kind;
    /* 0x00020 */ u8 unk20;
    /* 0x00021 */ u8 closeKind;
    /* 0x00022 */ u8 unk22[0x162];
    /* 0x00184 */ u32 scriptTable;
    /* 0x00188 */ u32 unk188;
    /* 0x0018C */ u32 script;
    /* 0x00190 */ u8 unk190[0x15EBC];
    /* 0x1604C */ u8 introMode;
} ShopMain;

s32 sysPlaySe(s32 id);
void buttonHelpSetText(s32 a, u32 color);
s32 scrRunOpcodesStub(u32 script);
void scrScriptProcessStartEntry(u32 script, u32 entry);
void panelSetTarget(s32 offset, s32 frame);
void messageBannerInitCounter(s32 a, s32 b);
void FUN_0049a5b4(ShopMain *shop);
u32 FUN_0049a9a8(ShopMain *shop);
s32 gameFlagIsSet(u32 flag);
s32 flagValueRead(u32 id);
u32 tableGroupFindEntryIndex(u32 table, const char *name);

/* Whether any shop entry in the two id ranges is available. */
static __inline bool shopHasEntries(void)
{
    for (u32 id = 0x3B7; id <= 0x47E; id++) {
        if (flagValueIsPositiveForward(id) != 0) {
            return true;
        }
    }
    for (u32 id = 0x47F; id <= 0x79E; id++) {
        if (flagValueIsPositiveForward(id) != 0) {
            return true;
        }
    }
    return false;
}

/* Starts a named script entry from the shop's script table. */
static __inline void shopStartScript(ShopMain *shop, const char *name)
{
    scrScriptProcessStartEntry(shop->script, tableGroupFindEntryIndex(shop->scriptTable, name));
}

/* Transitions the shop state and resets its step counter. */
static __inline void shopChangeState(ShopMain *shop, u32 nextState)
{
    shop->previousState = shop->state;
    shop->state = nextState;
    shop->step = 0;
}

/* Drives the shop screen's entry steps: step 0 decides whether the intro or the in-shop event
 * runs, steps 1 and 2 wait for the script, and step 3 opens the shop or falls back. */
void _ZN9Obj53604412FUN_00494a34Ev(ShopMain *shop)
{
    switch (shop->step) {
    case 0:
        shop->flags |= 4;
        if (shop->kind == 9) {
            if ((flagValueRead(0x363) >= 1 && gameFlagIsSet(0x114) == 0) || gameFlagIsSet(0x113) == 0) {
                shopStartScript(shop, "shop_event");
                scrRunOpcodesStub(shop->script);
                shop->step = 1;
                sysPlaySe(0xA0);
                break;
            }
        } else if (shop->introMode == 1 && gameFlagIsSet(0x170) != 0 && gameFlagIsSet(0x1CF) == 0) {
            shopStartScript(shop, "shop_event");
            scrRunOpcodesStub(shop->script);
            shop->step = 1;
            sysPlaySe(0xA0);
            break;
        }
        if (shopHasEntries()) {
            if (shop->closeKind != 0) {
                shopStartScript(shop, "shop_in_sale_closewin");
            } else {
                shopStartScript(shop, "shop_in_closewin");
            }
            scrRunOpcodesStub(shop->script);
            shop->step = 2;
            sysPlaySe(0xA0);
        } else {
            messageBannerInitCounter(1, 0);
            panelSetTarget(0, 0);
            shopChangeState(shop, 5);
        }
        break;
    case 1:
        if (scrRunOpcodesStub(shop->script) == 2) {
            shop->closeKind = (u8)FUN_0049a9a8(shop);
            shop->step = 3;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(shop->script) != 2) {
            break;
        }
        shop->step = 3;
        /* fall through */
    case 3:
        messageBannerInitCounter(1, 0);
        panelSetTarget(0, 0);
        if (shopHasEntries()) {
            shopChangeState(shop, 2);
            FUN_0049a5b4(shop);
            sysPlaySe(0x77);
            buttonHelpSetText(0, 0x323232FF);
            g_gameState.giftCounter = 0;
        } else {
            shopChangeState(shop, 5);
        }
        break;
    }
}

}
