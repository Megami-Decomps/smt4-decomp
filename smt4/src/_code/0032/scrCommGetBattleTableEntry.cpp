#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int value);
u32 btlMainGetDataTable(u32 obj, u32 arg);
int scrGetArg(int index);
u16 *dataTableGetEntries(void);
int dataTableGetCount(u32 arg);

/* Script command: runs dataTableGetCount on the current object's lookup (field 0xf), then passes entry (script argument 0) of the u16 table to scrSetResult. */
u32 scrCommGetBattleTableEntry(void)
{
    int index = scrGetArg(0);
    u32 field = btlMainGetDataTable(reinterpret_cast<u32>(btlGetMainState()), 0xf);
    u16 *table = dataTableGetEntries();

    dataTableGetCount(field);
    scrSetResult(table[index]);
    return 1;
}

} /* extern "C" */
