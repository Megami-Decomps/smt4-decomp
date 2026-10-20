#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ u32 mode;
    /* 0x51C */ u32 previousMode;
} Scene;

extern Scene *g_statusDown;

/* Switches the global scene to mode 7, remembering the previous mode; returns the scene (NULL if none). */
Scene *stateHolderEnterState7(void)
{
    Scene *scene = g_statusDown;

    if (scene != NULL) {
        scene->previousMode = scene->mode;
        scene->mode = 7;
    }
    return scene;
}

} /* extern "C" */
