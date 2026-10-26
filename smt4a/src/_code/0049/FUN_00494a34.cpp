/* NON_MATCHING: the two item-scan loops and the shared script-start tail are merged differently by armcc than retail, which keeps each copy; the shop step logic is the same. */
#include "common.h"
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

extern u32 DAT_005f1990;

s32 sysPlaySe(s32 id);
void buttonHelpSetText(s32 a, u32 color);
s32 scrRunOpcodesStub(u32 script);
void scrScriptProcessStartEntry(u32 script, u32 entry);
void panelSetTarget(s32 offset, s32 frame);
void FUN_0037c8e4(s32 a, s32 b);
void FUN_0049a5b4(ShopMain *shop);
u32 FUN_0049a9a8(void);
s32 gameFlagIsSet(u32 flag);
s32 FUN_001ba3d4(u32 id);
u32 tableGroupFindEntryIndex(u32 table, const char *name);

/* Whether any shop entry in the two id ranges is available. */
static bool shopHasEntries(void)
{
    for (u32 id = 0x3B7; id < 0x47F; id++) {
        if (flagValueIsPositiveForward(id) != 0) {
            return true;
        }
    }
    for (u32 id = 0x47F; id < 0x79F; id++) {
        if (flagValueIsPositiveForward(id) != 0) {
            return true;
        }
    }
    return false;
}

/* Drives the shop screen's entry steps: step 0 decides whether the intro or the in-shop event
 * runs, steps 1 and 2 wait for the script, and step 3 opens the shop or falls back. */
void FUN_00494a34(ShopMain *shop)
{
    if (shop->step == 0) {
        shop->flags |= 4;
        if (shop->kind != 9) {
            if (shop->introMode == 1 && gameFlagIsSet(0x170) != 0 && gameFlagIsSet(0x1CF) == 0) {
                scrScriptProcessStartEntry(shop->script, tableGroupFindEntryIndex(shop->scriptTable, "shop_event"));
                scrRunOpcodesStub(shop->script);
                shop->step = 1;
                sysPlaySe(0xA0);
                return;
            }
        } else if ((FUN_001ba3d4(0x363) > 0 && gameFlagIsSet(0x114) == 0) || gameFlagIsSet(0x113) == 0) {
            scrScriptProcessStartEntry(shop->script, tableGroupFindEntryIndex(shop->scriptTable, "shop_event"));
            scrRunOpcodesStub(shop->script);
            shop->step = 1;
            sysPlaySe(0xA0);
            return;
        }
        if (shopHasEntries()) {
            scrScriptProcessStartEntry(
                shop->script,
                tableGroupFindEntryIndex(shop->scriptTable,
                                         shop->closeKind != 0 ? "shop_in_sale_closewin" : "shop_in_closewin"));
            scrRunOpcodesStub(shop->script);
            shop->step = 2;
            sysPlaySe(0xA0);
            return;
        }
        FUN_0037c8e4(1, 0);
        panelSetTarget(0, 0);
        shop->previousState = shop->state;
        shop->state = 5;
        shop->step = 0;
        return;
    }
    if (shop->step == 1) {
        if (scrRunOpcodesStub(shop->script) == 2) {
            shop->closeKind = (u8)FUN_0049a9a8();
            shop->step = 3;
        }
        return;
    }
    if (shop->step == 2) {
        if (scrRunOpcodesStub(shop->script) != 2) {
            return;
        }
        shop->step = 3;
    } else if (shop->step != 3) {
        return;
    }
    FUN_0037c8e4(1, 0);
    panelSetTarget(0, 0);
    if (shopHasEntries()) {
        shop->previousState = shop->state;
        shop->state = 2;
        shop->step = 0;
        FUN_0049a5b4(shop);
        sysPlaySe(0x77);
        buttonHelpSetText(0, 0x323232FF);
        DAT_005f1990 = 0;
    }
}

}
