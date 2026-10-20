#include "common.h"

extern "C" {

int FUN_002451ac(u32 btl, int a);
int scrSetResult(int result);
extern u32 btlGetMainState(void);
extern int scrGetArg(u32 index);
extern u8 *dataTableGetEntries(void);

/* Result: halfword `column` of row `row` (0xC-byte rows) of the data table selected via FUN_002451ac(btl, 9). */
u32 FUN_00312bc8(void)
{
    int row = scrGetArg(0);
    int column = scrGetArg(1);
    u32 btl = btlGetMainState();
    u8 *entries;

    FUN_002451ac(btl, 9);
    entries = dataTableGetEntries();
    scrSetResult(*(u16 *)(entries + row * 0xc + column * 2));
    return 1;
}

} /* extern "C" */
