#include "common.h"

extern "C" {

extern void *saveGetFlagRowTable(void);
extern void sysMemClear(void *block, s32 size);
void FUN_002e6340(void)
{
    sysMemClear(saveGetFlagRowTable(), 9088);
}

} /* extern "C" */
