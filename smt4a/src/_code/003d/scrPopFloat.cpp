/* NON_MATCHING: the four-way switch on the value type is compiled as a compare chain; retail uses a jump table (and shares the int-to-float conversion of cases 0 and 2, loading 0.0f first). */
#include "shard/W4_W4Match2_ScrStack.h"

extern "C" {

extern s32 DAT_0061889c[0x180]; /* script integer variables (g_scrIntVars) */
extern f32 DAT_00618e9c[0x180]; /* script float variables (g_scrFloatVars) */

/* Pops the top value of the script stack and returns it as a float, converting int values and
 * resolving variable references. */
f32 scrPopFloat(ScriptStack *stack)
{
    u8 *types = stack->types;
    s32 slot = --stack->count;

    switch (types[slot]) {
    case SCR_VALUE_INT:
        return (f32)stack->values[slot].i;
    case SCR_VALUE_FLOAT:
        return stack->values[slot].f;
    case SCR_VALUE_INT_VAR:
        return (f32)DAT_0061889c[stack->values[slot].i];
    case SCR_VALUE_FLOAT_VAR:
        return DAT_00618e9c[stack->values[slot].i];
    default:
        return 0.0f;
    }
}

} /* extern "C" */
