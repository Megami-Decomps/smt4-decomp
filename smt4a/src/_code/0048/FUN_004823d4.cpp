#include "common.h"

struct Obj004823d4Inner {
    u8 unk00[0x5c];
    u32 value;
};

struct Obj004823d4 {
    u8 unk00[0xc];
    Obj004823d4Inner *inner;
};

extern "C" void FUN_004820ec(Obj004823d4 *obj, f32 value);

/* Sets the inner record's value to 80, then continues in FUN_004820ec with 0. */
extern "C" void FUN_004823d4(Obj004823d4 *obj)
{
    Obj004823d4Inner *inner = obj->inner;
    inner->value = 80;
    FUN_004820ec(obj, 0.0f);
}
