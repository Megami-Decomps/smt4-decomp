#include "common.h"

struct Object {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
};

extern "C" void FUN_004f8ef4(Object *object)
{
    object->flags |= 0x1000;
}
