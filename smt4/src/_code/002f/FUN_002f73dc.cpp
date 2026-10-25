#include "common.h"

extern "C" {

int btlScriptResolveGroupArg(int group);
int scrSetResult(int result);
int scrGetArg(...);
extern int *gameGetSlotTable(void);

u32 FUN_002f73dc(void)
{
    int arg = scrGetArg(0);
    int *party;

    btlScriptResolveGroupArg(scrGetArg(1));
    party = gameGetSlotTable();
    scrSetResult(*party <= arg);
    return 1;
}

} /* extern "C" */
