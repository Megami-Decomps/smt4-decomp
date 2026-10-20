#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} g_asdCamera;

void FUN_00298d50(u32 value)
{
    g_asdCamera.obj->unk80 = value;
}

} /* extern "C" */
