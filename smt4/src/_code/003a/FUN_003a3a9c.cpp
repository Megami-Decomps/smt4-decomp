/* NON_MATCHING: saved state constants, category-base hoisting, and selected item table address timing differ. */
#include "shard/S1SelectMenu.h"
#include "shard/Shard0049.h"
#include "script/scrScriptProcess.h"
#include "classes/Obj55ca08.h"

extern "C" {
s32 scrRunOpcodesStub(ScriptRunState *);
void FUN_0029ee6c(u32, u32);
void messageTargetSetValue(u32, u32);
u32 FUN_0022fbc0(SelectMenu *);
void FUN_0022fb64(SelectMenu *);
s32 FUN_0027ee9c(void);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *);
u32 FUN_00230e04(const EquipmentMenuItem *);
s32 btlRollClamped(u16, u32);
void FUN_002328b4(void);
void FUN_0022e648(SelectMenu *, s32);
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

void FUN_003a3a9c(SelectMenu *menu)
{
    // The touch bank and final action field extend past SelectMenu's recovered prefix.
    struct MenuViewIV {
        u32 unk00;
        u32 state;
        u32 phase;
        u8 unk0C[0x15C];
        ScriptRunState *process;
        u8 unk16C[0x23C];
        u8 sprites[0x480];
        u8 controls[0x34];
        MenuView *handler;
        s32 category;
        u8 unk864[0x1C];
        EquipmentMenuCursor cursors[9];
        EquipmentMenuPage pages[9];
        u8 unk9CA6[0xC0AA];
        s16 touchCount;
        u8 unk15D52[0xE];
        u32 action;
    };
    typedef char MenuViewIVOffsets[offsetof(MenuViewIV, category) == 0x860 &&
        offsetof(MenuViewIV, pages) == 0xC94 && offsetof(MenuViewIV, touchCount) == 0x15D50 &&
        offsetof(MenuViewIV, action) == 0x15D60 ? 1 : -1];
    MenuViewIV *work = reinterpret_cast<MenuViewIV *>(menu);
    if (work->phase != 0) {
        if (work->phase == 1 && scrRunOpcodesStub(work->process) == 2) {
            FUN_0029ee6c(0, 0x323232FF);
            work->state = 3;
            work->phase = 0;
        }
        return;
    }
    scrRunOpcodesStub(work->process);
    messageTargetSetValue(0, 0);
    u32 accepted = FUN_0022fbc0(menu);
    FUN_0022fb64(menu);
    if (reinterpret_cast<MenuList *>(&work->cursors[work->category])->marked > 0 && FUN_0027ee9c())
        accepted = 1;
    s32 category = work->category;
    u32 index = flaggedValueHolderGetTotal(&work->cursors[category].holder);
    EquipmentMenuItem *item = &work->pages[category].items[index];
    if ((work->category == 8 || btlRollClamped(item->id, FUN_00230e04(item))) && accepted) {
        FUN_002328b4();
        FUN_0022e648(menu, 10);
        return;
    }
    if (inputIsQuestMenuPressed()) {
        work->action = 0;
        FUN_00230df0(0);
        FUN_00232848();
        FUN_00233240(work->sprites, 1);
        messageMainFinishWindow();
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
