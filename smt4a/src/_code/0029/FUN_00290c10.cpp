#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
};

extern "C" void FUN_00290c10(Object *object)
{
    object->value = 0;
}
