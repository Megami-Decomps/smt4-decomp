/* NON_MATCHING: retail lays the faster-speed swap out right after the speed compare (the equal-speed id test branches back into it) and loads the candidate into r4, the current unit into r3; the build places the shared swap after the id test and swaps r3/r4. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/btlMain.h"

/* Sort populated turn-order slots by descending speed, then ascending unit index. */
extern "C" void battleSortTurnOrder(BtlMainState *state, s32 start)
{
    if (start >= 11) {
        return;
    }
    for (s32 first = start; first < 11; ++first) {
        if (state->turnOrder.order[first] >= 0) {
            for (s32 second = first + 1; second < 12; ++second) {
                s16 candidate = state->turnOrder.order[second];
                if (candidate < 0)
                    continue;
                s16 current = state->turnOrder.order[first];
                s16 currentSpeed = btlUnitTurnSpeed(&state->entries[current].data);
                s16 candidateSpeed = btlUnitTurnSpeed(&state->entries[candidate].data);
                if (currentSpeed < candidateSpeed) {
                    state->turnOrder.order[first] = candidate;
                    state->turnOrder.order[second] = current;
                } else if (currentSpeed == candidateSpeed && state->entries[current].ids[0] > state->entries[candidate].ids[0]) {
                    state->turnOrder.order[first] = candidate;
                    state->turnOrder.order[second] = current;
                }
            }
        }
    }
}
