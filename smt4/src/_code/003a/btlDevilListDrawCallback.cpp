#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d990;

/* Runs the UI object's draw callback. */
s32 btlDevilListDrawCallback()
{
    DAT_0043d990->object->draw();
    return 0;
}

}
