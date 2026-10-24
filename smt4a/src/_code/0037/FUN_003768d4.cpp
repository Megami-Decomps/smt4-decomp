#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *child;
};

extern "C" void FUN_0039edfc(void *child);

extern "C" void FUN_003768d4(Object *object)
{
    FUN_0039edfc(object->child);
}
