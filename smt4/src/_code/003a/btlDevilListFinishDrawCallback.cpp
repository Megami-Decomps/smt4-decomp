#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d9c8;

/* Runs the UI object's finishDraw callback. */
s32 btlDevilListFinishDrawCallback()
{
    DAT_0043d9c8->object->finishDraw();
    return 0;
}

}
