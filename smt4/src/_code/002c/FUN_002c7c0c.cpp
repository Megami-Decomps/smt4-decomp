#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0xBC];
    /* 0xBC */ void *data;
};

extern "C" void *FUN_002c7c0c(Object *object)
{
    return object->data;
}
