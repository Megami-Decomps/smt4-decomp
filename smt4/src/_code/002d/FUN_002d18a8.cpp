#include "common.h"

struct Obj002d18a8 {
    u8 unk00[0x20];
    f32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_002d18a8(Obj002d18a8 *obj, f32 value)
{
    obj->value = value;
}
