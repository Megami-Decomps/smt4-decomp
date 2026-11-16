#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_uiCallbackContext;

/* Runs the UI object's draw callback. */
s32 FUN_003ad068()
{
    g_uiCallbackContext->object->draw();
    return 0;
}

}
