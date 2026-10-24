#include "common.h"

struct Obj00313a40 {
    u8 unk00[0x9c];
    void *target;
};

extern "C" void FUN_00318c9c(void *target, const f32 *value);

/* Passes the value on to the object's target. */
extern "C" void FUN_00313a40(Obj00313a40 *obj, const f32 *value)
{
    FUN_00318c9c(obj->target, value);
}
