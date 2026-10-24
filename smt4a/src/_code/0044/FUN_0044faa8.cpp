#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 value;
};

extern "C" u32 FUN_0044faa8(Object *object)
{
    return object->value;
}
