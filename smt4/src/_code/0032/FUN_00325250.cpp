#include "common.h"

extern "C" {

int FUN_002451ac(u32 btl, int a);
int scrSetResult(int result);
extern u32 btlGetMainState(void);
extern int scrGetArg(void);
extern u8 *dataTableGetEntries(void);

u32 FUN_00325250(void)
{
    int row = scrGetArg();
    u32 btl = btlGetMainState();
    u8 *entries;

    FUN_002451ac(btl, 4);
    entries = dataTableGetEntries();
    scrSetResult(*(u16 *)(entries + row * 4));
    return 1;
}

} /* extern "C" */
