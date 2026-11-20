#include "common.h"
#include <stdio.h>
#include "code/Code0014.h"

extern "C" {
u32 FUN_001628c0(const char *name, u32 volume, u32 category, u32 options, f32 leftVolume, f32 rightVolume);

/* Play the indexed voice clip encoded by a packed resource id, including its optional variant suffix. */
u32 btlPlayIndexedVoice(u32 resourceId, f32 volumeScale, f32 leftVolume, f32 rightVolume)
{
    char name[16];
    u32 group = (resourceId & 0xfffff) >> 8;
    u32 index = resourceId >> 20;
    u32 variant = (resourceId & 0x3f) >> 4;
    if (group && index) {
        sprintf(name, "I%03u%03u", index, group);
        if (variant)
            sprintf(name, "%s%s", name, variant == 1 ? "a" : "b");
        return FUN_001628c0(name, (u8)((f32)messageVoiceBankGet() * volumeScale), 0, 0, leftVolume, rightVolume);
    }
    return 0;
}
} /* extern "C" */
