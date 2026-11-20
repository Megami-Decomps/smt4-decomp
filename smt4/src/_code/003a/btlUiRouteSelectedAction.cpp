/* NON_MATCHING: control flow and the signed flag addressing match; the global base and constant 1 occupy the opposite callee-saved registers. */
#include "battle/BtlUiGlobal.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/ConsumableRecord.h"

struct BattleActionDetails {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28Low : 5;
    /* 0x28 */ u32 targetKind : 4;
    /* 0x28 */ u32 unk28High : 23;
};

extern "C" {
void btlCommandMenuResolveLayout(BtlUiObjC *, s16 *kind, s16 *id);
void btlCommandBeginTargetSelection(BtlUiObjC *);
void btlUiObjCResetToState27(BtlUiObjC *);
s32 playSceneIsFadeInDone(BtlUiObjA *);
void playSceneFadeOutStart(BtlUiObjA *);
void playSceneTimerSubStartReverse(BtlUiObjB *);

/* Routes a selected action to target selection or directly to the next UI transition. */
void btlUiRouteSelectedAction(void)
{
    BtlUi *ui = g_btlUi.ui;
    ui->panelState.requiresTargetSelection = 0;
    s16 kind = 0;
    s16 id = 0;
    btlCommandMenuResolveLayout(&ui->objC, &kind, &id);
    if (kind == 2 || kind == 3) {
        const BattleActionDetails *details = (const BattleActionDetails *)skillDataFindById(id);
        if (details->targetKind == 2 || details->targetKind == 3 || details->targetKind == 4)
            ui->panelState.requiresTargetSelection = 1;
    } else if (kind == 8) {
        u16 action = itemTableGetItemRecord(id)->skillId;
        if (action) {
            const BattleActionDetails *details = (const BattleActionDetails *)skillDataFindById(action);
            if (details->targetKind == 2 || details->targetKind == 3 || details->targetKind == 4)
                ui->panelState.requiresTargetSelection = 1;
        } else if ((itemTableGetItemRecord(id)->target & 0x7f) != 1) {
            ui->panelState.requiresTargetSelection = 1;
        }
    }
    if (ui->panelState.requiresTargetSelection) {
        ui->panelState.state = 12;
        btlCommandBeginTargetSelection(&ui->objC);
    } else {
        ui->panelState.state = 8;
        btlUiObjCResetToState27(&ui->objC);
        BtlUi *current = g_btlUi.ui;
        if (playSceneIsFadeInDone(&current->objA) && recordQueryStateThree(&current->objB)) {
            playSceneFadeOutStart(&current->objA);
            playSceneTimerSubStartReverse(&current->objB);
        }
    }
}
}
