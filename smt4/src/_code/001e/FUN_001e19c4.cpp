#include "common.h"

struct Obj001e19c4 {
    u8 unk00[0x10];
    s32 value;
};

/* Clears a field of the object. */
extern "C" void FUN_001e19c4(Obj001e19c4 *obj)
{
    obj->value = 0;
}
