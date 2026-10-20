#include "common.h"

extern "C" {

typedef struct Navi {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 posX;
    /* 0x10 */ u32 posY;
} Navi;
extern Navi *DAT_0057f574;

/* Returns the navigator's Y position. */
u32 NaviMain_GetPosY(void)
{
    return DAT_0057f574->posY;
}

} /* extern "C" */
