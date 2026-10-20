#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u8 unk54[0x44];
    /* 0x98 */ u8 unk98;
} Obj;

void FUN_0037960c(Obj *obj, u8 a, u32 b)
{
    obj->unk50 = b;
    obj->unk98 = a;
}

} /* extern "C" */
