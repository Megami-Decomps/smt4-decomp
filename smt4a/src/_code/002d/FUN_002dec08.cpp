#include "common.h"

extern "C" {

void stateHandlerCall(void);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x1A];
    /* 0x1A */ u8 mode;
    /* 0x1B */ u8 unk1B;
    /* 0x1C */ s32 handle;
} Target;

extern Target *g_sceneResourceWork;

/* Runs stateHandlerCall for the global target in modes 1, 2 or 3 with a handle. */
u32 FUN_002dec08(void)
{
    u8 mode;
    Target *target;
    s32 handle;

    target = g_sceneResourceWork;
    mode = target->mode;
    if ((mode == 1 || mode == 2) || mode == 3) {
        handle = 0;
        if (target != NULL) {
            handle = target->handle;
        }
        if (target != NULL && handle != 0) {
            stateHandlerCall();
        }
    }
    return 0;
}

} /* extern "C" */
