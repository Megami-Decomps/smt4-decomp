#include "common.h"

// Keep the free-camera process alive without requesting a transition.
extern "C" s32 freeCameraProcessUpdate(void *context)
{
    return 0;
}
