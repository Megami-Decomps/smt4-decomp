#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *g_bibleDevilCallbackContext;

/* Runs the UI object's draw callback. */
s32 FUN_003ac738()
{
    g_bibleDevilCallbackContext->object->draw();
    return 0;
}

}
