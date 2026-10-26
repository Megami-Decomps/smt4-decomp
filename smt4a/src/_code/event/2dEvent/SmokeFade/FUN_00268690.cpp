#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
} Scene;

extern Scene *g_smokeFadeState;

/* True while the scene exists and is in state 3. */
s32 FUN_00268690(void)
{
    Scene *scene = g_smokeFadeState;
    s32 result = 0;

    if (scene == NULL) {
        return 0;
    }
    if (scene->state == 3) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
