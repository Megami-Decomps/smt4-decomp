#include "common.h"

extern "C" {

void optionsResetIfFlagSet(void);

/* Resets the options if their flag is set and reports success. */
s32 FUN_0039c21c(void)
{
    optionsResetIfFlagSet();
    return 1;
}

} /* extern "C" */
