/* NON_MATCHING: the type byte is loaded with the registers of the offset the other way round (retail [slot, types], built [types, slot]) */
#include "shard/W4_W4Match2_ScrStack.h"

extern "C" {

extern s32 g_scrIntVars[0x180]; /* script integer variables */
extern f32 g_scrFloatVars[0x180]; /* script float variables */

/* Pops the top value of the script stack and returns it as an int, converting float values and
 * resolving variable references. */
s32 FUN_003d2004(ScriptStack *stack)
{
    s32 slot = --stack->count;
    u8 *types = stack->types;

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
