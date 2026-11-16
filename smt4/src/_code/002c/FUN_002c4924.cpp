#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern void *saveGetFlagRowTable(void);
void FUN_002c4924(void)
{
    memClear(saveGetFlagRowTable(), 9088);
}

} /* extern "C" */
