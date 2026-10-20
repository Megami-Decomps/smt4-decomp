#include "common.h"

extern "C" {

int FUN_00291050(void);
int FUN_002ad8b4(void);

u32 FUN_002393a4(u32 value, int flag)
{
    if (flag != 0) {
        FUN_002ad8b4();
    } else {
        FUN_00291050();
    }
    return value;
}

} /* extern "C" */
