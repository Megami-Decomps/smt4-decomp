#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void optionsApplyOverride(s32 value);

/* Script command: applies the options override given as argument. */
u32 scrComm_Options_ApplyOverride(void)
{
    optionsApplyOverride(scrGetArg(0));
    return 1;
}

} /* extern "C" */
