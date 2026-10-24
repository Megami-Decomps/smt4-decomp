#include "common.h"

struct Obj003834f0 {
    u8 unk00[0xbc];
    s32 value;
};

/* Returns a field of the object. */
extern "C" s32 FUN_003834f0(Obj003834f0 *obj)
{
    return obj->value;
}
