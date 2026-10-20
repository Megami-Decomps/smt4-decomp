#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u16 unk18;
} Obj;

extern Obj *g_comWin;

void FUN_002009c4(u16 value)
{
    Obj *obj = g_comWin;

    g_comWin->unk14 = 3;
    obj->unk18 = value;
}

} /* extern "C" */
