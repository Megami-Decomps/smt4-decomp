#include "common.h"

extern "C" {

int FUN_002bee58(void *block, int arg);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11[0x23];
    /* 0x34 */ u8 block[0x8C];
    /* 0xC0 */ u8 text[0x80];
} Obj;

extern Obj *g_placeWin;

void FUN_002636b0(void)
{
    Obj *obj = g_placeWin;

    g_placeWin->unk08 = 3;
    FUN_002bee58(obj->block, 1);
}

} /* extern "C" */
