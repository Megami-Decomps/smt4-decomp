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
} g_asdCamera;

u32 FUN_0027db08(int which)
{
    u32 value;

    if (which == 0) {
        value = g_asdCamera.obj->unk80;
    } else {
        value = g_asdCamera.obj->unk84;
    }
    return value;
}

} /* extern "C" */
