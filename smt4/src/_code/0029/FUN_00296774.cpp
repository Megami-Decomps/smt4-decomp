/* NON_MATCHING: the compare against the slot table's count is emitted as `cmp r0, r4; bcc` where retail has `cmp r4, r0; bhi` (operands swapped, same condition); everything else is identical. */
#include "common.h"

extern "C" {

typedef struct MenuTask {
    /* 0x0000 */ u8 unk0000[0x352C];
    /* 0x352C */ s32 state;
    /* 0x3530 */ s32 prevState;
    /* 0x3534 */ u32 unk3534;
    /* 0x3538 */ u8 unk3538[4];
    /* 0x353C */ u32 unk353C;
    /* 0x3540 */ u8 unk3540[4];
    /* 0x3544 */ u32 unk3544;
    /* 0x3548 */ u8 unk3548[0x20];
    /* 0x3568 */ u32 script;
    /* 0x356C */ u8 unk356C[0x10];
    /* 0x357C */ s16 touchRegionCount;
} MenuTask;

extern u32 FUN_00292bf0(void);
extern u32 *gameGetSlotTable(void);
extern int gameReleaseDataReference(void);
extern int statusDownSwitchTab(int);
extern int FUN_00295214(int);
extern int scrScriptProcessStartEntry(u32 script, int entry);
extern int gameGlobalsSetSelected(int);
extern int FUN_0029c4c8(int);
extern int FUN_0029dfc0(int);
extern int FUN_0029e874(int);
extern int FUN_0029ee6c(int, u32);
extern int FUN_002b827c(int);
extern int buttonHelpSetPreset(u8 preset);
extern int ifTouchRegionRemove(void);

/* Switches the menu to `newState`: clears its touch regions, shows that state's button help and, for state 0x14, resolves the follow-up. */
void FUN_00296774(MenuTask *task, int newState)
{
    u32 preset;
    u32 value;
    int i;

    task->prevState = task->state;
    task->state = newState;
    task->unk3534 = 0;
    task->unk353C = 0;
    task->unk3544 = 0;
    for (i = 0; i < task->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    task->touchRegionCount = 0;
    switch (task->state) {
    case 1:
        preset = 0x62;
        break;
    case 10:
        preset = 0x9E;
        break;
    case 11:
        preset = 0x65;
        break;
    case 13:
        preset = 0x66;
        break;
    case 14:
        preset = 0xDF;
        break;
    case 15:
        preset = 0x68;
        break;
    case 16:
        preset = 0x6A;
        break;
    case 17:
        preset = 0xE1;
        break;
    case 18:
        preset = 100;
        break;
    default:
        goto done;
    }
    FUN_0029ee6c(0, 0x323232FF);
    buttonHelpSetPreset(preset);
done:
    if (task->state != 0x14) {
        return;
    }
    gameGlobalsSetSelected(0);
    statusDownSwitchTab(0);
    FUN_0029dfc0(0);
    FUN_0029e874(0);
    FUN_0029c4c8(0);
    gameReleaseDataReference();
    value = FUN_00292bf0();
    if (value != 0 && value <= *gameGetSlotTable()) {
        task->state = 0x13;
        buttonHelpSetPreset(0x90);
        scrScriptProcessStartEntry(task->script, 5);
        return;
    }
    FUN_00295214(0);
    FUN_002b827c(3);
}

} /* extern "C" */
