#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u8 kind;
    /* 0x13D */ u8 unk13D;
    /* 0x13E */ u16 a;
    /* 0x140 */ u16 b;
} Obj;

void FUN_003c90ec(Obj *obj, u8 kind, u16 a, u16 b)
{
    obj->kind = kind;
    obj->a = a;
    obj->b = b;
}

} /* extern "C" */
