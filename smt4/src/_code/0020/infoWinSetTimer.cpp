#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
} Obj;

extern Obj *g_infoWin;

void infoWinSetTimer(u32 value)
{
    g_infoWin->unk10 = value;
}

} /* extern "C" */
