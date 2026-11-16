/* NON_MATCHING: retail's pool is {g_btlAction, 0x3C7} and it keeps *state in r1 and the index in r0; a local pointer to g_btlAction fixes the pool order but not the registers. */
#include "battle/ActionKindSelection.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"

extern "C" {
extern BtlActionGlobals g_btlAction;

/* Default action kind selection: kind 10 when bit 0 of the action flags is set, otherwise 11. */
void battleSetActionKind(BtlMainState **state)
{
    const BtlMainState *view = *state;
    ActionKindThread *thread = &static_cast<ActionKindThread *>(g_btlAction.data)[view->actionState.index];
    if (view->actionState.flags & 1) {
        thread->kind = 10;
    } else {
        thread->kind = 11;
    }
}
}
