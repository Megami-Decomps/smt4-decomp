#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 value;
};

extern "C" void FUN_00207d64(Object *object)
{
    object->value = 0;
}
