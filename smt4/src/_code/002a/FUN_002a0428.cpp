#include "common.h"

extern "C" {

int FUN_001db998(u32 a, u32 b);

typedef struct Obj {
    /* 0x0 */ u32 flags;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Obj;

void FUN_002a0428(Obj *obj, u32 value)
{
    obj->flags = obj->flags & 0xffdfffff;
    FUN_001db998(obj->unk8, value);
}

} /* extern "C" */
