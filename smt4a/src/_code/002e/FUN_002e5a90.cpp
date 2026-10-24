#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 low;
    /* 0x1C */ u32 high;
};

extern "C" u64 FUN_002e5a90(Object *object)
{
    return ((u64)object->high << 32) | object->low;
}
