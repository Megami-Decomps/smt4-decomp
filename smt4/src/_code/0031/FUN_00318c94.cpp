#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ void *child;
};

extern "C" void FUN_00318c9c(void *child);

extern "C" void FUN_00318c94(Object *object)
{
    FUN_00318c9c(object->child);
}
