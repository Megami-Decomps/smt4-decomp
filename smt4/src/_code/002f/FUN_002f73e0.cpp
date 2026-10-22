#include "common.h"

extern "C" {

int btlScriptResolveGroupArg(void);
int scrSetResult(int result);
int scrGetArg(...);
extern int *gameGetSlotTable(void);

u32 FUN_002f73e0(void)
{
    int arg = scrGetArg();
    int *party;

    scrGetArg(1);
    btlScriptResolveGroupArg();
    party = gameGetSlotTable();
    scrSetResult(*party <= arg);
    return 1;
}

} /* extern "C" */
