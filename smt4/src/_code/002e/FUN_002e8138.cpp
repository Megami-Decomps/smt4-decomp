#include "common.h"

struct Obj2e8138 {
    u8 unk00[0x20];
    f32 x, y, z, w;
};

/* Sets the object's scale to (value, value, value, 1). */
extern "C" void FUN_002e8138(Obj2e8138 *obj, f32 value)
{
    obj->x = value;
    obj->y = value;
    obj->z = value;
    obj->w = 1.0f;
}
