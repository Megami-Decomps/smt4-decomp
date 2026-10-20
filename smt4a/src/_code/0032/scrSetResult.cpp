#include "shard/Shard0032.h"

extern "C" {

extern ScriptRef DAT_00588e3c;

/* Stores the script command's result and clears the waiting flag. */
void scrSetResult(u32 value)
{
    ScriptState *state = DAT_00588e3c.state;

    state->unk3B = 0;
    state->result = value;
}

} /* extern "C" */
