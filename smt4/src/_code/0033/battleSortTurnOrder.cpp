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
                if (state->turnOrder.order[second] < 0)
                    continue;
                s16 currentSpeed = btlUnitTurnSpeed(&state->entries[state->turnOrder.order[first]].data);
                s16 candidateSpeed = btlUnitTurnSpeed(&state->entries[state->turnOrder.order[second]].data);
                if (currentSpeed < candidateSpeed) {
                    s16 swap = state->turnOrder.order[first];
                    state->turnOrder.order[first] = state->turnOrder.order[second];
                    state->turnOrder.order[second] = swap;
                } else {
                    if (currentSpeed != candidateSpeed)
                        continue;
                    if (state->entries[state->turnOrder.order[first]].ids[0] <= state->entries[state->turnOrder.order[second]].ids[0])
                        continue;
                    s16 swap = state->turnOrder.order[first];
                    state->turnOrder.order[first] = state->turnOrder.order[second];
                    state->turnOrder.order[second] = swap;
                }
            }
        }
    }
}
