/* NON_MATCHING: only difference is the compiler hoisting &work->category (add r7,r5,#2144) and reusing it for the three category reads; retail reloads from r5+0x860 each time (same as FUN_003a3a9c) */
#include "shard/S1SelectMenu.h"
#include "shard/Shard0049.h"
#include "script/scrScriptProcess.h"
#include "classes/Obj55ca08.h"

extern "C" {
s32 scrRunOpcodesStub(ScriptRunState *);
void FUN_0029ee6c(u32, u32);
void messageTargetSetValue(u32, u32);
void messageMainSetEnabled(s32);
void FUN_0022fb64(SelectMenu *);
s32 FUN_0027ee9c(void);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *);
s32 FUN_00230b90(SelectMenu *, u16);
s32 FUN_0028fb3c(u16);
void FUN_002328b4(void);
void FUN_0022e648(SelectMenu *, s32);
s32 inputIsQuestRepeatRight(void);
s32 inputIsQuestRepeatLeft(void);
s32 ifTouchGetSelectionModeForRegion(s32);
void FUN_0022fcb8(SelectMenu *, s32);
void FUN_0022faf8(void);
s32 inputIsQuestMenuPressed(void);
void FUN_00230df0(u32);
void FUN_00232848(void);
void FUN_00233240(void *, u32);
void messageMainFinishWindow(void);
void ifTouchRegionClearAll(MenuView *);
void FUN_00233818(Obj55ca08 *);
void ifTouchRegionRemove(void);
s32 inputIsQuestCancelPressed(void);
void FUN_0022fa2c(SelectMenu *);

/* Pair of neighbouring category ids, indexed by category. */
struct CategoryLink {
    s32 next;
    s32 previous;
};
extern CategoryLink DAT_0044e020[];

void FUN_003a3c7c(SelectMenu *menu)
{
    // The touch bank and final action field extend past SelectMenu's recovered prefix.
    struct MenuViewIV {
        u32 unk00;
        u32 state;
        u32 phase;
        u8 unk0C[8];
        u8 variant;
        u8 unk15[0x153];
        ScriptRunState *process;
        u8 unk16C[0x23C];
        u8 sprites[0x480];
        u8 controls[0x34];
        MenuView *handler;
        s32 category;
        s32 selection;
        u8 unk868[0x18];
        EquipmentMenuCursor cursors[9];
        EquipmentMenuPage pages[9];
        u8 unk9CA6[0xC0A6];
        s16 touchNext;
        s16 touchPrevious;
        s16 touchCount;
        u8 unk15D52[0xE];
        u32 action;
    };
    typedef char MenuViewIVOffsets[offsetof(MenuViewIV, category) == 0x860 &&
        offsetof(MenuViewIV, variant) == 0x14 && offsetof(MenuViewIV, process) == 0x168 &&
        offsetof(MenuViewIV, pages) == 0xC94 && offsetof(MenuViewIV, touchNext) == 0x15D4C &&
        offsetof(MenuViewIV, touchCount) == 0x15D50 && offsetof(MenuViewIV, action) == 0x15D60 ? 1 : -1];
    MenuViewIV *work = reinterpret_cast<MenuViewIV *>(menu);
    if (work->phase != 0) {
        if (work->phase == 1 && scrRunOpcodesStub(work->process) == 2) {
            work->state = 3;
            work->phase = 0;
            FUN_0029ee6c(0, 0x323232FF);
            messageMainSetEnabled(1);
        }
        return;
    }
    messageMainSetEnabled(0);
    scrRunOpcodesStub(work->process);
    messageTargetSetValue(0, 0);
    u32 accepted = FUN_0022fbc0(menu);
    FUN_0022fb64(menu);
    if (work->cursors[work->category].range.count > 0 && FUN_0027ee9c())
        accepted = 1;
    s32 category = work->category;
    EquipmentMenuItem *items = work->pages[category].items;
    u32 index = flaggedValueHolderGetTotal(&work->cursors[category].holder);
    u16 id = items[index].id;
    if ((work->category != 8 || FUN_00230b90(menu, id) == 0 || FUN_0028fb3c(id) > 1) && accepted) {
        FUN_002328b4();
        FUN_0022e648(menu, 11);
        return;
    }
    if (inputIsQuestRepeatRight() || ifTouchGetSelectionModeForRegion(work->touchNext) == 6) {
        work->selection = DAT_0044e020[work->selection].next;
        FUN_0022fcb8(menu, 1);
        FUN_0022faf8();
        return;
    }
    if (inputIsQuestRepeatLeft() || ifTouchGetSelectionModeForRegion(work->touchPrevious) == 6) {
        work->selection = DAT_0044e020[work->selection].previous;
        FUN_0022fcb8(menu, 1);
        FUN_0022faf8();
        return;
    }
    if (inputIsQuestMenuPressed()) {
        FUN_00230df0(0);
        FUN_00232848();
        FUN_00233240(work->sprites, 1);
        messageMainFinishWindow();
        if (work->variant == 1) {
            work->action = 1;
        } else {
            work->action = 2;
        }
        ifTouchRegionClearAll(work->handler);
        FUN_00233818(reinterpret_cast<Obj55ca08 *>(work->controls));
        for (s32 i = 0; i < work->touchCount; ++i)
            ifTouchRegionRemove();
        work->phase = 1;
        return;
    }
    if (inputIsQuestCancelPressed()) {
        FUN_002328b4();
        FUN_0022fa2c(menu);
    }
}
}
