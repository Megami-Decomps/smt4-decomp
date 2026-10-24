#include "common.h"

extern "C" void FUN_002756a4(void);

/* Script command: runs FUN_002756a4 and reports success. */
extern "C" s32 FUN_002e6068(void)
{
    FUN_002756a4();
    return 1;
}
