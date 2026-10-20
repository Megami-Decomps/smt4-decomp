#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ u8 kind;
    /* 0x119 */ u8 unk119;
    /* 0x11A */ u16 value;
} Obj;

void FUN_003c8bb8(Obj *obj, u8 kind, u16 value)
{
    obj->kind = kind;
    obj->value = value;
}

} /* extern "C" */
