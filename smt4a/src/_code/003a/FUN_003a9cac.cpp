/* NON_MATCHING: the match store keeps the loaded id and the slot address in swapped scratch registers (ip/r3). */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlTables.h"

struct CategoryPair {
    u16 id;
    u16 category;
};

extern "C" {
s32 scrGetArg(u32 index);
u16 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 randRange(u16 maximum);
void scrSetResult(s32 result);

// Pick a random table entry whose category matches the script argument.
u32 FUN_003a9cac()
{
    u32 category = scrGetArg(0);
    void *table = btlGetTable(btlGetMainState(), 8);
    CategoryPair *pair = static_cast<CategoryPair *>(static_cast<void *>(dataTableGetEntries(table)));
    s32 remaining = dataTableGetCount(table) >> 1;
    u16 matches[12];
    s32 count = 0;
    for (s32 i = 0; i < remaining; i++, pair++) {
        if (pair->category == category) {
            matches[count++] = pair->id;
        }
    }
    s32 selected = randRange((u16)(count - 1));
    scrSetResult(matches[selected]);
    return 1;
}
}
