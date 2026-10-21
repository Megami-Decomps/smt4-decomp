#include "shard/W5_W5Match2_TimedState.h"
extern "C" {
TimeWords *FUN_002bad5c(TimeWords *time);
TimeWords *resultPairInitialize(TimeWords *time);
/* Initialize active timing state and capture the current clock. */
TimedState *timeInitializeActiveState(TimedState *state) { state->active=1; TimeWords *time=FUN_002bad5c(&state->time); time[1].low=0; time[1].high=0; TimedState *owner=(TimedState *)((u8 *)time-4); TimeWords now; owner->time=*resultPairInitialize(&now); return owner; }
}
