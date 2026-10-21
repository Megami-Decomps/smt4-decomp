#include "common.h"

extern "C" {

typedef struct Navi {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 posX;
    /* 0x10 */ u32 posY;
} Navi;
extern Navi *g_infoWin;

/* Stores `timer` at 0x10 of the navigator. */
void infoWinSetTimer(u32 timer)
{
    g_infoWin->posY = timer;
}

} /* extern "C" */
