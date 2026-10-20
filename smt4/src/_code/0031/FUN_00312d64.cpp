#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u32 FUN_002451ac(u32 btl, u32 a);
extern u32 btlGetMainState(void);
extern int randNextInRange(u16 limit);
extern s16 dataTableGetCount(u32 table);
extern u8 *dataTableGetEntries(void);

/* Result: a random entry of the data table selected via FUN_002451ac(btl, 0x11). */
u32 FUN_00312d64(void)
{
    u32 table;

    table = btlGetMainState();
    table = FUN_002451ac(table, 0x11);
    scrSetResult(*(u16 *)(dataTableGetEntries() + randNextInRange(dataTableGetCount(table) - 1) * 2));
    return 1;
}

} /* extern "C" */
