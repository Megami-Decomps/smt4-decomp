#include "common.h"

struct Obj00304188 {
    u8 unk00[0x20];
    f32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_00304188(Obj00304188 *obj, f32 value)
{
    obj->value = value;
}
