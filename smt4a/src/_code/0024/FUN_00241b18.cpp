#include "common.h"

struct Obj00241b18 {
    u8 unk00[0x1c];
    s32 value;
};

/* Clears a field of the object. */
extern "C" void FUN_00241b18(Obj00241b18 *obj)
{
    obj->value = 0;
}
