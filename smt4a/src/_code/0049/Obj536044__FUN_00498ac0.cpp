#include "classes/Obj536044.h"
#include "common.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* The appraisal shop scene. */
struct AppraisalShop : public Obj536044 {
    u32 script() const { return reinterpret_cast<u32>(controller); }
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
}

/* The scene viewed as the appraisal shop. */
static __inline AppraisalShop *appraisalShop(Obj536044 *scene)
{
    return static_cast<AppraisalShop *>(scene);
}

/* Steps the appraisal shop through its intro, appraisal pick and exit. */
void Obj536044::FUN_00498ac0()
{
    switch (appraisalShop(this)->substate) {
    case 0:
        scrScriptProcessStartEntry(appraisalShop(this)->script(), tableGroupFindEntryIndex(appraisalShop(this)->tableGroup, "shop_Kantei1"));
        scrRunOpcodesStub(appraisalShop(this)->script());
        appraisalShop(this)->timer = 0;
        appraisalShop(this)->cleared[0] = 0;
        appraisalShop(this)->cleared[1] = 0;
        appraisalShop(this)->cleared[2] = 0;
        appraisalShop(this)->clearedFlags[0] = 0;
        appraisalShop(this)->clearedFlags[1] = 0;
        appraisalShop(this)->selection = -1;
        appraisalShop(this)->substate = 1;
        return;
    case 1:
        scrRunOpcodesStub(appraisalShop(this)->script());
        appraisalShop(this)->timer++;
        if (appraisalShop(this)->timer >= 10 && (FUN_004d0584() != 0 || scrRunOpcodesStub(appraisalShop(this)->script()) == 2)) {
            sendEvent100020E();
            obj04Finish();
            appraisalShop(this)->substate = 2;
            appraisalShop(this)->timer = 0;
        }
        return;
    case 2:
        if (messageMainIsIdle() != 0) {
            scrScriptProcessStartEntry(appraisalShop(this)->script(), tableGroupFindEntryIndex(appraisalShop(this)->tableGroup, "shop_Kantei2"));
            scrRunOpcodesStub(appraisalShop(this)->script());
            uiSpriteBankApplyPreset(appraisalShop(this)->sprites, 0);
            sysPlaySe(0x79);
            appraisalShop(this)->substate = 3;
        }
        return;
    case 3: {
        UiAnimatedSprite *cursor = &appraisalShop(this)->animation.cursor;
        FUN_00167458(cursor, 0);
        u32 y = vec2GetYInt(cursor);
        u32 x = vec2GetXInt(cursor);
        pointConvertToFloat(appraisalShop(this)->cursorPosition, x, y);
        scrRunOpcodesStub(appraisalShop(this)->script());
        if (uiSpriteGetCompletionState(cursor) != 0) {
            panelSetTarget(appraisalShop(this)->panel, 0);
            appraisalShop(this)->substate = 4;
        }
        return;
    }
    case 4: {
        scrRunOpcodesStub(appraisalShop(this)->script());
        menuSynchronizeFlaggedSelection(reinterpret_cast<MenuSelectionScan *>(appraisalShop(this)->menu), reinterpret_cast<FlaggedMenuList *>(appraisalShop(this)->flaggedValues));
        (*(void (**)(void **, void *))((u8 *)*appraisalShop(this)->menuOwner + 0xC))(appraisalShop(this)->menuOwner, appraisalShop(this)->flaggedValues);
        sub10OwnerStart(appraisalShop(this)->flaggedValues);
        entryDispatchUpdate(appraisalShop(this)->sprites, 2);
        entryDispatchUpdate(appraisalShop(this)->sprites, 0xC);
        s32 total = flaggedValueHolderGetTotal(appraisalShop(this)->flaggedValues);
        screenShowMessage(appraisalShop(this)->messages[total * 3]);
        if (FUN_004d0584() != 0) {
            sendEvent100020E();
            obj04Finish();
            appraisalShop(this)->substate = 5;
            appraisalShop(this)->timer = 0;
            panelSetMode3(appraisalShop(this)->panel, 0);
        }
        return;
    }
    case 5:
        if (messageMainIsIdle() != 0 && panelStateIs0() == 1) {
            FUN_004963f8(appraisalShop(this));
            releaseEntriesB(reinterpret_cast<CountAt5A *>(appraisalShop(this)->menuOwner));
            releaseEntriesA(reinterpret_cast<CountAt30 *>(appraisalShop(this)->menu));
            for (s32 i = 0; i < appraisalShop(this)->touchRegionCount; i++)
                ifTouchRegionRemove();
            appraisalShop(this)->changeState(5);
        }
        return;
    }
}
