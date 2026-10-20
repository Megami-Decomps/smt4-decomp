#include "common.h"

extern "C" {

typedef struct Group {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 key;
} Group;

Group *gameGetSlotRecord(int id);
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
            Group *groupB = gameGetSlotRecord(*b);
            Group *groupA = gameGetSlotRecord(*a);
            int keyB = dataTableGetEntry0102Value(groupB->key);
            int keyA = dataTableGetEntry0102Value(groupA->key);

            return keyA - keyB;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
