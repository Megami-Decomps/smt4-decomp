/* NON_MATCHING: retail forms the type-array address (stack + 0x20) before decrementing and loads the type with a register offset. */
#include "shard/W4_W4Match2_ScrStack.h"

extern "C" {

/* Pops the top value of the script stack and returns it as an int, converting float values and
 * resolving variable references. */
s32 scrPopInt(ScriptStack *stack)
{
    s32 slot = --stack->count;
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
