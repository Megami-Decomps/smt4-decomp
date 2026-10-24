#include "common.h"

struct Obj00338788 {
    u8 unk00[0x24];
    s32 value;
};

/* Stores its argument in a field of the object. */
extern "C" void FUN_00338788(Obj00338788 *obj, s32 value)
{
    obj->value = value;
}
