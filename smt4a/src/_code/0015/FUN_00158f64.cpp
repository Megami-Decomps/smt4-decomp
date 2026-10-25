/* NON_MATCHING: callback-bank clearing is unrolled and uses a different global base than retail. */
#include "shard/W9_W9Match7_SoundCallbacks.h"

extern "C" {
extern SoundCallbackState g_callbackState;
extern SoundCallbackBanks DAT_0061a644;
extern const char DAT_00536c88[];
extern u8 DAT_0061a6a4[];
s32 FUN_0016f864(u32 mode);
u32 libc_strlen(const char *text);
s32 FUN_0016f988(u32 *resource, const char *name, u32 length, u32 flags);
void FUN_0017094c(void *queue);

/* Open the DSP resource once, clear callback banks, and initialize its pending queue. */
s32 FUN_00158f64(void)
{
    if (g_callbackState.resource) {
        return 0;
    }
    s32 result = FUN_0016f864(0);
    if (result < 0) {
        return result;
    }
    result = FUN_0016f988(&g_callbackState.openedResource, DAT_00536c88,
                        libc_strlen(DAT_00536c88), 0);
    if (result < 0) {
        return result;
    }
    g_callbackState.resource = &g_callbackState.resourceWord;
    g_callbackState.resourceWord = g_callbackState.openedResource;
    for (s32 index = 0; index < 8; ++index) {
        DAT_0061a644.functions[index] = 0;
        DAT_0061a644.arguments[index] = 0;
        DAT_0061a644.owners[index] = 0;
    }
    g_callbackState.active = 0;
    g_callbackState.count = 0;
    g_callbackState.position = 0;
    g_callbackState.readIndex = 0;
    g_callbackState.writeIndex = 0;
    g_callbackState.pending = 0;
    FUN_0017094c(DAT_0061a6a4);
    return 0;
}
}
