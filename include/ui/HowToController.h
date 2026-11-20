#ifndef UI_HOW_TO_CONTROLLER_H
#define UI_HOW_TO_CONTROLLER_H

#include "shard/W5_W5Match6_CallbackController.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "ui/UiControl.h"

/* Releases the work area's memory slots and optional backing buffers. */
__inline void CallbackControllerWork::releaseBuffers()
{
    for (s32 i = 0; i < 3; ++i) {
        asdMemFreeSlot((void **)slots[i]);
        slots[i] = NULL;
    }
    if (bufferA != NULL) {
        asdMemFree(bufferA);
        bufferA = NULL;
    }
    if (bufferB != NULL) {
        asdMemFree(bufferB);
        bufferB = NULL;
    }
}

/* Unregisters the active touch regions before releasing their work buffers. */
__inline void CallbackControllerWork::releaseInputAndBuffers()
{
    for (s32 i = 0; i < touchRegionCount; ++i) {
        ifTouchRegionRemove();
    }
    releaseBuffers();
}

#endif
