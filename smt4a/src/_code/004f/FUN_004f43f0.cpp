#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
extern "C" {
s32 padButtonRepeat(u32 button);
s32 FUN_003e9888(BtlMainStateA *state, s32 category);
void FUN_004f452c(BtlActionSelection *selection, BtlMainStateA *state);

// Navigate the battle action category/variant grid and restore roster display values.
void FUN_004f43f0(BtlActionSelection *selection, BtlMainStateA *state)
{
    bool changed = true;
    if (padButtonRepeat(5)) {
        ++selection->category;
        if (selection->category >= state->flaggedRoster.unk1ED8)
            selection->category = 0;
    } else if (padButtonRepeat(6)) {
        --selection->category;
        if (selection->category < 0)
            selection->category = state->flaggedRoster.unk1ED8 - 1;
    } else if (padButtonRepeat(4)) {
        --selection->variant;
    } else if (padButtonRepeat(3)) {
        ++selection->variant;
    } else {
        changed = false;
    }
    if (changed) {
        s8 variantCount = (s8)FUN_003e9888(state, selection->category);
        if (selection->variant < 0)
            selection->variant = variantCount - 1;
        else if (selection->variant >= variantCount)
            selection->variant = 0;
        FUN_004f452c(selection, state);
    }
    for (s32 index = 0; index < 109; ++index) {
        BattleRosterRecordA *record = &state->roster[index];
        if (record->liveFlags.unk50 & 8)
            record->render.value6c = 0xFFFF;
        else
            record->render.value6c = record->render.value70;
    }
}
}
