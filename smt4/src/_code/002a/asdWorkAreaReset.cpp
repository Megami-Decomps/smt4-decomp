#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ u8 *unk80;
    /* 0x084 */ u8 *unk84;
    /* 0x088 */ u8 unk088[0x508];
    /* 0x590 */ u8 unk590[1];
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} g_asdCamera;

void asdWorkAreaReset(void)
{
    Obj *obj = g_asdCamera.obj;
    u8 *second = g_asdCamera.obj->unk590;

    g_asdCamera.obj->unk80 = g_asdCamera.obj->unk088;
    obj->unk84 = second;
}

} /* extern "C" */
