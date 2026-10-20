#include "common.h"

extern "C" {

int scrGetArg(int index);
int FUN_00100388(char *dst, const char *format, ...);

/* Script command: formats argument 0 as a decimal into a local buffer (arguments 1-4 are fetched and ignored). */
u32 scrComm_FormatDecimal(void)
{
    char text[32];
    int value = scrGetArg(0);

    scrGetArg(1);
    scrGetArg(2);
    scrGetArg(3);
    scrGetArg(4);
    FUN_00100388(text, "%d", value);
    return 1;
}

} /* extern "C" */
