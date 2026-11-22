/* NON_MATCHING: 14 lines: only the guard (kind 8) store differs: retail loads the battle state and the slot index into
 * r2 and the slot size into r0 (the build swaps them). */
#include "battle/ActionKindSelection.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "gamedata/SkillDataLookup.h"
#include "battle/BtlGlobals.h"

extern "C" {
struct BattleEvent;
extern BattleEvent *g_btlEvent;
s32 isEntryUsable(BattleEvent *); // declcheck: local (the shared declaration in code/Code0027.h does not compile here: argument of type "BattleEvent *" is incompatible with parameter of type "int *")
s32 btlEventSelectTrigger(BattleEvent *, s32, s32, s32);
void battleSetActionKind(BtlMainState **);

/* Sets the action kind of the battle's current unit slot. */
static __inline void battleSetUnitActionKind(const BtlMainState *view, u8 kind)
{
    ActionKindThread *thread = &reinterpret_cast<ActionKindThread *>(g_btlAction.slots)[view->actionState.index];
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
    if (!isEntryUsable(g_btlEvent)) {
        if ((u16)selection->command->kind == 11) {
            if (btlEventSelectTrigger(g_btlEvent, 7, selection->entry->unitIndex, 0)) {
                const BtlMainState *view = *state;
                battleSetUnitActionKind(view, 24);
                return;
            }
        } else if (btlEventSelectTrigger(g_btlEvent, 3, selection->entry->unitIndex, 0)) {
            const BtlMainState *view = *state;
            battleSetUnitActionKind(view, 24);
            return;
        }
    }
    bool special = false;
    if (selection->command->kind == 3) {
        const SkillActionView *skill = (const SkillActionView *)skillDataFindById(selection->command->skill);
        if (skill != NULL && skill->special != 0) {
            special = true;
        }
        const BtlMainState *view = *state;
        if (!(view->editorControl.flags & 0x800) && special) {
            battleSetUnitActionKind(view, 12);
            return;
        }
    } else if (selection->command->kind == 13) {
        const BtlMainState *view = *state;
        battleSetUnitActionKind(view, 8);
        return;
    }
    battleSetActionKind(state);
}
}
