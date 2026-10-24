#include "common.h"

struct Ops {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void (*func)(void *target);
};

struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *target;
    /* 0x08 */ Ops *ops;
};

extern "C" void FUN_004ffcb8(Object *object)
{
    object->ops->func(object->target);
}
