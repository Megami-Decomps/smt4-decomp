#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ f32 value;
};

extern "C" void FUN_002b331c(Object *object, f32 value)
{
    object->value = value;
}
