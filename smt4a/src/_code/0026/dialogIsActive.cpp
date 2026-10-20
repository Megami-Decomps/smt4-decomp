#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
} Scene;
extern Scene *g_infoWin;

/* Returns 1 when the scene state is 1, 2, 3 or 4. */
u32 dialogIsActive(void)
{
    s32 state;
    u32 result;

    state = g_infoWin->state;
    if ((state == 3 || state == 4) || (state == 1 || state == 2)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
