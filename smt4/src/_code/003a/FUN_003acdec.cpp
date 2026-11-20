#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_btlDevilListCallbackContext;

/* Runs the UI object's finishDraw callback. */
s32 FUN_003acdec()
{
    g_btlDevilListCallbackContext->object->finishDraw();
    return 0;
}

}
