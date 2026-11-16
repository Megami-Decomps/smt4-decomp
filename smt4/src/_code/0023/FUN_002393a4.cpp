#include "common.h"

extern "C" {

int cecMessageIdClear(void);
int ARM_common_memcpy4_8(void);

u32 FUN_002393a4(u32 value, int flag)
{
    if (flag != 0) {
        ARM_common_memcpy4_8();
    } else {
        cecMessageIdClear();
    }
    return value;
}

} /* extern "C" */
