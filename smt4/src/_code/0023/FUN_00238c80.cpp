#include "common.h"

extern "C" {

int cecMessageIdClear(void);
int FUN_002ad8b4(void);

u32 FUN_00238c80(u32 value, int flag)
{
    if (flag != 0) {
        FUN_002ad8b4();
    } else {
        cecMessageIdClear();
    }
    return value;
}

} /* extern "C" */
