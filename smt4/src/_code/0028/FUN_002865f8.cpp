#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ u32 unkC0;
} Obj;

extern struct {
    u8 unk00[0x20];
    Obj *obj;
} DAT_0044de98;

u32 FUN_002865f8(void)
{
    return DAT_0044de98.obj->unkC0;
}

} /* extern "C" */
