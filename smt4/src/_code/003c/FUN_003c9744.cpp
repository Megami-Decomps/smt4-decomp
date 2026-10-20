#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x143];
    /* 0x143 */ u8 kind;
} Obj;

void FUN_003c9744(Obj *obj, u8 kind, u16 value)
{
    obj->kind = kind;
    *(u16 *)((u8 *)obj + 0x144) = value;
}

} /* extern "C" */
