#include "common.h"

extern "C" {

typedef struct Navi {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 posX;
    /* 0x10 */ u32 posY;
} Navi;
extern Navi *g_infoWin;

/* Returns the navigator's Y position. */
u32 NaviMain_GetPosY(void)
{
    return g_infoWin->posY;
}

} /* extern "C" */
