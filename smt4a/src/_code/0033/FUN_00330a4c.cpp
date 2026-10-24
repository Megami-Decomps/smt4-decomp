#include "common.h"

struct Obj2cda14 {
    u8 unk00[0x2c];
    s32 value;
};

/* Stores its argument in a field of the object and reports success. */
extern "C" s32 FUN_00330a4c(Obj2cda14 *obj, s32 value)
{
    obj->value = value;
    return 1;
}
