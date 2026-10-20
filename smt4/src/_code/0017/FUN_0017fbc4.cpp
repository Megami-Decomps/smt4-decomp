#include "common.h"

extern "C" {

int FUN_002bee58(void *obj, int value);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x30];
    /* 0x3C */ u8 unk3C[1];
} Obj;

extern Obj *g_comWin;

void FUN_0017fbc4(void)
{
    Obj *obj = g_comWin;

    g_comWin->unk08 = 4;
    FUN_002bee58(obj->unk3C, 1);
}

} /* extern "C" */
