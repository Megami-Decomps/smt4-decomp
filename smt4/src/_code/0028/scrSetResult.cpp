#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x3B];
    /* 0x3B */ u8 unk3B;
    /* 0x3C */ u8 unk3C[0x6C];
    /* 0xA8 */ u32 result;
} Obj;

extern struct {
    u8 unk00[0x20];
    Obj *obj;
} g_scrContext;

void scrSetResult(u32 result)
{
    Obj *obj = g_scrContext.obj;

    g_scrContext.obj->unk3B = 0;
    obj->result = result;
}

} /* extern "C" */
