/* NON_MATCHING: retail keeps the constant 0 in r7 (hoisted out of the loop, pushes r7/r8) for the out-of-range row; built uses movge r0, #0 and no r7 */
#include "common.h"

extern "C" {

extern u32 dataTableGet(u32 id, u32 index);
extern u32 *dataTableGetEntries(u32 table);

/* Subtracts the thresholds of data table 9/1 (99 rows) from *remaining starting at row `start`; returns rows consumed. */
int FUN_003c1de8(int start, u32 *remaining)
{
    int i = start;
    u32 need;

    for (;;) {
        if (i == 99) {
            break;
        }
        u32 *entries = dataTableGetEntries(dataTableGet(9, 1));
        need = 0;
        if (i < 99) {
            need = entries[i - 1];
        }
        if (need > *remaining) {
            break;
        }
        *remaining -= need;
        i++;
    }
    return i - start;
}

} /* extern "C" */
