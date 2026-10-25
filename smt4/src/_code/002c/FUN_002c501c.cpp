#include "common.h"
#include "util/FUN_002c501c.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} g_asdCamera;

u32 FUN_002c501c(void)
{
    return g_asdCamera.obj->unk80;
}

} /* extern "C" */
