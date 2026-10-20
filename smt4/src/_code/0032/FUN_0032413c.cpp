#include "common.h"

extern "C" {

int FUN_002451ac(u32 btl, int a);
int scrSetResult(int result);
extern u32 btlGetMainState(void);
extern int scrGetArg(u32 index);
extern u8 *dataTableGetEntries(void);

/* Script command: result is field `field` (1-3) of row `row` (6-byte rows) of the data table selected via FUN_002451ac(btl, 5). */
u32 FUN_0032413c(void)
{
    int row = scrGetArg(0);
    int field = scrGetArg(1);
    u32 btl = btlGetMainState();
    u8 *entries;
    u16 value;

    FUN_002451ac(btl, 5);
    entries = dataTableGetEntries();
    value = 0;
    switch (field) {
    case 1:
        value = *(u16 *)(entries + row * 6);
        break;
    case 2:
        value = *(u16 *)(entries + row * 6 + 2);
        break;
    case 3:
        value = *(u16 *)(entries + row * 6 + 4);
        break;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
