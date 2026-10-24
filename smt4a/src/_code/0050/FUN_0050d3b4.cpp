#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u8 member[1];
};

extern "C" void *FUN_0050d3b4(Object *object)
{
    return object->member;
}
