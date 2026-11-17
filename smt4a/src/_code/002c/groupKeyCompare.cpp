#include "gamedata/SaveSlotRecord.h"

extern "C" {

int dataTableGetEntry0102Value(u16 key);

/* Comparator: entries without a group (id < 0) sort last; otherwise orders by the groups' keys (a - b). */
int groupKeyCompare(int *b, int *a)
{
    int result = 0;

    if (*b < 0) {
        if (*a >= 0) {
            result = 1;
        }
    } else {
        if (*a >= 0) {
            SlotRecordA *groupB = gameGetSlotRecord(*b);
            SlotRecordA *groupA = gameGetSlotRecord(*a);
            int keyB = dataTableGetEntry0102Value(groupB->id);
            int keyA = dataTableGetEntry0102Value(groupA->id);

            return keyA - keyB;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
