#include "common.h"

extern "C" void FUN_003bf498(void);

/* Script command: runs FUN_003bf498 and reports success. */
extern "C" s32 FUN_003c91d8(void)
{
    FUN_003bf498();
    return 1;
}
