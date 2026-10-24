#include "common.h"

struct Obj00395e2cInner {
    u8 unk00[0x58];
    u32 value;
};

struct Obj00395e2c {
    u8 unk00[0xc];
    Obj00395e2cInner *inner;
};

extern "C" void FUN_00395b44(Obj00395e2c *obj, f32 value);

/* Sets the inner record's value to 80, then continues in FUN_00395b44 with 0. */
extern "C" void FUN_00395e2c(Obj00395e2c *obj)
{
    Obj00395e2cInner *inner = obj->inner;
    inner->value = 80;
    FUN_00395b44(obj, 0.0f);
}
