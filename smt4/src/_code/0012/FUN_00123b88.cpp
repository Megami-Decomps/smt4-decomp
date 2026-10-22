/* NON_MATCHING: Graphics-release switch dispatch, callback register allocation, and epilogue layout differ. */
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern GfxReleaseCallbackIV g_gfxReleaseCallback;

void FUN_00123b88(GfxReleaseContextPrefixIV *context)
{
    GfxReleaseStatePrefixIV *state = context->state;
    GfxReleaseCallbackIV callback = g_gfxReleaseCallback;

    switch (state->mode) {
    case 0x01010000:
        if (state->secondaryActive != 0 && callback != 0) {
            callback(0x10000, 0x102, context->owner);
        }
        break;

    case 0x01020000:
    case 0x01030000:
        if (state->primaryActive != 0 && callback != 0) {
            callback(state->releaseValue, 0x102, context->owner);
        }
        if (state->secondaryActive != 0) {
            callback = g_gfxReleaseCallback;
            if (callback != 0) {
                callback(0x10000, 0x102, context->owner);
            }
        }
        break;

    case 0x02020000:
    case 0x02030000:
        if (state->primaryActive != 0 && callback != 0) {
            callback(state->releaseValue, 0x102, context->owner);
        }
        break;

    default:
        break;
    }

    state->primaryActive = 0;
    state->secondaryActive = 0;
}
}
