/* NON_MATCHING: register allocation only: retail keeps the base sum in r7, the first lookup in r6 and the config pointer in r5 (summing the three base words in a different order); built uses r6/r5/r7 and loads the third word last. */
#include "shard/W6_W6Match7_SoundInit.h"

extern "C" {


extern SoundSystemInitFlags g_nwSoundSystemInitFlags;

u32 FUN_002baf30(void);
u32 FUN_002bafb0(void);
s32 FUN_0013127c(u32 a, u32 value);
s32 FUN_001310c4(u32 a, u32 value);

/* Work memory for the two pools, task/sound stacks, driver state and profiling. */
u32 nw_snd_SoundSystem_GetRequiredMemSize(const SoundSystemInitParameters *parameters)
{
    u32 base = parameters->poolSizeA + parameters->poolSizeB + parameters->taskStackSize;
    u32 first = FUN_0013127c(FUN_002baf30(), g_nwSoundSystemInitFlags.driverMode);
    u32 second = FUN_001310c4(FUN_002bafb0(), g_nwSoundSystemInitFlags.driverMode);
    u32 total = second + first + base;
    u8 hasItems;
    s32 count;

    if (parameters->startThread == 1) {
        total = total + parameters->soundStackSize;
    }
    if (parameters->threadMode == 1 && parameters->auxiliary != 0) {
        total = total + parameters->soundStackSize;
    }
    hasItems = parameters->profiling != 0;
    count = 0;
    if (hasItems) {
        count = parameters->profileBufferSize;
    }
    if (hasItems && 0 < count) {
        total = total + count * 8;
    }
    return total;
}

} /* extern "C" */
