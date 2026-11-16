#include "shard/ItemStackLimit.h"

extern "C" {

extern ItemCategoryEntry g_itemCategoryTable[12]; /* 0x531158 */

// Find the range of the table that contains the value (NULL when none does).
ItemCategoryEntry *itemCategoryFindByItemId(u32 value)
{
    for (s32 i = 0; i < 12; i += 2) {
        if (g_itemCategoryTable[i].firstId <= value) {
            if (value <= g_itemCategoryTable[i].lastId) {
                return &g_itemCategoryTable[i];
            }
        }
        if (g_itemCategoryTable[i + 1].firstId <= value && value <= g_itemCategoryTable[i + 1].lastId) {
            return &g_itemCategoryTable[i + 1];
        }
    }
    return NULL;
}

} /* extern "C" */
