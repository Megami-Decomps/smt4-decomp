#include "common.h"

struct Obj003939dc {
    u8 unk00[0x30];
    void *target;
};

extern "C" void FUN_003b2508(void *target, const f32 *value);

/* Passes the value on to the object's target. */
extern "C" void FUN_003939dc(Obj003939dc *obj, const f32 *value)
{
    FUN_003b2508(obj->target, value);
}
