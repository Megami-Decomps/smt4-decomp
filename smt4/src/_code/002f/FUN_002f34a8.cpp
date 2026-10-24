#include "common.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ void *data;
};

struct Object {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ Inner *inner;
};

extern "C" void *FUN_002f34a8(Object *object)
{
    return object->inner->data;
}
