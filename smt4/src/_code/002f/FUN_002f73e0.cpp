#include "common.h"

extern "C" {

int FUN_00249a54(void);
int scrSetResult(int result);
int scrGetArg(...);
extern int *FUN_002a8764(void);

u32 FUN_002f73e0(void)
{
    int arg = scrGetArg();
    int *party;

    scrGetArg(1);
    FUN_00249a54();
    party = FUN_002a8764();
    scrSetResult(*party <= arg);
    return 1;
}

} /* extern "C" */
