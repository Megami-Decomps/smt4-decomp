#include "common.h"

struct Obj4ffce0 {
    u8 unk00[0xfc];
    s8 value;
};

/* Returns the signed byte at 0xfc. */
extern "C" s32 FUN_004ffce0(const Obj4ffce0 *obj)
{
    return obj->value;
}
