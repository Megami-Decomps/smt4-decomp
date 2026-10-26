/* NON_MATCHING: retail loads g_gameState+0x461 (ldrb, result unused) before the tail call, with no frame; a linker-inlined getter call would leave a push/pop, a plain dead read is dropped. */
#include "common.h"

extern "C" {

void mapOverlaySetOpen(s32 enabled);

void lmapEnableSceneState(void)
{
    mapOverlaySetOpen(1);
}

} /* extern "C" */
