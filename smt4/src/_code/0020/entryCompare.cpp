#include "common.h"

extern "C" {

/* Record looked up for an index; the sort key is the halfword at 0x46. */
typedef struct {
    u8 unk00[0x46];
    u16 key;            /* 0x46 */
} Record;

Record *gameGetUnitRecord(int index);
int dataTableGetEntry0102Value(u16 key);

/* Compares the second index against the first: negative means "none"; valid entries sort by table value. */
int entryCompare(int *second, int *first)
{
    int result = 0;

    if (*second < 0) {
        if (*first >= 0) {
            result = 1;
        }
    } else {
        if (*first >= 0) {
            Record *secondRecord = gameGetUnitRecord(*second);
            Record *firstRecord = gameGetUnitRecord(*first);
            int secondOrder = dataTableGetEntry0102Value(secondRecord->key);
            int firstOrder = dataTableGetEntry0102Value(firstRecord->key);

            return firstOrder - secondOrder;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
