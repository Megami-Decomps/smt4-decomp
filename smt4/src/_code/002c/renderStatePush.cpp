/* NON_MATCHING: canonical stack helper now matches old/new top scheduling; global context root loads into R4 rather than R1. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;

/* Pushes a render state; when it changes (or the stack is dirty) the new state is applied. */
void renderStatePush(s32 value)
{
    renderCtxPushB(g_titleScene, value);
}

} /* extern "C" */
