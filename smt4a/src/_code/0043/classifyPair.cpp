#include "shard/Shard0043.h"

extern "C" {

u32 classifyPair(s32 a, s32 b)
{
    if (a != 10) {
        if (a != 0xD) {
            return 0;
        }
        if (b == 10) {
            return 2;
        }
    }
    return 1;
}

} /* extern "C" */
