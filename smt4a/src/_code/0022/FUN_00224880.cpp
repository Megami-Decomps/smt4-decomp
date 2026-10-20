#include "common.h"

extern "C" {

struct ScriptState;

u32 scrRunOpcodes(ScriptState *state);

/* Forwards to scrRunOpcodes, the function that follows it. */
u32 FUN_00224880(ScriptState *state)
{
    return scrRunOpcodes(state);
}

} /* extern "C" */
