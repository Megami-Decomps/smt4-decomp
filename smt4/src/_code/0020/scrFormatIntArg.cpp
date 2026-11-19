#include "common.h"
#include <stdio.h>

extern "C" {

u32 scrGetArg(u32 index);

/* Script command: formats the first script argument as a decimal string. */
u32 scrFormatIntArg(void)
{
    char buffer[36];

    sprintf(buffer, "%d", scrGetArg(0));
    return 1;
}

} /* extern "C" */
