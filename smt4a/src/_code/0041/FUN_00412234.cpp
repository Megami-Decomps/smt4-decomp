#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 first;
    /* 0x20 */ s32 second;
};

extern "C" void FUN_00412234(Object *object)
{
    object->first = 0;
    object->second = -1;
}
