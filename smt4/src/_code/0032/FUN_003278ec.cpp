#include "common.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 value;
    /* 0x40 */ u8 unk40[0x20];
    /* 0x60 */ u8 member[1];
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
};

extern "C" void FUN_0024293c(void *member, s32 value);

extern "C" void FUN_003278ec(Object *object)
{
    Inner *inner = object->inner;
    FUN_0024293c(inner->member, inner->value + 1);
}
