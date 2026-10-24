#include "common.h"

struct Obj002ce8a0 {
    u8 unk00[0xbc];
    s32 value;
};

/* Returns a field of the object. */
extern "C" s32 FUN_002ce8a0(Obj002ce8a0 *obj)
{
    return obj->value;
}
