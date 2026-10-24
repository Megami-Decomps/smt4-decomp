#include "common.h"

struct Object002f9f88 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 value;
};

extern "C" {

/* Stores the float at 0x20. */
void FUN_002f9f88(Object002f9f88 *object, f32 value)
{
    object->value = value;
}

} /* extern "C" */
