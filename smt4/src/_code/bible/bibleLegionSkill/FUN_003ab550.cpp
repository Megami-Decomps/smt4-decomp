/* NON_MATCHING: only the rectangle-pointer register (retail reuses r1 after the vtable store; build picks r2) and the order of the two controller stores differ. */
#include "classes/Obj422448.h"
#include "classes/Obj42242c.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

/* The screen's state beyond the shared view base that the start routine initializes. */
struct BibleLegionSkillView {
    /* 0x000 */ void *vtable;
    /* 0x004 */ u32 job;
    /* 0x008 */ u32 drawTask;
    /* 0x00C */ u32 fadeTask;
    /* 0x010 */ u8 unk010[4];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 stateArg;
    /* 0x01C */ u8 unk01C[0x78];
    /* 0x094 */ u8 flag94;
    /* 0x095 */ u8 unk095[0x33];
    /* 0x0C8 */ u8 rectangle[0x14];
    /* 0x0DC */ u8 timers[0x480];
    /* 0x55C */ u8 listView[0x10];
    /* 0x56C */ u8 listReady;
    /* 0x56D */ u8 unk56D[0x23];
    /* 0x590 */ ObjBase3c2ef0 *controller;
    /* 0x594 */ u8 unk594[0x14];
    /* 0x5A8 */ u8 entries[0xA008];
    /* 0xA5B0 */ u8 selectedSlot;
};
typedef char BibleLegionSkillViewLayout[
    offsetof(BibleLegionSkillView, flag94) == 0x94 && offsetof(BibleLegionSkillView, rectangle) == 0xC8 &&
    offsetof(BibleLegionSkillView, listReady) == 0x56C && offsetof(BibleLegionSkillView, controller) == 0x590 &&
    offsetof(BibleLegionSkillView, selectedSlot) == 0xA5B0 ? 1 : -1];

extern "C" {
extern u32 *DAT_0043d9f8;

void entryTableClear(void *table);
void spriteTable22Acquire(void);
u32 taskCreateDraw(const char *name, s32 priority, u32 first, u32 second, void *update, void *end, void *work, u32 parent);
void rectangleInitializeSelection(void *rectangle, s32 width, s32 a, s32 b);
void uiInitializeEightTimerSet(void *timers);
void FUN_00233240(void *timers, s32 index);
void FUN_00233670(void *list, s32 a, s32 b, s32 count);
void FUN_0029ee6c(s32 a, u32 color);
void FUN_003ace14(void);
void uiFreeCallbackContext(void);
void FUN_003ad068(void);
void uiCallbackFinishDraw(void);
void FUN_003ad0e0(void);
}

/* Starts the legion skill screen: clears its list, spawns its calculation process and two draw tasks, and
 * opens the controller window on the rectangle before building the skill list. */
extern "C" void FUN_003ab550(Obj422448 *screen)
{
    BibleLegionSkillView *view = reinterpret_cast<BibleLegionSkillView *>(screen);
    view->state = 0;
    view->stateArg = 0;
    view->flag94 = 0;
    view->selectedSlot = 0;
    entryTableClear(view->entries);
    screen->openScreen();
    spriteTable22Acquire();

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\bible\\bibleLegionSkill.cpp", 173);
    u32 **work = static_cast<u32 **>(asdMemAlloc(0x100, 0x100, 0, 4, 1));
    DAT_0043d9f8 = reinterpret_cast<u32 *>(work);
    *work = reinterpret_cast<u32 *>(screen);
    view->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("BIBLE LEGIONSKILL CALC"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>((void *)FUN_003ace14), reinterpret_cast<AsdProcFunc>((void *)uiFreeCallbackContext), reinterpret_cast<u32>(work));
    view->drawTask = taskCreateDraw("BIBLE LEGIONSKILL UP", 0x6F, 1, 0, (void *)FUN_003ad068, NULL, DAT_0043d9f8, view->job);
    view->fadeTask = taskCreateDraw("BIBLE LEGIONSKILL DOWN", 0xE6, 1, 0, (void *)uiCallbackFinishDraw, NULL, DAT_0043d9f8, view->job);
    rectangleInitializeSelection(view->rectangle, 0x140, 0, 0x1D);
    uiInitializeEightTimerSet(view->timers);
    FUN_00233240(view->timers, 0);
    FUN_00233240(view->timers, 1);
    // The allocation owner is not initialized in the retail code.
    void *allocationOwner;
    Obj42242c *controller = new (allocationOwner) Obj42242c;
    view->controller = controller;
    controller->rectangle = view->rectangle;
    screen->buildList();
    FUN_00233670(view->listView, 0x1D, 0x40E, 10);
    view->listReady = 1;
    FUN_0029ee6c(0, 0x323232FF);
    FUN_003ad0e0();
    view->state = 1;
    view->stateArg = 0;
}
