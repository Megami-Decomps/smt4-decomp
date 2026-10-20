#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
} Scene;
extern Scene *DAT_0057f574;

/* Returns 1 when the scene state is 1, 2, 3 or 4. */
u32 FUN_002619e0(void)
{
    s32 state;
    u32 result;

    state = DAT_0057f574->state;
    if ((state == 3 || state == 4) || (state == 1 || state == 2)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
