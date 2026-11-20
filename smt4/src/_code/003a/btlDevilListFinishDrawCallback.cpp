#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_bibleDevilCallbackContext;

/* Runs the UI object's finishDraw callback. */
s32 btlDevilListFinishDrawCallback()
{
    g_bibleDevilCallbackContext->object->finishDraw();
    return 0;
}

}
