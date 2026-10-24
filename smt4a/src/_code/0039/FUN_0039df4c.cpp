#include "common.h"

struct ReflectOffset187 {
    f32 x;
    f32 y;
};

extern "C" {
f32 scriptReadStackValueAsFloat(s32 index);
s32 scrGetArg(u32 index);
void *FUN_004fea44(s32 id, u32 target, u16 value48, u32 value28, const char *name, u32 value50, s32 enabled,
                   ReflectOffset187 offset);

/* Script command: starts an action-reflect record with the offset read from stack values 0 and 1 and the flag from argument 2. */
s32 FUN_0039df4c(void)
{
    ReflectOffset187 offset;
    offset.x = scriptReadStackValueAsFloat(0);
    offset.y = scriptReadStackValueAsFloat(1);
    FUN_004fea44(0, 0, 7, 6, NULL, scrGetArg(2) != 0, 1, offset);
    return 1;
}
}
