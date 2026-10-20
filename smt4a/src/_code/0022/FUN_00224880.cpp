#include "common.h"

extern "C" {

struct ScriptState;

u32 FUN_00224884(ScriptState *state);

/* Forwards to FUN_00224884, the function that follows it. */
u32 FUN_00224880(ScriptState *state)
{
    return FUN_00224884(state);
}

} /* extern "C" */
