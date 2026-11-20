#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_btlDevilListCallbackContext;

/* Runs the UI object's draw callback. */
s32 btlDevilListDrawCallback()
{
    g_btlDevilListCallbackContext->object->draw();
    return 0;
}

}
