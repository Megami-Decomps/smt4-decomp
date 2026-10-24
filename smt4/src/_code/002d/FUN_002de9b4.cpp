#include "common.h"

struct Object002de9b4 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 x;
    /* 0x24 */ f32 y;
    /* 0x28 */ f32 z;
    /* 0x2c */ f32 w;
};

extern "C" {

/* Sets the first three floats at 0x20 to the value and clears the fourth. */
void FUN_002de9b4(Object002de9b4 *object, f32 value)
{
    object->x = value;
    object->y = value;
    object->z = value;
    object->w = 0.0f;
}

} /* extern "C" */
