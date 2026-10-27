#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count;
};

extern "C" void _ZN9Obj557d2814refreshOffsetsEv(Object *object)
{
    object->count++;
}
