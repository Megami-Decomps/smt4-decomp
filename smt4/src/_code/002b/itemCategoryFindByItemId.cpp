#include "shard/ItemStackLimit.h"

extern "C" {

extern ItemCategoryEntry DAT_004042d0[12]; /* 0x531158 */

// Find the range of the table that contains the value (NULL when none does).
ItemCategoryEntry *itemCategoryFindByItemId(u32 value)
{
    for (s32 i = 0; i < 12; i += 2) {
        if (DAT_004042d0[i].firstId <= value) {
            if (value <= DAT_004042d0[i].lastId) {
                return &DAT_004042d0[i];
            }
        }
        if (DAT_004042d0[i + 1].firstId <= value && value <= DAT_004042d0[i + 1].lastId) {
            return &DAT_004042d0[i + 1];
        }
    }
    return NULL;
}

} /* extern "C" */
