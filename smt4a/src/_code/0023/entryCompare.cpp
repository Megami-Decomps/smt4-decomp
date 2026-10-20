#include "common.h"

extern "C" {

/* Record looked up for an index; the sort key is the halfword at 0x62. */
typedef struct {
    u8 unk00[0x62];
    u16 key;            /* 0x62 */
} Record;

Record *gameGetSlotRecord(int index);
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
            Record *secondRecord = gameGetSlotRecord(*second);
            Record *firstRecord = gameGetSlotRecord(*first);
            int secondOrder = dataTableGetEntry0102Value(secondRecord->key);
            int firstOrder = dataTableGetEntry0102Value(firstRecord->key);

            return secondOrder - firstOrder;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
