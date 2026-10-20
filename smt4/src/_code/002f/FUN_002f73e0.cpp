#include "common.h"

extern "C" {

int FUN_00249a54(void);
int scrSetResult(int result);
int scrGetArg(...);
extern int *gameGetSlotTable(void);

u32 FUN_002f73e0(void)
{
    int arg = scrGetArg();
    int *party;

    scrGetArg(1);
    FUN_00249a54();
    party = gameGetSlotTable();
    scrSetResult(*party <= arg);
    return 1;
}

} /* extern "C" */
