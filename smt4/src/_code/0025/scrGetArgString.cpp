#include "shard/W4_W4Match2_ScrStack.h"

extern "C" {

/* Returns the script's argument `index` (0 = most recently pushed) when it is a string (type 5), else 0. */
u32 scrGetArgString(s32 index)
{
    ScriptStack *stack = g_scrContext.stack;
    s32 slot = stack->count - index - 1;

    return stack->types[slot] != 5 ? 0 : stack->values[slot].i;
}

} /* extern "C" */
