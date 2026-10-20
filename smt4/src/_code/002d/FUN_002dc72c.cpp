#include "common.h"

extern "C" {

int FUN_002497f8(void *a, void *b);
extern int FUN_0029a924(u32 id);
extern int FUN_0029a9d4(u32 id, u32 flag);

typedef struct Entry {
    /* 0x0 */ u32 id;
    /* 0x4 */ s32 key;
} Entry;

/* Compares two entries by the value FUN_0029a924/FUN_0029a9d4 gives their id; calls FUN_002497f8 on a tie. */
void FUN_002dc72c(Entry *a, Entry *b)
{
    int valueA;
    int valueB;
    int diff;

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
    diff = valueA - valueB;
    if (diff == 0) {
        FUN_002497f8(a, b);
        return;
    }
}

} /* extern "C" */
