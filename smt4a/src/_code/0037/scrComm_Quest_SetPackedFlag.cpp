#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void questSetPackedFlag(s32 flag, s32 value);

/* Script command: sets the packed quest flag given as argument. */
u32 scrComm_Quest_SetPackedFlag(void)
{
    questSetPackedFlag(scrGetArg(0), 1);
    return 1;
}

} /* extern "C" */
