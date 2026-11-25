/* NON_MATCHING: armcc hoists entry-index arithmetic before the prologue and schedules the reflection arguments differently from retail. */
#include "battle/btlMain.h"
#include "battle/BtlEntry.h"
#include "battle/btlAction.h"
#include "battle/BattleHelpers.h"

/* Initializes the selected combatant's model reflection when both indices are valid. */
extern "C" void FUN_00338bd4(BtlMainState *state, s32 index)
{
    if (index < 0) {
        return;
    }

    s16 model = state->entries[index].ids[0];
    if (model < 0) {
        return;
    }

    btlReflectInitKind9(0, 0, (u32)&state->actions[model], 8, 5);
}
