/* NON_MATCHING: retail reaches the banks through g_callbackFuncs (functions bank first, the others at -32/-64) and addresses g_callbackState+0x14 through its own literal. */
#include "nn/Result.h"
#include "shard/W9_W9Match7_SoundCallbacks.h"

extern "C" {
extern SoundCallbackState g_callbackState;
extern SoundCallbackBanks DAT_004c6464;
extern const char DAT_00407e40[];
extern u8 DAT_004c64c4[];
s32 srvInitialize(u32 mode); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 libc_strlen(const char *text);
s32 srvGetServiceHandle(u32 *resource, const char *name, u32 length, u32 flags); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_0012a294(void *queue);

/* Clears one entry of each callback bank. */
static __inline void soundCallbackBankClear(SoundCallbackBanks *banks, s32 index)
{
    banks->functions[index] = 0;
    banks->arguments[index] = 0;
    banks->owners[index] = 0;
}

/* Open the DSP resource once, clear callback banks, and initialize its pending queue. */
nn::Result FUN_0011be58(void)
{
    if (g_callbackState.resource) {
        return 0;
    }
    s32 result = srvInitialize(0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = srvGetServiceHandle(&g_callbackState.openedResource, DAT_00407e40,
                                   libc_strlen(DAT_00407e40), 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    g_callbackState.resource = &g_callbackState.resourceWord;
    g_callbackState.resourceWord = g_callbackState.openedResource;
    for (s32 index = 0; index < 8; ++index) {
        soundCallbackBankClear(&DAT_004c6464, index);
    }
    g_callbackState.active = 0;
    g_callbackState.count = 0;
    g_callbackState.position = 0;
    g_callbackState.readIndex = 0;
    g_callbackState.writeIndex = 0;
    g_callbackState.pending = 0;
    FUN_0012a294(DAT_004c64c4);
    return 0;
}
}
