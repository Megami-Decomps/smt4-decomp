#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 unk8;
    /* 0xC */ u32 unkC;
} Obj;

void FUN_0023aa28(Obj *obj, u32 *a, u32 *b)
{
    *a = obj->unk8;
    *b = obj->unkC;
}

} /* extern "C" */
