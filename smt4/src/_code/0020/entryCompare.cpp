#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {


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
            StatBlock *secondRecord = gameGetUnitRecord(*second);
            StatBlock *firstRecord = gameGetUnitRecord(*first);
            int secondOrder = dataTableGetEntry0102Value(secondRecord->id);
            int firstOrder = dataTableGetEntry0102Value(firstRecord->id);

            return firstOrder - secondOrder;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
