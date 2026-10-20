#include "common.h"

extern "C" {

typedef struct Navi {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 posX;
    /* 0x10 */ u32 posY;
} Navi;
extern Navi *DAT_0057f574;

/* Stores `timer` at 0x10 of the navigator. */
void FUN_002c2d5c(u32 timer)
{
    DAT_0057f574->posY = timer;
}

} /* extern "C" */
