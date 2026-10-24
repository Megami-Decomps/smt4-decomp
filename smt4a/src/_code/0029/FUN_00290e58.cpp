#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ void *child;
};

extern "C" void FUN_00290c10(void *child);

extern "C" void FUN_00290e58(Object *object)
{
    if (object->child != NULL) {
        FUN_00290c10(object->child);
    }
}
