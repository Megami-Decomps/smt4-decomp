#include "shard/Shard0050.h"

extern "C" {

u32 isValidFileHeader(u32 unused, s32 *header)
{
    u32 result;

    if (header[0] != 0x4D545343) {
        result = 0;
    } else {
        result = 0;
        if (header[2] + 0xFE000000U <= 0x30100U) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
