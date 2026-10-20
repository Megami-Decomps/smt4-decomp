#include "common.h"

extern "C" {

int scrSetResult(void);
int FUN_002c5ef0(void);

u32 FUN_003112d8(void)
{
    FUN_002c5ef0();
    scrSetResult();
    return 1;
}

} /* extern "C" */
