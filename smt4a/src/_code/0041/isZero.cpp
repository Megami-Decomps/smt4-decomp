#include "shard/Shard0041.h"

extern "C" {

u8 isZero(s32 *value)
{
    if (*value != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
