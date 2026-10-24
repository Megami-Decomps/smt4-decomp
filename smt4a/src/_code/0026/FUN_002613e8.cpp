#include "common.h"

/* Two words returned in r0/r1. */
struct Pair { u32 a, b; };
struct Obj1c35e0 {
    u8 unk00[0x10];
    Pair value;
};

extern "C" __value_in_regs Pair FUN_002613e8(Obj1c35e0 *obj)
{
    return obj->value;
}
