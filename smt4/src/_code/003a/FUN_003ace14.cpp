#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_uiCallbackContext;

/* Runs the UI object's update callback. */
s32 FUN_003ace14()
{
    g_uiCallbackContext->object->update();
    return 0;
}

}
