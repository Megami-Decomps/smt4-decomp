#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_uiCallbackContext;

/* Runs the UI object's finishDraw callback. */
s32 uiCallbackFinishDraw()
{
    g_uiCallbackContext->object->finishDraw();
    return 0;
}

}
