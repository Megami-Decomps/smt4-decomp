/* NON_MATCHING: retail uses push {r2, r3, r4, lr} where the compiled block uses push {r0, r1, r2, r3, lr}. */
#include "common.h"

extern "C" {

void FUN_00308168(u32* value, u32 context, const u32* source);

void FUN_0013232a(u32 context, const u32* source, u32, u32 value)
{
    u32 sourceValue = *source;
    FUN_00308168(&value, context, &sourceValue);
}

}
