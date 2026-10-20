#include "common.h"

extern "C" {

int FUN_002c52f8(void);

extern int DAT_00471a68;

int FUN_002ad888(void)
{
    if (DAT_00471a68 == 0) {
        FUN_002c52f8();
    }
    return DAT_00471a68;
}

} /* extern "C" */
