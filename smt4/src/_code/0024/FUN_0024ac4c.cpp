#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} DAT_0044ea58;

u32 FUN_0024ac4c(int which)
{
    u32 value;

    if (which == 2) {
        value = DAT_0044ea58.obj->unk84;
    } else {
        value = DAT_0044ea58.obj->unk80;
    }
    return value;
}

} /* extern "C" */
