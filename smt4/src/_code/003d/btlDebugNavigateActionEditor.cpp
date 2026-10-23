#include "battle/BattleActionHistory.h"
#include "battle/btlAction.h"

struct BattleActionEditorSelection {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 group;
    /* 0x13 */ s8 member;
};
extern "C" {
s32 padIsButtonRepeat(u32 button);
s32 FUN_00336dec(BattleActionHistoryState* battle, s32 group);
void FUN_003d8a18(BattleActionEditorSelection* selection, BattleActionHistoryState* battle);

// Navigate action groups/members and restore each action's editable value.
void btlDebugNavigateActionEditor(BattleActionEditorSelection* selection, BattleActionHistoryState* battle)
{
    bool changed = true;
    if (padIsButtonRepeat(5)) {
        ++selection->group;
        if (selection->group >= battle->groupCount)
            selection->group = 0;
    } else if (padIsButtonRepeat(6)) {
        --selection->group;
        if (selection->group < 0)
            selection->group = battle->groupCount - 1;
    } else if (padIsButtonRepeat(4)) {
        --selection->member;
    } else if (padIsButtonRepeat(3)) {
        ++selection->member;
    } else {
        changed = false;
    }
    if (changed) {
        s8 count = FUN_00336dec(battle, selection->group);
        if (selection->member < 0)
            selection->member = count - 1;
        else if (selection->member >= count)
            selection->member = 0;
        FUN_003d8a18(selection, battle);
    }
    for (s32 index = 0; index < 109; ++index) {
        BtlActionRecord* action = &battle->actions[index];
        if (action->status & 8)
            action->editorRestore.current = 0xFFFF;
        else
            action->editorRestore.current = action->editorRestore.saved;
    }
}
}
