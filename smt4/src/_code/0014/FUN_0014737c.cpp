#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Sets the state's value and marks it dirty. */
void FUN_0014737c(ScalarDirtyWork *state, f32 value)
{
    state->value = value;
    state->flags |= 1;
}

} /* extern "C" */
