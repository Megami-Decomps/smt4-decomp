#include "common.h"

struct Obj002df4d4 {
    u8 unk00[0x30];
    s32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_002df4d4(Obj002df4d4 *obj, s32 value)
{
    obj->value = value;
}
