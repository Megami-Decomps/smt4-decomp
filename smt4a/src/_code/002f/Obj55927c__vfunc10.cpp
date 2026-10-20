#include "classes/Obj55927c.h"

extern "C" {
u32 FUN_0030d450(u8 *payload);
void FUN_0030d48e(Obj55927c *object, u32 value);
}

/* Converts the argument's payload with FUN_0030d450 and hands the result to FUN_0030d48e. */
void Obj55927c::vfunc10(Obj55927cArg *arg)
{
    FUN_0030d48e(this, FUN_0030d450(arg->payload));
}
