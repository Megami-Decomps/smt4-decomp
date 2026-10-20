#include "shard/Shard004C.h"

extern "C" {

u8 isOutsideRange4To53(s32 value)
{
    if ((u32)(value - 4) < 0x32) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
