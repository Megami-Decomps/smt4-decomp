#include "common.h"

extern "C" {

int scrGetArgString(u32 index);
int scrGetArg(int index);

/* Script command that reads its five arguments and does nothing else. */
u32 scrCommIgnoreArgs5(void)
{
    scrGetArgString(0);
    scrGetArg(1);
    scrGetArg(2);
    scrGetArg(3);
    scrGetArg(4);
    return 1;
}

} /* extern "C" */
