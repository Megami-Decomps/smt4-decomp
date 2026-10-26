#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u8 unkC;
} Obj;

void FUN_001b95c4(Obj *obj)
{
    obj->unk0 = 0;
    obj->unk4 = 0;
    obj->unk8 = 0;
    obj->unkC = 0;
}

} /* extern "C" */
