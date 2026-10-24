#include "common.h"

struct Obj002f9f80 {
    u8 unk00[0x24];
    s32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_002f9f80(Obj002f9f80 *obj, s32 value)
{
    obj->value = value;
}
