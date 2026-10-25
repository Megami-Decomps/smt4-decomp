#include "battle/Talk/TalkValueRecord.h"
#include "gamedata/DataTable.h"

extern "C" {
extern void *g_btlTalk;
void scrSetResult(s32 result);
s32 scrGetArg(u32 index);
void *dataTableFileTouch(void *file);

// Read a default or grouped value from the selected negotiation table record.
u32 FUN_00318ab0(void)
{
    s32 row = scrGetArg(0);
    s32 group = scrGetArg(1);
    s32 index = scrGetArg(2);
    void *table = dataTableFileTouch(g_btlTalk);
    dataTableGetCount(table);
    TalkValueRecord *records = static_cast<TalkValueRecord *>(dataTableGetEntries(table));
    u16 value;
    if (group == 0) {
        value = records[row].values[index];
    } else {
        u16 *groupValues = records[row].groups[group - 1];
        value = groupValues[index];
    }
    scrSetResult(value);
    return 1;
}
}
