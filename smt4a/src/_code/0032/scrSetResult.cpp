#include "shard/Shard0032.h"

extern "C" {

extern ScriptRef g_scrContext;

/* Stores the script command's result and clears the waiting flag. */
void scrSetResult(u32 value)
{
    ScriptState *state = g_scrContext.state;

    state->unk3B = 0;
    state->result = value;
}

} /* extern "C" */
