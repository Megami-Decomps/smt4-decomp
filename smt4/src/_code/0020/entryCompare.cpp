#include "common.h"

extern "C" {

/* Record looked up for an index; the sort key is the halfword at 0x46. */
typedef struct {
    u8 unk00[0x46];
    u16 key;            /* 0x46 */
} Record;

Record *FUN_002a8740(int index);
int FUN_00288118(u16 key);

/* Compares two record indices: a negative index sorts as "none" (none vs none = 0, valid after none = 1 / before = -1). */
int entryCompare(u32 unused, int *first, int *second)
{
    int result = 0;

    if (*second < 0) {
        if (*first >= 0) {
            result = 1;
        }
    } else {
        if (*first >= 0) {
            Record *secondRecord = FUN_002a8740(*second);
            Record *firstRecord = FUN_002a8740(*first);
            int secondOrder = FUN_00288118(secondRecord->key);
            int firstOrder = FUN_00288118(firstRecord->key);

            return firstOrder - secondOrder;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
