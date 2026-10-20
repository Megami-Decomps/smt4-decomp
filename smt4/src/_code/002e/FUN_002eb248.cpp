#include "common.h"

extern "C" {

int FUN_002592d8(void);
int scrGetArg(int index);

/* Script command that reads its five arguments and does nothing else. */
u32 FUN_002eb248(void)
{
    FUN_002592d8();
    scrGetArg(1);
    scrGetArg(2);
    scrGetArg(3);
    scrGetArg(4);
    return 1;
}

} /* extern "C" */
