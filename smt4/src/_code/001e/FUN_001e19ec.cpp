#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ void *child;
};

extern "C" void FUN_001e19c4(void *child);

extern "C" void FUN_001e19ec(Object *object)
{
    if (object->child != NULL) {
        FUN_001e19c4(object->child);
    }
}
