#include "common.h"

extern "C" {

typedef struct Navi {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 posX;
} Navi;
extern Navi *g_infoWin;

/* Returns the navigator's X position. */
u32 NaviMain_GetPosX(void)
{
    return g_infoWin->posX;
}

} /* extern "C" */
