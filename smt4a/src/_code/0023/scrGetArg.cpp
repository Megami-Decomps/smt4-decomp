#include "shard/W4_W4Match2_ScrStack.h"

extern "C" {

extern s32 g_scrIntVars[0x180]; /* script integer variables */
extern f32 g_scrFloatVars[0x180]; /* script float variables */

/* Returns the script's argument `index` (0 = most recently pushed) as an int, converting float
 * values and resolving variable references. */
s32 scrGetArg(s32 index)
{
    ScriptStack *stack = g_scrContext.stack;
    s32 slot = stack->count - index - 1;

    switch (stack->types[slot]) {
    case SCR_VALUE_INT:
    case SCR_VALUE_RAW:
        return stack->values[slot].i;
    case SCR_VALUE_FLOAT:
        return (s32)stack->values[slot].f;
    case SCR_VALUE_INT_VAR:
        return g_scrIntVars[stack->values[slot].i];
    case SCR_VALUE_FLOAT_VAR:
        return (s32)g_scrFloatVars[stack->values[slot].i];
    default:
        return 0;
    }
}

} /* extern "C" */
