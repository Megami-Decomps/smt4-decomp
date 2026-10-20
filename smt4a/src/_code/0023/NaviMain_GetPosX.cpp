#include "common.h"

extern "C" {

typedef struct Navi {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 posX;
} Navi;
extern Navi *DAT_0057f574;

/* Returns the navigator's X position. */
u32 NaviMain_GetPosX(void)
{
    return DAT_0057f574->posX;
}

} /* extern "C" */
