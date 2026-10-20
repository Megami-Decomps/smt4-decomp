#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xD0];
    /* 0xD0 */ u32 unkD0;
} Obj;

extern struct {
    u8 unk00[0x20];
    Obj *obj;
} DAT_0044de98;

u32 FUN_002893d8(void)
{
    return DAT_0044de98.obj->unkD0;
}

} /* extern "C" */
