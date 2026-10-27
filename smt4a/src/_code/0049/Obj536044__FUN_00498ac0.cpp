/* NON_MATCHING: state/timer store-tail sharing and entry-name literal placement differ; cursor completion getter and synchronization/release contracts are recovered. */
#include "common.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* The appraisal shop scene. */
struct AppraisalShop {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 mode;
    /* 0x0008 */ s32 state;
    /* 0x000C */ s32 timer;
    /* 0x0010 */ s32 previousMode;
    /* 0x0014 */ u8 unk0014[0x170];
    /* 0x0184 */ u32 tableGroup;
    /* 0x0188 */ u8 unk0188[4];
    /* 0x018C */ u32 script;
    /* 0x0190 */ u8 unk0190[0x214];
    /* 0x03A4 */ f32 cursorPosition[2];
    /* 0x03AC */ u8 unk03AC[0x20];
    union {
        /* 0x03CC */ u8 sprites[0xD8];
        struct {
            u8 unk03CC[0x20];
            /* 0x03EC */ UiAnimatedSprite cursor;
            u8 unk0478[0x2C];
        } animation;
    };
    /* 0x04A4 */ u8 unk04A4[0x64];
    /* 0x0508 */ u8 unk0508[0x600];
    /* 0x0B08 */ u8 menu[0x34];
    /* 0x0B3C */ void **menuOwner;
    /* 0x0B40 */ u8 unk0B40[0x9448];
    /* 0x9F88 */ u8 flaggedValues[0x76];
    /* 0x9FFE */ u16 messages[3];
    /* 0xA004 */ u8 unkA004[0xBFFC];
    /* 0x16000 */ u32 panel;
    /* 0x16004 */ u8 unk16004[0x2C];
    /* 0x16030 */ s16 touchRegionCount;
    /* 0x16032 */ u8 unk16032[6];
    /* 0x16038 */ u32 cleared[3];
    /* 0x16044 */ u8 clearedFlags[2];
    /* 0x16046 */ u8 unk16046[2];
    /* 0x16048 */ s32 selection;
};
typedef char AppraisalShopCursorLayoutCheck[
    offsetof(AppraisalShop, cursorPosition) == 0x3A4 &&
    offsetof(AppraisalShop, animation.cursor) == 0x3EC &&
    offsetof(AppraisalShop, animation.cursor.finished) == 0x476 &&
    sizeof(AppraisalShop) == 0x1604C ? 1 : -1];

struct MenuSelectionScan;
struct FlaggedMenuList;
struct CountAt30;
struct CountAt5A;
extern "C" {
void ifTouchRegionRemove(void);
s8 uiSpriteGetCompletionState(const UiAnimatedSprite *sprite);
void FUN_00167458(void *vec, s32 arg);
void sysPlaySe(s32 id);
void uiSpriteBankApplyPreset(void *sprites, s32 preset);
s32 scrRunOpcodesStub(u32 script);
void scrScriptProcessStartEntry(u32 script, u32 entry);
void panelSetMode3(u32 panel, s32 mode);
void screenShowMessage(s32 message);
void obj04Finish(void);
u32 tableGroupFindEntryIndex(u32 group, const char *name);
s32 panelStateIs0(void);
void panelSetTarget(u32 panel, s32 target);
void pointConvertToFloat(void *dest, u32 x, u32 y);
void FUN_004963f8(AppraisalShop *shop);
void entryDispatchUpdate(void *sprites, s32 arg);
void sub10OwnerStart(void *values);
void sendEvent100020E(void);
s32 FUN_004d0584(void);
void releaseEntriesA(CountAt30 *menu);
void releaseEntriesB(CountAt5A *owner);
void menuSynchronizeFlaggedSelection(MenuSelectionScan *menu, FlaggedMenuList *values);
s32 messageMainIsIdle(void);
u32 vec2GetXInt(void *vec);
u32 vec2GetYInt(void *vec);
s32 flaggedValueHolderGetTotal(void *values);

/* Steps the appraisal shop through its intro, appraisal pick and exit. */
void _ZN9Obj53604412FUN_00498ac0Ev(AppraisalShop *shop)
{
    switch (shop->state) {
    case 0:
        scrScriptProcessStartEntry(shop->script, tableGroupFindEntryIndex(shop->tableGroup, "shop_Kantei1"));
        scrRunOpcodesStub(shop->script);
        shop->timer = 0;
        shop->cleared[0] = 0;
        shop->cleared[1] = 0;
        shop->cleared[2] = 0;
        shop->clearedFlags[0] = 0;
        shop->clearedFlags[1] = 0;
        shop->selection = -1;
        shop->state = 1;
        return;
    case 1:
        scrRunOpcodesStub(shop->script);
        shop->timer++;
        if (shop->timer >= 10 && (FUN_004d0584() != 0 || scrRunOpcodesStub(shop->script) == 2)) {
            sendEvent100020E();
            obj04Finish();
            shop->state = 2;
            shop->timer = 0;
        }
        return;
    case 2:
        if (messageMainIsIdle() != 0) {
            scrScriptProcessStartEntry(shop->script, tableGroupFindEntryIndex(shop->tableGroup, "shop_Kantei2"));
            scrRunOpcodesStub(shop->script);
            uiSpriteBankApplyPreset(shop->sprites, 0);
            sysPlaySe(0x79);
            shop->state = 3;
        }
        return;
    case 3: {
        UiAnimatedSprite *cursor = &shop->animation.cursor;
        FUN_00167458(cursor, 0);
        u32 y = vec2GetYInt(cursor);
        u32 x = vec2GetXInt(cursor);
        pointConvertToFloat(shop->cursorPosition, x, y);
        scrRunOpcodesStub(shop->script);
        if (uiSpriteGetCompletionState(cursor) != 0) {
            panelSetTarget(shop->panel, 0);
            shop->state = 4;
        }
        return;
    }
    case 4: {
        scrRunOpcodesStub(shop->script);
        FlaggedMenuList *values = reinterpret_cast<FlaggedMenuList *>(shop->flaggedValues);
        menuSynchronizeFlaggedSelection(reinterpret_cast<MenuSelectionScan *>(shop->menu), values);
        (*(void (**)(void **, void *))((u8 *)*shop->menuOwner + 0xC))(shop->menuOwner, values);
        sub10OwnerStart(values);
        entryDispatchUpdate(shop->sprites, 2);
        entryDispatchUpdate(shop->sprites, 0xC);
        s32 total = flaggedValueHolderGetTotal(values);
        screenShowMessage(shop->messages[total * 3]);
        if (FUN_004d0584() != 0) {
            sendEvent100020E();
            obj04Finish();
            shop->state = 5;
            shop->timer = 0;
            panelSetMode3(shop->panel, 0);
        }
        return;
    }
    case 5:
        if (messageMainIsIdle() != 0 && panelStateIs0() == 1) {
            FUN_004963f8(shop);
            releaseEntriesB(reinterpret_cast<CountAt5A *>(shop->menuOwner));
            releaseEntriesA(reinterpret_cast<CountAt30 *>(shop->menu));
            for (s32 i = 0; i < shop->touchRegionCount; i++)
                ifTouchRegionRemove();
            shop->previousMode = shop->mode;
            shop->mode = 5;
            shop->state = 0;
        }
        return;
    }
}

} /* extern "C" */
