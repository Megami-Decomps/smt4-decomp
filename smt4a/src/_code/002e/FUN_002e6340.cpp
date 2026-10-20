#include "common.h"

extern "C" {

extern void *FUN_002c2710(void);
extern void sysMemClear(void *block, s32 size);
void FUN_002e6340(void)
{
    sysMemClear(FUN_002c2710(), 9088);
}

} /* extern "C" */
