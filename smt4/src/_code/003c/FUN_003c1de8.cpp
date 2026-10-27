/* NON_MATCHING: retail keeps the constant 0 in r7 (hoisted out of the loop, pushes r7/r8) for the out-of-range row; built materialises it with movge r0, #0 */
#include "gamedata/DataTable.h"

extern "C" {

/* Subtracts the thresholds of data table 9/1 (99 rows) from *remaining starting at row `start`; returns rows consumed. */
int FUN_003c1de8(int start, u32 *remaining)
{
    int i = start;

    for (;;) {
        if (i == 99) {
            break;
        }
        const u32 *entries = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));
        u32 need = i < 99 ? entries[i - 1] : 0;
        if (need > *remaining) {
            break;
        }
        *remaining -= need;
        i++;
    }
    return i - start;
}

} /* extern "C" */
