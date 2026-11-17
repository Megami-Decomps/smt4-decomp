#include "gamedata/SaveSlotRecord.h"

extern "C" {

int dataTableGetEntry0102Value(u16 key);

/* Compares two record indices: a negative index sorts as "none" (none vs none = 0, valid after none = 1 / before = -1). */
int entryCompare(int *second, int *first)
{
    int result = 0;

    if (*second < 0) {
        if (*first >= 0) {
            result = 1;
        }
    } else {
        if (*first >= 0) {
            SlotRecordA *secondRecord = gameGetSlotRecord(*second);
            SlotRecordA *firstRecord = gameGetSlotRecord(*first);
            int secondOrder = dataTableGetEntry0102Value(secondRecord->id);
            int firstOrder = dataTableGetEntry0102Value(firstRecord->id);

            return secondOrder - firstOrder;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
