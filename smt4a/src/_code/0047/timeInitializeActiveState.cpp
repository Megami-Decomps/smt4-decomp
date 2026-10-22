#include "shard/W5_W5Match2_TimedState.h"
extern "C" {
TimeWords *_ZN18WindowStatusResultC1Ev(TimeWords *time);
TimeWords *_ZN18WindowStatusResultC1Ej(TimeWords *time);
/* Initialize active timing state and capture the current clock. */
TimedState *timeInitializeActiveState(TimedState *state) { state->active=1; TimeWords *time=_ZN18WindowStatusResultC1Ev(&state->time); time[1].low=0; time[1].high=0; TimedState *owner=(TimedState *)((u8 *)time-4); TimeWords now; owner->time=*_ZN18WindowStatusResultC1Ej(&now); return owner; }
}
