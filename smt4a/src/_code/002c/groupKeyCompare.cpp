#include "common.h"

extern "C" {

typedef struct Group {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 key;
} Group;

Group *FUN_001ab854(int id);
int FUN_002e5220(u16 key);

/* Comparator: entries without a group (id < 0) sort last; otherwise orders by the groups' keys (a - b). */
int groupKeyCompare(u32 unused, int *a, int *b)
{
    int result = 0;

    if (*b < 0) {
        if (*a >= 0) {
            result = 1;
        }
    } else {
        if (*a >= 0) {
            Group *groupB = FUN_001ab854(*b);
            Group *groupA = FUN_001ab854(*a);
            int keyB = FUN_002e5220(groupB->key);
            int keyA = FUN_002e5220(groupA->key);

            return keyA - keyB;
        }
        result = -1;
    }
    return result;
}

} /* extern "C" */
