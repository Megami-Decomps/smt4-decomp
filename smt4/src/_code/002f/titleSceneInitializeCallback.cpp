#include "common.h"

extern "C" void FUN_002d7f74(void);

/* Initialize this title-scene callback and report success. */
extern "C" s32 titleSceneInitializeCallback(void)
{
    FUN_002d7f74();
    return 0;
}
