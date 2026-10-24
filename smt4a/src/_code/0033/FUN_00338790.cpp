#include "common.h"

struct Object00338790 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 value;
};

extern "C" {

/* Stores the float at 0x20. */
void FUN_00338790(Object00338790 *object, f32 value)
{
    object->value = value;
}

} /* extern "C" */
