#include "common.h"
#include <stdio.h>

extern "C" {

int scrGetArg(int index);

/* Script command: formats argument 0 as a decimal into a local buffer (arguments 1-4 are fetched and ignored). */
u32 scrComm_FormatDecimal(void)
{
    char text[32];
    int value = scrGetArg(0);

    scrGetArg(1);
    scrGetArg(2);
    scrGetArg(3);
    scrGetArg(4);
    sprintf(text, "%d", value);
    return 1;
}

} /* extern "C" */
