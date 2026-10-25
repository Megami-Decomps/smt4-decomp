#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(int value);
u32 btlMainGetDataTable(u32 obj, u32 arg);
int scrGetArg(u32 index);
int dataTableGetCount(u32 arg);
u16 *dataTableGetEntries(u32 table);


/* Script command: passes entry (script argument 0, clamped to 1..count) of the u16 table, counted by dataTableGetCount, to scrSetResult. */
u32 scrCommBtlTableValue(void)
{
    int requested = scrGetArg(0);
    u32 field = btlMainGetDataTable(reinterpret_cast<u32>(btlGetMainState()), 0xd);
    u16 *table = dataTableGetEntries(field);
    int count = dataTableGetCount(field);
    int index;
    if (requested < 1) {
        index = 1;
    } else {
        if (count < requested)
            index = count;
        else
            index = requested;
    }
    int slot = index - 1;
    scrSetResult(table[slot]);
    return 1;
}

} /* extern "C" */
