#include "common.h"

extern "C" {

int btlMainGetDataTable(u32 btl, int a);
int scrSetResult(int result);
extern u32 btlGetMainState(void);
extern int scrGetArg(int index);
extern u8 *dataTableGetEntries(void);

u32 scrComm_Battle_GetTableEntryFirst(void)
{
    int row = scrGetArg(0);
    u32 btl = btlGetMainState();
    u8 *entries;

    btlMainGetDataTable(btl, 4);
    entries = dataTableGetEntries();
    scrSetResult(*(u16 *)(entries + row * 4));
    return 1;
}

} /* extern "C" */
