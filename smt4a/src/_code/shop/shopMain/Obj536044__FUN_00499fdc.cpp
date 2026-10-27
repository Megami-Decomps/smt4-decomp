/* NON_MATCHING: state transition, panel arguments and tail-field offsets recovered; selected-tab/item address evaluation and saved registers still differ. */
#include "common.h"
#include <stddef.h>

extern "C" {

/* One tab's value holder (0x74 bytes; only the count word at +8 is read here). */
typedef struct ShopTab {
    /* 0x00 */ u8 holder[8];
    /* 0x08 */ s32 count;
    /* 0x0C */ u8 unk0c[0x68];
} ShopTab;

/* The shop screen work block (only the fields used here, by their offsets). */
typedef struct ShopMainWork {
    /* 0x00000 */ u8 unk00000[4];
    /* 0x00004 */ s32 state;
    /* 0x00008 */ s32 step;
    /* 0x0000C */ u8 unk0000c[4];
    /* 0x00010 */ s32 previousState;
    /* 0x00014 */ u8 unk00014[4];
    /* 0x00018 */ u8 kind;
    /* 0x00019 */ u8 unk00019[0x173];
    /* 0x0018C */ u32 script;
    /* 0x00190 */ u8 unk00190[0x23C];
    /* 0x003CC */ u8 sprites[0x73C];
    /* 0x00B08 */ u8 entriesA[0x34];
    /* 0x00B3C */ u32 entriesB;
    /* 0x00B40 */ s32 tab;
    /* 0x00B44 */ s32 cursor;
    /* 0x00B48 */ u8 unk00b48[0x18];
    /* 0x00B60 */ ShopTab tabs[9];
    /* 0x00F74 */ u16 items[9][2049];   /* per tab: entries of two halfwords */
    /* 0x09F86 */ u8 unk09f86[0x1602C - 0x9F86];
    /* 0x1602C */ s16 leftRecord;
    /* 0x1602E */ s16 rightRecord;
    /* 0x16030 */ s16 regionCount;
    /* 0x16032 */ u8 unk16032[0xE];
    /* 0x16040 */ u32 returnMode;

    void setState(s32 next)
    {
        previousState = state;
        state = next;
        step = 0;
    }
} ShopMainWork;
typedef char ShopMainWorkOffsets[
    offsetof(ShopMainWork, leftRecord) == 0x1602C &&
    offsetof(ShopMainWork, rightRecord) == 0x1602E &&
    offsetof(ShopMainWork, regionCount) == 0x16030 &&
    offsetof(ShopMainWork, returnMode) == 0x16040 ? 1 : -1];

/* The cursor jump table: for each cursor, the cursor reached by moving left and right. */
typedef struct CursorLink {
    s32 left;
    s32 right;
} CursorLink;

extern CursorLink DAT_00588f78[];

void messageMainSetFlag(s32 flag);
s32 scrRunOpcodesStub(u32 script);
u32 panelSetTarget(u32 target, u8 flag);
s32 FUN_004954e8(ShopMainWork *work);
void messageChoiceShowCurrent(ShopMainWork *work);
s32 FUN_004d0584(void);
s32 flaggedValueHolderGetTotal(void *holder);
s32 FUN_00498408(ShopMainWork *work, u16 item);
s32 FUN_001ba3d0(u16 item);
s32 FUN_0047fe44(u16 item);
void sendEvent100020E(void);
void sendEvent100020F(void);
void sendEvent1000210(void);
void FUN_00498494(ShopMainWork *work, s32 mode);
s32 inputIsQuestRepeatRight(void);
s32 FUN_004d0494(void);
s32 recordGetModeForId(s32 id);
void FUN_00496a0c(ShopMainWork *work, s32 arg);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
void FUN_0038b010(s32 arg);
void uiSpriteBankApplyPreset(void *sprites, s32 preset);
void obj04Finish(void);
void releaseEntriesB(u32 entries);
void releaseEntriesA(void *entries);
void ifTouchRegionRemove(void);
void menuOpenCommandList(ShopMainWork *work);
void buttonHelpSetText(s32 a, u32 color);

/* Updates the shop item list: waits for the intro script, then handles the item filter, moving
 * between tabs, opening the menu or the command list, and the confirmation sounds. */
void _ZN9Obj53604412FUN_00499fdcEv(ShopMainWork *work)
{
    if (work->step != 0) {
        if (work->step == 1 && scrRunOpcodesStub(work->script) == 2) {
            work->setState(5);
            buttonHelpSetText(0, 0xF4F4F4FF);
            messageMainSetFlag(1);
        }
        return;
    }
    messageMainSetFlag(0);
    scrRunOpcodesStub(work->script);
    panelSetTarget(0, 0);
    s32 blocked = FUN_004954e8(work);

    messageChoiceShowCurrent(work);
    if (work->tabs[work->tab].count > 0 && FUN_004d0584() != 0) {
        blocked = 1;
    }
    s32 tab = work->tab;
    s32 total = flaggedValueHolderGetTotal(&work->tabs[tab]);
    u16 item = work->items[tab][total * 2];

    if ((work->tab != 8 || ((FUN_00498408(work, item) == 0 || FUN_001ba3d0(item) > 1) && FUN_0047fe44(item) == 0))
        && blocked != 0) {
        sendEvent100020E();
        FUN_00498494(work, 13);
        return;
    }
    if (inputIsQuestRepeatRight() != 0 || recordGetModeForId(work->leftRecord) == 6) {
        work->cursor = DAT_00588f78[work->cursor].left;
        FUN_00496a0c(work, 1);
        sendEvent1000210();
        return;
    }
    if (FUN_004d0494() != 0 || recordGetModeForId(work->rightRecord) == 6) {
        work->cursor = DAT_00588f78[work->cursor].right;
        FUN_00496a0c(work, 1);
        sendEvent1000210();
        return;
    }
    if (inputIsQuestMenuPressed() != 0) {
        FUN_0038b010(0);
        sendEvent100020F();
        uiSpriteBankApplyPreset(work->sprites, 1);
        obj04Finish();
        if (work->kind == 1) {
            work->returnMode = 1;
        } else {
            work->returnMode = 2;
        }
        releaseEntriesB(work->entriesB);
        releaseEntriesA(work->entriesA);
        for (s32 i = 0; i < work->regionCount; i++) {
            ifTouchRegionRemove();
        }
        work->step = 1;
        return;
    }
    if (inputIsQuestCancelPressed() != 0) {
        sendEvent100020E();
        menuOpenCommandList(work);
        return;
    }
    if (FUN_004d0584() != 0) {
        sendEvent100020F();
    }
}

}
