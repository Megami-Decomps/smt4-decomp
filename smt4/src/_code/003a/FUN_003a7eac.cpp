#include "common.h"

struct Obj3a7eac {
    u8 unk00[0x10];
    u8 enabled;
    u8 unk11[3];
    s32 kind;
    s32 value;
};

/* Initialises the object: enabled, kind 13, value 0. */
extern "C" void FUN_003a7eac(Obj3a7eac *obj)
{
    obj->enabled = 1;
    obj->kind = 13;
    obj->value = 0;
}
