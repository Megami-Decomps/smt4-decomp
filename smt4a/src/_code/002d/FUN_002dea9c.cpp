#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
int FUN_00100388(char *buffer, const char *format, ...);

/* Script command: formats the first script argument as a decimal string. */
u32 FUN_002dea9c(void)
{
    char buffer[36];

    FUN_00100388(buffer, "%d", scrGetArg(0));
    return 1;
}

} /* extern "C" */
