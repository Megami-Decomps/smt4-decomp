#include "common.h"

extern "C" {

int scrSetResult(void);
int FUN_002903f0(void);

u32 FUN_003112c4(void)
{
    FUN_002903f0();
    scrSetResult();
    return 1;
}

} /* extern "C" */
