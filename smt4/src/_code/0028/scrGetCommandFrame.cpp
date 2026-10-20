#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xD0];
    /* 0xD0 */ u32 unkD0;
} Obj;

extern struct {
    u8 unk00[0x20];
    Obj *obj;
} g_scrContext;

u32 scrGetCommandFrame(void)
{
    return g_scrContext.obj->unkD0;
}

} /* extern "C" */
