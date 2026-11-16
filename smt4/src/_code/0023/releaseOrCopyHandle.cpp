#include "common.h"

extern "C" {

int cecMessageIdClear(void);
int __ARM_common_memcpy4_8(void);

u32 releaseOrCopyHandle(u32 value, int flag)
{
    if (flag != 0) {
        __ARM_common_memcpy4_8();
    } else {
        cecMessageIdClear();
    }
    return value;
}

} /* extern "C" */
