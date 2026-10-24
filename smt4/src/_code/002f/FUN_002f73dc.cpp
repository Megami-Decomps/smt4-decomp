#include "common.h"

extern "C" {

int btlScriptResolveGroupArg(void);
int scrSetResult(int result);
int scrGetArg(...);
extern int *gameGetSlotTable(void);

u32 FUN_002f73dc(void)
{
    int arg = scrGetArg(0);
    int *party;

    scrGetArg(1);
    btlScriptResolveGroupArg();
    party = gameGetSlotTable();
    scrSetResult(*party <= arg);
    return 1;
}

} /* extern "C" */
