#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ u32 unkC0;
} Obj;

extern struct {
    u8 unk00[0x20];
    Obj *obj;
} g_scrContext;

u32 FUN_002865f8(void)
{
    return g_scrContext.obj->unkC0;
}

} /* extern "C" */
