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

extern "C" {

void FUN_00243d20(Inner *inner, void *member, s32 value);

/* Hands the inner block, its member and its value to FUN_00243d20. */
void FUN_00328490(Object *object)
{
    Inner *inner = object->inner;
    FUN_00243d20(inner, inner->member, inner->value);
}

} /* extern "C" */
