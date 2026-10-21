#include "common.h"

extern "C" {

extern void *g_titleScene;
void FUN_002c3a14(void *scene);
void FUN_002e1c04();

/* Refreshes the title scene before advancing its UI callbacks. */
s32 titleSceneUpdateCallback()
{
    FUN_002c3a14(g_titleScene);
    FUN_002e1c04();
    return 0;
}

}
