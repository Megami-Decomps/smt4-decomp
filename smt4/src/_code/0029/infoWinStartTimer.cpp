#include "common.h"

extern "C" {

int timerStart(void *timer, int a, int b);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0x30];
    /* 0x44 */ u8 timer[1];
} Obj;

extern Obj *g_infoWin;

void infoWinStartTimer(void)
{
    Obj *obj = g_infoWin;

    g_infoWin->unk08 = 5;
    obj->unk10 = 0x1e;
    timerStart(obj->timer, 1, 0);
}

} /* extern "C" */
