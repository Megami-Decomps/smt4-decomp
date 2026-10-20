#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x136];
    /* 0x136 */ u8 kind;
    /* 0x137 */ u8 unk137;
    /* 0x138 */ u16 a;
    /* 0x13A */ u16 b;
} Obj;

void FUN_003c8da0(Obj *obj, u8 kind, u16 a, u16 b)
{
    obj->kind = kind;
    obj->a = a;
    obj->b = b;
}

} /* extern "C" */
