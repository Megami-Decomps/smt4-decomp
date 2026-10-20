#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u16 unk18;
} Obj;

extern Obj *DAT_0043e0f8;

void FUN_00211868(u16 value, u8 flag)
{
    Obj *obj = DAT_0043e0f8;

    DAT_0043e0f8->unk14 = 2;
    obj->unk18 = value;
    obj->unk11 = flag;
}

} /* extern "C" */
