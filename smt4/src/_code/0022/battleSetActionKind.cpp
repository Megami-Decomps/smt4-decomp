/* NON_MATCHING: written with FUN_00229b10's slot setter, the pool order and instructions match; only the registers differ:
 * retail loads *state into r1 and the index/product into r0 (this build: r0 and r1). */
#include "battle/ActionKindSelection.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Sets the selected action thread's kind (the same setter FUN_00229b10 inlines). */
static __inline void battleSetSelectedActionThreadKind(s32 index, u8 kind)
{
    ActionKindThread *thread = &reinterpret_cast<ActionKindThread *>(g_btlAction.slots)[index];
    thread->kind = kind;
}

/* Default action kind selection: kind 10 when bit 0 of the action flags is set, otherwise 11. */
void battleSetActionKind(BtlMainState **state)
{
    if ((*state)->actionState.flags & 1) {
        battleSetSelectedActionThreadKind((*state)->actionState.index, 10);
    } else {
        battleSetSelectedActionThreadKind((*state)->actionState.index, 11);
    }
}
}
