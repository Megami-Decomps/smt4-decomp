/* NON_MATCHING: type-array pointer recovers address timing; ldrb base/index register order remains reversed. */
#include "shard/W4_W4Match2_ScrStack.h"

extern "C" {

/* Pops the top value of the script stack and returns it as an int, converting float values and
 * resolving variable references. */
s32 scrPopInt(ScriptStack *stack)
{
    const u8 *types = stack->types;
    s32 slot = --stack->count;
    switch (types[slot]) {
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
