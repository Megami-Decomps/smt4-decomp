/* NON_MATCHING: armcc places the first camera-height else arm (tab 3) after the repeat-right test instead of right behind the call; every other instruction matches */
#include "common.h"
#include <stddef.h>
#include "network/DataStore/DataStoreMain.h"

#define SHOP_TAB_NONE 7

/* The model object the shop screen keeps for its cursor. */
struct ShopCursorObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *model;
};

/* The shop screen's work area (Apocalypse); only the fields this update reads. */
struct ShopScreen {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ u32 state;
    /* 0x00008 */ u32 substate;
    /* 0x0000c */ u8 unk0000c[4];
    /* 0x00010 */ u32 prevState;
    /* 0x00014 */ u8 unk00014[4];
    /* 0x00018 */ u8 locked;
    /* 0x00019 */ u8 unk00019[9];
    /* 0x00022 */ u8 unk22;
    /* 0x00023 */ u8 unk00023[0x3a9];
    /* 0x003cc */ u8 sprites[0x774];
    /* 0x00b40 */ u32 tab;
    /* 0x00b44 */ u8 unk00b44[0x154e4];
    /* 0x16028 */ ShopCursorObject *cursor;
    /* 0x1602c */ s16 prevRecord;
    /* 0x1602e */ s16 nextRecord;
};

/* For each tab, the tab the left/right buttons lead to; tabs 0 and 3 have locked alternatives. */
struct ShopTabNeighbors {
    struct {
        u32 left;
        u32 right;
    } tab[8];
    u32 tab0Left;
    u32 tab0Right;
    u32 tab3Left;
    u32 tab3Right;
};

typedef char ShopScreenLayoutCheck[offsetof(ShopScreen, tab) == 0xb40 && offsetof(ShopScreen, sprites) == 0x3cc &&
    offsetof(ShopScreen, cursor) == 0x16028 && offsetof(ShopScreen, nextRecord) == 0x1602e ? 1 : -1];

extern "C" {

s32 gameFlagIsSet(u32 id);
s32 recordGetModeForId(s32 id);
void gameSetStatusCameraHeightMode(s32 mode);
s32 FUN_0040ab8c(ShopCursorObject *object);
void FUN_0040aad4(ShopCursorObject *object, s32 mode);
void handleRegistryRegisterObject(u32 registry, void *model);
void FUN_003fd7b4(void *model, f32 x, f32 y, f32 z);
void FUN_004954e8(ShopScreen *shop);
void messageChoiceShowCurrent(ShopScreen *shop);
s32 inputIsQuestRepeatRight(void);
s32 FUN_004d0494(void);
s32 inputIsQuestCancelPressed(void);
s32 inputIsQuestMenuPressed(void);
void FUN_0038b57c(s32 index);
void FUN_002f0384(s32 a);
void sendEvent1000210(void);
void sendEvent100020F(void);
void sendEvent100020E(void);
void FUN_004964e0(ShopScreen *shop, s32 a);
void uiSpriteBankApplyPreset(void *sprites, s32 preset);
void FUN_0049af90(ShopScreen *shop);
void menuOpenCommandList(ShopScreen *shop);
void FUN_00498de0(ShopScreen *shop);

extern u32 g_handleRegistry;
extern ShopTabNeighbors g_shopTabNeighbors;

/* Tabs 3-5 each keep a marker that is cleared when the tab is left. */
static __inline void shopClearTabMarker(ShopScreen *shop)
{
    if (shop->tab == 3) {
        FUN_0038b57c(0);
    }
    if (shop->tab == 4) {
        FUN_0038b57c(1);
    }
    if (shop->tab == 5) {
        FUN_0038b57c(2);
    }
}

/* Per-frame update of the shop's tab screen: tab switching and the menu/cancel buttons. */
void _ZN9Obj53604412FUN_00497290Ev(ShopScreen *shop)
{
    s32 mode;

    if (shop->tab != SHOP_TAB_NONE) {
        if (objBStateAllowsAction() == 0) {
            return;
        }
        if (shop->cursor != NULL) {
            if (FUN_0040ab8c(shop->cursor) == 0) {
                return;
            }
            if (shop->cursor->model == NULL) {
                void *model;

                FUN_0040aad4(shop->cursor, 0);
                model = shop->cursor->model;
                handleRegistryRegisterObject(g_handleRegistry, model);
                FUN_003fd7b4(model, 0.0f, -32000.0f, 0.0f);
            }
        }
        if (shop->tab == 3) {
            gameSetStatusCameraHeightMode(1);
        } else {
            gameSetStatusCameraHeightMode(shop->tab == 5 ? 2 : 0);
        }
    }
    FUN_004954e8(shop);
    messageChoiceShowCurrent(shop);
    if (inputIsQuestRepeatRight() != 0 || recordGetModeForId(shop->prevRecord) == 6) {
        if (shop->tab != SHOP_TAB_NONE) {
            shopClearTabMarker(shop);
            FUN_002f0384(0);
            shop->unk22 = 0;
            if (shop->tab == 0 && (shop->locked != 0 || gameFlagIsSet(0x410) == 0)) {
                shop->tab = g_shopTabNeighbors.tab0Left;
            } else if (shop->tab == 3 && (shop->locked != 0 || gameFlagIsSet(0x410) == 0)) {
                shop->tab = g_shopTabNeighbors.tab3Left;
            } else {
                shop->tab = g_shopTabNeighbors.tab[shop->tab].left;
            }
            sendEvent1000210();
            FUN_004964e0(shop, 1);
            s32 mode;
            if (shop->tab != 3) {
                mode = shop->tab == 5 ? 2 : 0;
            } else {
                mode = 1;
            }
            gameSetStatusCameraHeightMode(mode);
        }
    } else if (FUN_004d0494() != 0 || recordGetModeForId(shop->nextRecord) == 6) {
        if (shop->tab != SHOP_TAB_NONE) {
            shopClearTabMarker(shop);
            FUN_002f0384(0);
            shop->unk22 = 0;
            if (shop->tab == 0 && (shop->locked != 0 || gameFlagIsSet(0x410) == 0)) {
                shop->tab = g_shopTabNeighbors.tab0Right;
            } else if (shop->tab == 3 && (shop->locked != 0 || gameFlagIsSet(0x410) == 0)) {
                shop->tab = g_shopTabNeighbors.tab3Right;
            } else {
                shop->tab = g_shopTabNeighbors.tab[shop->tab].right;
            }
            sendEvent1000210();
            FUN_004964e0(shop, 1);
            s32 mode;
            if (shop->tab != 3) {
                mode = shop->tab == 5 ? 2 : 0;
            } else {
                mode = 1;
            }
            gameSetStatusCameraHeightMode(mode);
        }
    }
    if (inputIsQuestMenuPressed() != 0) {
        shopClearTabMarker(shop);
        uiSpriteBankApplyPreset(shop->sprites, 1);
        sendEvent100020F();
        shop->prevState = shop->state;
        shop->state = 0x13;
        shop->substate = 0;
        if (shop->tab == SHOP_TAB_NONE) {
            return;
        }
        FUN_0049af90(shop);
    } else if (inputIsQuestCancelPressed() != 0) {
        sendEvent100020E();
        menuOpenCommandList(shop);
    }
    if (shop->tab == SHOP_TAB_NONE) {
        return;
    }
    FUN_00498de0(shop);
}

} /* extern "C" */
