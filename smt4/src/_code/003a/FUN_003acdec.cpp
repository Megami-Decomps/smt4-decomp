#include "shard/W5_W5Match4_UiCallback.h"

extern "C" {

extern UiCallbackContext *DAT_0043d990;

/* Runs the UI object's finishDraw callback. */
s32 FUN_003acdec()
{
    DAT_0043d990->object->finishDraw();
    return 0;
}

}
