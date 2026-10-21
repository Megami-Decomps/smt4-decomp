#include "common.h"
struct ScriptHolder;

extern "C" {

extern u32 scriptHolderUpdate(ScriptHolder *holder);

/* Forwards to the function that follows it in the binary. */
u32 scriptHolderUpdateForward(ScriptHolder *holder)
{
    return scriptHolderUpdate(holder);
}

} /* extern "C" */
