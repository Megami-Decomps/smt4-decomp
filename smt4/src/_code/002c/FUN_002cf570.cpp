#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x7EC];
    /* 0x7EC */ u32 unk7EC;
    /* 0x7F0 */ u32 unk7F0;
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} g_useCounter; /* 0x43dd20 */

void FUN_002cf570(u32 a, u32 b)
{
    Obj *obj = g_useCounter.obj;

    g_useCounter.obj->unk7EC = a;
    obj->unk7F0 = b;
}

} /* extern "C" */
