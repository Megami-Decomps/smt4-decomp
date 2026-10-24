#include "common.h"

struct Obj0021a374 {
    u8 unk00[0x4];
    s32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_0021a374(Obj0021a374 *obj, s32 value)
{
    obj->value = value;
}
