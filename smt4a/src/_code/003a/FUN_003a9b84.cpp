/* Looks up the table for the current kind (17, or 18 when scrGetArg says so) and runs scrSetResult on the entry for its last index. */
#include "common.h"

extern "C" {

extern u32 btlGetMainState(void);
extern s32 FUN_0014bef4(u16 count);
extern u16 dataTableGetCount(u32 table);
extern u16 *dataTableGetEntries(u32 table);
extern s32 scrGetArg(s32 arg);
extern void scrSetResult(u32 value);
extern u32 FUN_003ef960(u32 owner, u32 kind);

s32 FUN_003a9b84(void)
{
    u32 kind = 0x11;
    u32 table;
    u16 *entries;

    if (scrGetArg(0) != 0) {
        kind = 0x12;
    }
    table = FUN_003ef960(btlGetMainState(), kind);
    entries = dataTableGetEntries(table);
    scrSetResult(entries[FUN_0014bef4(dataTableGetCount(table) - 1)]);
    return 1;
}

}
