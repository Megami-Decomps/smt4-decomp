#include "common.h"

extern "C" void titleSceneDrawEffectEditorMenu(void);

/* Initialize this title-scene callback and report success. */
extern "C" s32 titleSceneInitializeCallback(void)
{
    titleSceneDrawEffectEditorMenu();
    return 0;
}
