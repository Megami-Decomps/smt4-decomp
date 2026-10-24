/* NON_MATCHING: event-result branch sharing and action-thread field-address hoisting differ. */
#include "battle/ActionKindSelection.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"

extern "C" {
struct BattleEvent;
extern BattleEvent *g_btlEvent;
extern BtlActionGlobals g_btlAction;
s32 FUN_0027e3b8(BattleEvent *);
s32 btlEventSelectTrigger(BattleEvent *, s32, s32, s32);
const void *dataTable40FindById(s32);
void battleSetActionKind(BtlMainState **);

/* Prefer a battle event, then command-specific action kinds, before normal selection. */
void FUN_00229b10(BtlMainState **state, const ActionKindSelection *selection)
{
    /* These fields extend beyond the shared battle-state and active-skill
       prefixes; keep bounded local views rather than growing those types. */
    struct ActionStateView {
        u8 unk0000[0x84];
        s32 currentAction;
        u8 unk0088[0x4420];
        u32 flags;
    };
    struct SkillActionView {
        u8 unk00[0x4B];
        u8 special;
    };
    typedef char ActionStateOffsets[
        offsetof(ActionStateView, currentAction) == 0x84 &&
        offsetof(ActionStateView, flags) == 0x44A8 ? 1 : -1];
    if (!FUN_0027e3b8(g_btlEvent)) {
        s32 unit = selection->entry->unitIndex;
        s32 triggered;
        if ((u16)selection->command->kind != 11) {
            triggered = btlEventSelectTrigger(g_btlEvent, 3, unit, 0);
        } else {
            triggered = btlEventSelectTrigger(g_btlEvent, 7, unit, 0);
        }
        if (triggered) {
            const ActionStateView *view = (const ActionStateView *)*state;
            ((ActionKindThread *)g_btlAction.data)[view->currentAction].kind = 24;
            return;
        }
    }
    s16 kind = selection->command->kind;
    if (kind == 3) {
        const SkillActionView *skill = (const SkillActionView *)dataTable40FindById(selection->command->skill);
        bool special = skill != NULL && skill->special != 0;
        const ActionStateView *view = (const ActionStateView *)*state;
        if (!(view->flags & 0x800) && special) {
            ((ActionKindThread *)g_btlAction.data)[view->currentAction].kind = 12;
            return;
        }
    } else if (kind == 13) {
        const ActionStateView *view = (const ActionStateView *)*state;
        ((ActionKindThread *)g_btlAction.data)[view->currentAction].kind = 8;
        return;
    }
    battleSetActionKind(state);
}
}
