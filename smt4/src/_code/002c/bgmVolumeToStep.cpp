#include "common.h"

extern "C" {
extern const u8 DAT_004076f9[11];

u32 bgmVolumeToStep(u32 value)
{
    for (s32 index = 0; index < 11; ++index) {
        if (value <= DAT_004076f9[index]) {
            return (u8)index;
        }
    }
    return 0;
}

} /* extern "C" */
