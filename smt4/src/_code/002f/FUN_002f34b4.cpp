#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *child;
};

extern "C" void FUN_0030c064(void *child);

extern "C" void FUN_002f34b4(Object *object)
{
    FUN_0030c064(object->child);
}
