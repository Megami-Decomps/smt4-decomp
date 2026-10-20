#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u32 unk1C;
} Obj;

void FUN_0014dcac(Obj *obj)
{
    obj->unk1C = 0xffffffff;
}

} /* extern "C" */
