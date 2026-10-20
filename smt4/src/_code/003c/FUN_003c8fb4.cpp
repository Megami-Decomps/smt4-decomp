#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x11C];
    /* 0x11C */ u8 kind;
    /* 0x11D */ u8 unk11D;
    /* 0x11E */ u16 value;
} Obj;

void FUN_003c8fb4(Obj *obj, u8 kind, u16 value)
{
    obj->kind = kind;
    obj->value = value;
}

} /* extern "C" */
