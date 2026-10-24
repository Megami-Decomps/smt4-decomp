#include "common.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 member[0x10];
    /* 0x34 */ s32 value;
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

extern "C" void FUN_003465ec(Inner *inner, void *member, s32 value);

extern "C" void FUN_003cc1dc(Object *object)
{
    Inner *inner = object->inner;
    FUN_003465ec(inner, inner->member, inner->value);
}
