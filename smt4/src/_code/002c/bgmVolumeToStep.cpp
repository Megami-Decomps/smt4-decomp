#include "common.h"

extern "C" {
extern const u8 g_indexedByteValues[11];

u32 bgmVolumeToStep(u32 value)
{
    for (s32 index = 0; index < 11; ++index) {
        if (value <= g_indexedByteValues[index]) {
            return (u8)index;
        }
    }
    return 0;
}

} /* extern "C" */
