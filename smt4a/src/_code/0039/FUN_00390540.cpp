#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x9C];
    /* 0x9C */ void *child;
};

extern "C" void FUN_0039edfc(void *child);

extern "C" void FUN_00390540(Object *object)
{
    FUN_0039edfc(object->child);
}
