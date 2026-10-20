#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
} Obj;

void FUN_00140f3c(Obj *obj)
{
    obj->unk38 = 0;
    obj->unk3C = 0;
    obj->unk40 = 0;
}

} /* extern "C" */
