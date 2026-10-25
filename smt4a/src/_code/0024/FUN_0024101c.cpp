#include "common.h"

extern "C" u32 FUN_0024101c(const u8* left, const u8* right)
{
    u32 different = 0;

    for (s32 index = 0; index < 21; ++index) {
        if (left[index] != right[index]) {
            different = 1;
            break;
        }
    }

    return different;
}
