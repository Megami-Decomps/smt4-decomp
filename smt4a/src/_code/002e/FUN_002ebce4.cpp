#include "common.h"

extern "C" {

typedef struct Screen {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 state;
} Screen;
extern Screen *DAT_0057f268;

/* Returns 0 when the screen at 0x57F268 is in state 0x17, otherwise 1. */
u32 FUN_002ebce4(void)
{
    u32 result;

    if ((DAT_0057f268 == NULL) || (DAT_0057f268->state != 0x17)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
