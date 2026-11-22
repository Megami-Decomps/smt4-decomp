#include "gfx/AnimKeyTable.h"

extern "C" {

/* Finds the key of the first group at or after `key`, stepping back one key when it is not matched
 * exactly (and is not the group's first). */
s32 animKeyTableFindKey(AnimKeyTable *table, s32 key)
{
    s32 group = 0;
    s32 index = table->ranges[group].first;
    s32 last = (index - 1) + table->ranges[group].count;

    for (; index <= last; index++) {
        if (table->keys[index].key >= key) {
            if (table->keys[index].key != key && table->ranges[group].first != index) {
                index--;
            }
            return index;
        }
    }
    return index;
}

} /* extern "C" */
