#include "common.h"

struct Obj3cd8ccInner {
    u8 unk00[0x3c];
    u8 unk3c[0x24];
    u8 unk60[0x20];
    s32 unk80;
};

struct Obj3cd8cc {
    u8 unk00[0xc];
    Obj3cd8ccInner *inner;
};

extern "C" void FUN_003465ec(u8 *unk3c, u8 *unk60, s32 unk80);

/* Passes the inner record's +0x3c and +0x60 blocks and its +0x80 value on to FUN_003465ec. */
extern "C" void FUN_003cd8cc(Obj3cd8cc *obj)
{
    FUN_003465ec(obj->inner->unk3c, obj->inner->unk60, obj->inner->unk80);
}
