#include "common.h"

extern "C" void lmapEnableSceneState(void);

/* Script command: runs lmapEnableSceneState and reports success. */
extern "C" s32 FUN_003b6ef0(void)
{
    lmapEnableSceneState();
    return 1;
}
