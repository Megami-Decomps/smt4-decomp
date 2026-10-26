/* NON_MATCHING: retail reaches the banks through g_callbackFuncs (functions bank first, the others at -32/-64) and addresses DAT_00589298+0x14 through its own literal. */
#include "nn/Result.h"
#include "shard/W9_W9Match7_SoundCallbacks.h"

extern "C" {
extern SoundCallbackState DAT_00589298;
extern SoundCallbackBanks DAT_004c6464;
extern const char DAT_00536c88[];
extern u8 DAT_0061a6a4[];
s32 FUN_0016f864(u32 mode);
u32 libc_strlen(const char *text);
s32 FUN_0016f988(u32 *resource, const char *name, u32 length, u32 flags);
void FUN_0017094c(void *queue);

/* Clears one entry of each callback bank. */
static __inline void soundCallbackBankClear(SoundCallbackBanks *banks, s32 index)
{
    banks->functions[index] = 0;
    banks->arguments[index] = 0;
    banks->owners[index] = 0;
}

/* Open the DSP resource once, clear callback banks, and initialize its pending queue. */
s32 FUN_00158f64(void)
{
    if (DAT_00589298.resource) {
        return 0;
    }
    s32 result = FUN_0016f864(0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    result = FUN_0016f988(&DAT_00589298.openedResource, DAT_00536c88,
                                   libc_strlen(DAT_00536c88), 0);
    if (nnResultIsFailure(result)) {
        return result;
    }
    DAT_00589298.resource = &DAT_00589298.resourceWord;
    DAT_00589298.resourceWord = DAT_00589298.openedResource;
    for (s32 index = 0; index < 8; ++index) {
        soundCallbackBankClear(&DAT_004c6464, index);
    }
    DAT_00589298.active = 0;
    DAT_00589298.count = 0;
    DAT_00589298.position = 0;
    DAT_00589298.readIndex = 0;
    DAT_00589298.writeIndex = 0;
    DAT_00589298.pending = 0;
    FUN_0017094c(DAT_0061a6a4);
    return 0;
}
}
