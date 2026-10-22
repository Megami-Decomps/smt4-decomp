/* NON_MATCHING: ARMCC folds record-field addresses rather than retaining retail's subobject base; sort frame/register allocation differs. */
#include "shard/W4_W4Match2_BtlUnits.h"

/* Sort populated turn-order slots by descending speed, then ascending unit index. */
extern "C" void battleSortTurnOrder(TurnOrderState *state, s32 start)
{
    if (start >= 11) {
        return;
    }
    for (s32 first = start; first < 11; ++first) {
        if (state->order[first] >= 0) {
            for (s32 second = first + 1; second < 12; ++second) {
                s16 candidate = state->order[second];
                if (candidate >= 0) {
                    s16 current = state->order[first];
                    const TurnOrderUnit *currentUnit = &state->units[current];
                    const TurnOrderUnit *candidateUnit = &state->units[candidate];
                    s16 currentSpeed = currentUnit->speed + currentUnit->speedBonus;
                    s16 candidateSpeed = candidateUnit->speed + candidateUnit->speedBonus;
                    if (currentSpeed < candidateSpeed
                        || (currentSpeed == candidateSpeed && candidateUnit->tieIndex < currentUnit->tieIndex)) {
                        state->order[first] = candidate;
                        state->order[second] = current;
                    }
                }
            }
        }
    }
}
