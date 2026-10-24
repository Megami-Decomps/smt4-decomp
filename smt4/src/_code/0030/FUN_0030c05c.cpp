#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ void *child;
};

extern "C" void FUN_0030c064(void *child);

extern "C" void FUN_0030c05c(Object *object)
{
    FUN_0030c064(object->child);
}
