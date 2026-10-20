#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
int FUN_002be624(char *buffer, const char *format, ...);

/* Script command: formats the first script argument as a decimal string. */
u32 FUN_0020ebe4(void)
{
    char buffer[36];

    FUN_002be624(buffer, "%d", scrGetArg(0));
    return 1;
}

} /* extern "C" */
