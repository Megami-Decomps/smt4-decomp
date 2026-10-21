#include "shard/W5_W5Match2_TimedState.h"
extern "C" {
TimeWords *FUN_001b5acc(TimeWords *time);
TimeWords *FUN_001b57a8(TimeWords *time);
/* Initialize active timing state and capture the current clock. */
TimedState *timeInitializeActiveState(TimedState *state) { state->active=1; TimeWords *time=FUN_001b5acc(&state->time); time[1].low=0; time[1].high=0; TimedState *owner=(TimedState *)((u8 *)time-4); TimeWords now; owner->time=*FUN_001b57a8(&now); return owner; }
}
