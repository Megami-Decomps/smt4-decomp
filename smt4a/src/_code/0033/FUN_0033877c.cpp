#include "common.h"

struct Obj33877cInner {
    u8 unk00[0x34];
    s32 value;
};

struct Obj33877c {
    u8 unk00[0x40];
    Obj33877cInner *inner;
};

/* Returns a field of the object's inner record. */
extern "C" s32 FUN_0033877c(Obj33877c *obj)
{
    return obj->inner->value;
}
