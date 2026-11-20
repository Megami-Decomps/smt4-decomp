#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_btlDevilListCallbackContext;

/* Runs the UI object's update callback. */
s32 FUN_003ac6e8()
{
    g_btlDevilListCallbackContext->object->update();
    return 0;
}

}
