#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 value;
};

extern "C" void FUN_002fe2e0(Object *object, f32 value)
{
    object->value = value;
}
