#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int btlMainGetDataTable(u32 btl, int a);
int scrSetResult(int result);
extern int scrGetArg(u32 index);
extern u8 *dataTableGetEntries(void);

/* Result: halfword `column` of row `row` (0xC-byte rows) of the data table selected via btlMainGetDataTable(btl, 9). */
u32 scrComm_Battle_GetDataTableValue(void)
{
    int row = scrGetArg(0);
    int column = scrGetArg(1);
    u32 btl = reinterpret_cast<u32>(btlGetMainState());
    u8 *entries;

    btlMainGetDataTable(btl, 9);
    entries = dataTableGetEntries();
    scrSetResult(*(u16 *)(entries + row * 0xc + column * 2));
    return 1;
}

} /* extern "C" */
