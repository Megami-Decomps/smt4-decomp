#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u16 unk18;
} Obj;

extern Obj *DAT_0043e0f8;

void FUN_001ecb54(u16 value)
{
    Obj *obj = DAT_0043e0f8;

    DAT_0043e0f8->unk14 = 5;
    obj->unk18 = value;
}

} /* extern "C" */
