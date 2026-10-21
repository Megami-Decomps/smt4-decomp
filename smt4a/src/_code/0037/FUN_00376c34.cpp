#include "common.h"

extern "C" {

s32 gameFlagIsSet(s32 flag);
extern char DAT_005f0cc1[];

const char * FUN_00376c34(void)
{
    return gameFlagIsSet(0x4d0) ? DAT_005f0cc1 : NULL;
}

} /* extern "C" */
