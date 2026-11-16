#include "common.h"

struct Inner {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ s32 value;
    /* 0x60 */ u8 unk60[0x26];
    /* 0x86 */ u16 source;
};

struct Object {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Inner *inner;
    /* 0x10 */ u8 unk10[0xC];
    /* 0x1C */ s32 state;
};

static __inline void innerSetValue(Inner *inner, s32 value)
{
    inner->value = value;
}

/* Primes the inner value with 150, then sets it from the inner source and resets the state. */
extern "C" void FUN_00481d90(Object *object)
{
    Inner *inner = object->inner;

    innerSetValue(inner, 150);
    innerSetValue(inner, object->inner->source);
    object->state = 0;
}
