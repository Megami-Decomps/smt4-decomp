/* NON_MATCHING: retail reads the handle through its own address (add r0, r4, #20) and clears `resource` with a writeback store that then addresses the handle (str r1, [r4, #8]!; str r0, [r4, #12]); the build uses plain offsets. */
#include "nn/svc.h"
#include "shard/W9_W9Match7_SoundCallbacks.h"

extern "C" {
extern SoundCallbackState g_callbackState;
extern u8 DAT_004c64c4[];
extern const u32 DAT_00407e38[2];
void FUN_0011d2d0(void *queue);

/* Closes the DSP resource the sound callbacks opened, if any. */
void FUN_0010fc90(void)
{
    if (g_callbackState.resource == NULL) {
        return;
    }
    FUN_0011d2d0(DAT_004c64c4);
    svcCloseHandle(g_callbackState.openedResource);
    g_callbackState.resource = NULL;
    g_callbackState.openedResource = DAT_00407e38[1];
}

} /* extern "C" */
