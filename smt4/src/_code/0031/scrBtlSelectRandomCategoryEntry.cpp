#include "battle/BtlMainAccess.h"
#include "common.h"
#include "gamedata/DataTable.h"

struct CategoryPair {
    u16 id;
    u16 category;
};

extern "C" {
s32 scrGetArg(u32 index);
void *btlMainGetDataTable(void *state, u32 table);
u32 dataTableGetCount(void *table);
s32 randNextInRange(u16 maximum);
void scrSetResult(s32 result);

// Pick a random table entry whose category matches the script argument.
u32 scrBtlSelectRandomCategoryEntry()
{
    u32 category = scrGetArg(0);
    void *table = btlMainGetDataTable(static_cast<void *>(btlGetMainState()), 8);
    CategoryPair *pair = static_cast<CategoryPair *>(static_cast<void *>(reinterpret_cast<u16 *>(dataTableGetEntries(table))));
    s32 remaining = dataTableGetCount(table) >> 1;
    u16 matches[12];
    s32 count = 0;
    for (s32 i = 0; i < remaining; i++, pair++) {
        if (pair->category == category) {
            u16 *destination = &matches[count++];
            *destination = pair->id;
        }
    }
    s32 selected = randNextInRange((u16)(count - 1));
    scrSetResult(matches[selected]);
    return 1;
}
}
