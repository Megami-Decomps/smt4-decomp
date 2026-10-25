/* NON_MATCHING: event-success block placement and state/selection saved-register assignment differ; named slot setter avoids the hoisted kind-byte offset. */
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

static __inline void battleSetSelectedActionThreadKind(s32 index, u8 kind)
{
    ActionKindThread *thread = &static_cast<ActionKindThread *>(g_btlAction.data)[index];
    thread->kind = kind;
}

/* Prefer a battle event, then command-specific action kinds, before normal selection. */
void FUN_00229b10(BtlMainState **state, const ActionKindSelection *selection)
{
    /* The active skill's record extends past its published prefix; keep a bounded local view. */
    struct SkillActionView {
        u8 unk00[0x4B];
        u8 special;
    };
    if (!FUN_0027e3b8(g_btlEvent)) {
        s32 unit = selection->entry->unitIndex;
        if ((u16)selection->command->kind != 11) {
            if (btlEventSelectTrigger(g_btlEvent, 3, unit, 0)) {
                const BtlMainState *view = *state;
                battleSetSelectedActionThreadKind(view->actionState.index, 24);
                return;
            }
        } else if (btlEventSelectTrigger(g_btlEvent, 7, unit, 0)) {
            const BtlMainState *view = *state;
            battleSetSelectedActionThreadKind(view->actionState.index, 24);
            return;
        }
    }
    bool special = false;
    s16 kind = selection->command->kind;
    if (kind == 3) {
        const SkillActionView *skill = (const SkillActionView *)dataTable40FindById(selection->command->skill);
        if (skill != NULL && skill->special != 0) {
            special = true;
        }
        const BtlMainState *view = *state;
        if (!(view->editorControl.flags & 0x800) && special) {
            battleSetSelectedActionThreadKind(view->actionState.index, 12);
            return;
        }
    } else if (kind == 13) {
        const BtlMainState *view = *state;
        battleSetSelectedActionThreadKind(view->actionState.index, 8);
        return;
    }
    battleSetActionKind(state);
}
}
