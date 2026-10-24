#include "common.h"

struct Obj003637ec {
    u8 unk00[0x30];
    s32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_003637ec(Obj003637ec *obj, s32 value)
{
    obj->value = value;
}
