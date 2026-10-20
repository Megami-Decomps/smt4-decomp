#include "common.h"

extern "C" {

extern s8 DAT_00465228;

s32 appletGetBusyFlag(void)
{
    return DAT_00465228;
}

} /* extern "C" */
