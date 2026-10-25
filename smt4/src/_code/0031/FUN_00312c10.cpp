/* NON_MATCHING: the clamp compiles to cmp/movlt and a folded [r0, #-2] load; retail uses cmp/movge and an explicit sub of 1 before indexing. */
#include "common.h"

extern "C" {

int scrSetResult(int value);
u32 btlMainGetDataTable(u32 obj, u32 arg);
u32 btlGetMainState(void);
int scrGetArg(u32 index);
int dataTableGetCount(u32 arg);
u16 *dataTableGetEntries(u32 table);


/* Script command: passes entry (script argument 0, clamped to 1..count) of the u16 table, counted by dataTableGetCount, to scrSetResult. */
u32 FUN_00312c10(void)
{
    int requested = scrGetArg(0);
    u32 field = btlMainGetDataTable(btlGetMainState(), 0xd);
    u16 *table = dataTableGetEntries(field);
    int count = dataTableGetCount(field);
    int index;
    if (requested < 1) {
        index = 1;
    } else {
        index = count;
        if (index >= requested) {
            index = requested;
        }
    }
    int slot = index - 1;
    scrSetResult(table[slot]);
    return 1;
}

} /* extern "C" */
