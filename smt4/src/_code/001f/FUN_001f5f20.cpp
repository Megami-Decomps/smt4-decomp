#include "common.h"

extern "C" {

int FUN_00257568(void *a, void *b);
extern int FUN_0029a924(u32 id);
extern int FUN_0029a9d4(u32 id, int flag);

typedef struct Entry {
    /* 0x0 */ u32 id;
    /* 0x4 */ s32 key;
} Entry;

/* Compares two entries by the value FUN_0029a924/FUN_0029a9d4 gives their id; falls back to FUN_00257568 on a tie. */
int FUN_001f5f20(Entry *a, Entry *b)
{
    int valueA;
    int valueB;

    if (a->key < 0) {
        valueA = FUN_0029a9d4(a->id, 1);
    } else {
        valueA = FUN_0029a924(a->id);
    }
    if (b->key < 0) {
        valueB = FUN_0029a9d4(b->id, 1);
    } else {
        valueB = FUN_0029a924(b->id);
    }
    valueB = valueB - valueA;
    if (valueB == 0) {
        return FUN_00257568(a, b);
    }
    return valueB;
}

} /* extern "C" */
