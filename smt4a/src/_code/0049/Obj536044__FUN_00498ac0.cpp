#include "classes/Obj536044.h"
#include "common.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/UiSpriteApi.h"

/* The scene as the appraisal shop sees it: the script handle as the script calls take it. */
struct AppraisalShop : public Obj536044 {
    u32 script() const { return reinterpret_cast<u32>(controller); }
};

struct MenuSelectionScan;
struct FlaggedMenuList;
struct CountAt30;
struct CountAt5A;
extern "C" {
void ifTouchRegionRemove(void);
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
s32 inputConfirmPressed(void);
void releaseEntriesA(CountAt30 *menu);
void releaseEntriesB(CountAt5A *owner);
void menuSynchronizeFlaggedSelection(MenuSelectionScan *menu, FlaggedMenuList *values);
s32 messageMainIsIdle(void);
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
        appraisalShop(this)->menuCursors[0] = 0;
        appraisalShop(this)->menuCursors[1] = 0;
        appraisalShop(this)->menuCursors[2] = 0;
        appraisalShop(this)->menuCursorSet[0] = 0;
        appraisalShop(this)->menuCursorSet[1] = 0;
        appraisalShop(this)->quantityIndex = -1;
        appraisalShop(this)->substate = 1;
        return;
    case 1:
        scrRunOpcodesStub(appraisalShop(this)->script());
        appraisalShop(this)->timer++;
        if (appraisalShop(this)->timer >= 10 && (inputConfirmPressed() != 0 || scrRunOpcodesStub(appraisalShop(this)->script()) == 2)) {
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
            uiSpriteBankApplyPreset(&appraisalShop(this)->animation, 0);
            sysPlaySe(0x79);
            appraisalShop(this)->substate = 3;
        }
        return;
    case 3: {
        UiSpriteState *cursor = &appraisalShop(this)->animation.sprites[0];
        uiSpriteSlideFromSide(cursor, 0);
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
        menuSynchronizeFlaggedSelection(reinterpret_cast<MenuSelectionScan *>(appraisalShop(this)->touchSelection), reinterpret_cast<FlaggedMenuList *>(appraisalShop(this)->flaggedValues));
        appraisalShop(this)->view->update(appraisalShop(this)->flaggedValues);
        sub10OwnerStart(appraisalShop(this)->flaggedValues);
        entryDispatchUpdate(&appraisalShop(this)->animation, 2);
        entryDispatchUpdate(&appraisalShop(this)->animation, 0xC);
        s32 total = flaggedValueHolderGetTotal(appraisalShop(this)->flaggedValues);
        screenShowMessage(appraisalShop(this)->messages[total * 3]);
        if (inputConfirmPressed() != 0) {
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
            releaseEntriesB(reinterpret_cast<CountAt5A *>(appraisalShop(this)->view));
            releaseEntriesA(reinterpret_cast<CountAt30 *>(appraisalShop(this)->touchSelection));
            for (s32 i = 0; i < appraisalShop(this)->touchRegionCount; i++)
                ifTouchRegionRemove();
            appraisalShop(this)->changeState(5);
        }
        return;
    }
}
