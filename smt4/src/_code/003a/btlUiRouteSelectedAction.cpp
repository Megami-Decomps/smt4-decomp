/* NON_MATCHING: retail keeps target-kind constants in saved registers and compares shifted bitfields; the compiler materializes the extracted field and reuses the target-flag pointer. */
#include "battle/btlUI.h"

struct BattleActionDetails {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 flags;
};

struct BattleItemDetails {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 action;
    /* 0x64 */ u8 unk64[6];
    /* 0x6a */ u8 target;
};

extern "C" {
extern BtlUiGlobals g_btlUi;
void FUN_0028cb40(BtlUiObjC *, s16 *kind, s16 *id);
BattleActionDetails *FUN_002ae164(s32 id);
BattleItemDetails *dataTable08Sub1GetRecord(s32 id);
void FUN_00218480(BtlUiObjC *);
void FUN_0028bfe4(BtlUiObjC *);
s32 playSceneIsFadeInDone(BtlUiObjA *);
s32 recordQueryStateThree(BtlUiObjB *);
void playSceneFadeOutStart(BtlUiObjA *);
void playSceneTimerSubStartReverse(BtlUiObjB *);

// Route a selected action to target selection or directly to the next UI transition.
void btlUiRouteSelectedAction(void)
{
    BtlUi *ui = g_btlUi.ui;
    ui->panelState.requiresTargetSelection = 0;
    s16 kind = 0;
    s16 id = 0;
    BtlUiObjC *selection = &ui->objC;
    FUN_0028cb40(selection, &kind, &id);
    if (kind == 2 || kind == 3) {
        u32 target = (FUN_002ae164(id)->flags & 0x1ff) >> 5;
        if (target == 2 || target == 3 || target == 4)
            ui->panelState.requiresTargetSelection = 1;
    } else if (kind == 8) {
        u16 action = dataTable08Sub1GetRecord(id)->action;
        if (action) {
            u32 target = (FUN_002ae164(action)->flags & 0x1ff) >> 5;
            if (target == 2 || target == 3 || target == 4)
                ui->panelState.requiresTargetSelection = 1;
        } else if ((dataTable08Sub1GetRecord(id)->target & 0x7f) != 1) {
            ui->panelState.requiresTargetSelection = 1;
        }
    }
    if (ui->panelState.requiresTargetSelection) {
        ui->panelState.state = 12;
        FUN_00218480(selection);
    } else {
        ui->panelState.state = 8;
        FUN_0028bfe4(selection);
        ui = g_btlUi.ui;
        if (playSceneIsFadeInDone(&ui->objA) && recordQueryStateThree(&ui->objB)) {
            playSceneFadeOutStart(&ui->objA);
            playSceneTimerSubStartReverse(&ui->objB);
        }
    }
}
}
