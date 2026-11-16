/* NON_MATCHING: retail loads g_gameState+0x461 (ldrb, result unused) before the tail call, with no frame; a linker-inlined getter call leaves a push/pop in the build (tried gameStateGetNavigationFlag461 = 0xe5d00461), a plain dead read is dropped. */
#include "common.h"

extern "C" {

void mapOverlaySetOpen(s32 enabled);

void lmapEnableSceneState(void)
{
    mapOverlaySetOpen(1);
}

} /* extern "C" */
