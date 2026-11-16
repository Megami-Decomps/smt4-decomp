#include "nn/svc.h"
#include "shard/W9_W9Match7_SoundCallbacks.h"

extern "C" {
extern SoundCallbackState g_callbackState;
extern u8 DAT_004c64c4[];
extern const u32 DAT_00407e38[2];
void FUN_0011d2d0(void *queue);
/* One-instruction getter (armlink inlines it): the kernel handle a handle object holds. */
u32 handleObjectGetHandle(const u32 *handle);

/* Closes the DSP resource the sound callbacks opened, if any. */
void soundCallbacksCloseDspResource(void)
{
    if (g_callbackState.resource == NULL) {
        return;
    }
    FUN_0011d2d0(DAT_004c64c4);
    svcCloseHandle(handleObjectGetHandle(&g_callbackState.openedResource));
    u32 defaultHandle = DAT_00407e38[1];
    g_callbackState.resource = NULL;
    g_callbackState.openedResource = defaultHandle;
}

} /* extern "C" */
