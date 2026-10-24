#include "common.h"

struct Object {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;
};

extern "C" void FUN_003dc018(Object *object)
{
    object->flags |= 0x1000;
}
