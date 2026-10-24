#include "common.h"

struct Obj003515f8 {
    u8 unk00[0x30];
    s32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_003515f8(Obj003515f8 *obj, s32 value)
{
    obj->value = value;
}
