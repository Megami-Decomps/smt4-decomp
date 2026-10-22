/* NON_MATCHING: retail keeps the remaining count and category walker in different registers. */
#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void *btlGetMainState();
void *btlGetTable(void *state, u32 table);
u16 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 randRange(u16 maximum);
void scrSetResult(s32 result);

// Pick a random table entry whose category matches the script argument.
u32 FUN_003a9cac()
{
    u32 category = scrGetArg(0);
    void *table = btlGetTable(btlGetMainState(), 8);
    u16 *entry = dataTableGetEntries(table);
    s32 remaining = dataTableGetCount(table) >> 1;
    u16 matches[12];
    s32 count = 0;
    if (remaining > 0) {
        for (u16 *entryCategory = entry + 1; remaining > 0; --remaining) {
            if (*entryCategory == category) {
                matches[count++] = *entry;
            }
            entryCategory += 2;
            entry += 2;
        }
    }
    s32 selected = randRange((u16)(count - 1));
    scrSetResult(matches[selected]);
    return 1;
}
}
