/* NON_MATCHING: target-kind compare now matches retail (bitfield); retail shares one `requiresTargetSelection = 1` store between all arms and reads the flag back through a pool-constant offset, ours duplicates the store and reuses the flag pointer. */
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

// Route a selected action to target selection or directly to the next UI transition.
void btlUiRouteSelectedAction(void)
{
    BtlUi *ui = g_btlUi.ui;
    ui->panelState.requiresTargetSelection = 0;
    s16 kind = 0;
    s16 id = 0;
    BtlUiObjC *selection = &ui->objC;
    btlCommandMenuResolveLayout(selection, &kind, &id);
    if (kind == 2 || kind == 3) {
        BattleActionDetails *details = reinterpret_cast<BattleActionDetails *>(skillDataFindById(id));
        if (details->targetKind == 2 || details->targetKind == 3 || details->targetKind == 4)
            ui->panelState.requiresTargetSelection = 1;
    } else if (kind == 8) {
        u16 action = itemTableGetItemRecord(id)->skillId;
        if (action) {
            BattleActionDetails *details = reinterpret_cast<BattleActionDetails *>(skillDataFindById(action));
            if (details->targetKind == 2 || details->targetKind == 3 || details->targetKind == 4)
                ui->panelState.requiresTargetSelection = 1;
        } else if ((itemTableGetItemRecord(id)->target & 0x7f) != 1) {
            ui->panelState.requiresTargetSelection = 1;
        }
    }
    if (ui->panelState.requiresTargetSelection) {
        ui->panelState.state = 12;
        btlCommandBeginTargetSelection(selection);
    } else {
        ui->panelState.state = 8;
        btlUiObjCResetToState27(selection);
        ui = g_btlUi.ui;
        if (playSceneIsFadeInDone(&ui->objA) && recordQueryStateThree(&ui->objB)) {
            playSceneFadeOutStart(&ui->objA);
            playSceneTimerSubStartReverse(&ui->objB);
        }
    }
}
}
