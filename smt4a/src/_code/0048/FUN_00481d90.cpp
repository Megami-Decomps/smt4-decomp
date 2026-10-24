/* NON_MATCHING: same stores; retail allocates r2 to the constant 150 and r3 to the zero, this build swaps the two registers. */
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

extern "C" void FUN_00481d90(Object *object)
{
    Inner *inner = object->inner;

    inner->value = 150;
    inner->value = object->inner->source;
    object->state = 0;
}
