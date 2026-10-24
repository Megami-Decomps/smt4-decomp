#include "common.h"

extern "C" void FUN_002fe4dc(void *target);

struct Obj2e82b8 {
    u8 unk00[8];
    f32 value;
    u8 unk0c[0x24];
    void *target;
};

/* Stores a float in the object and hands its target on to FUN_002fe4dc. */
extern "C" void FUN_00363974(Obj2e82b8 *obj, f32 value)
{
    obj->value = value;
    FUN_002fe4dc(obj->target);
}
