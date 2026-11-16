#include "common.h"

extern "C" {

int itemSortCompareByCategoryAndId(void *a, void *b);
extern int appGetRemainingCapacity(u32 id);
extern int FUN_0029a9d4(u32 id, u32 flag);

typedef struct Entry {
    /* 0x0 */ u32 id;
    /* 0x4 */ s32 key;
} Entry;

/* Compares two entries by the value appGetRemainingCapacity/FUN_0029a9d4 gives their id; calls itemSortCompareByCategoryAndId on a tie. */
void FUN_002dc72c(Entry *a, Entry *b)
{
    int valueA;
    int valueB;
    int diff;

    if (a->key < 0) {
        valueA = FUN_0029a9d4(a->id, 1);
    } else {
        valueA = appGetRemainingCapacity(a->id);
    }
    if (b->key < 0) {
        valueB = FUN_0029a9d4(b->id, 1);
    } else {
        valueB = appGetRemainingCapacity(b->id);
    }
    diff = valueA - valueB;
    if (diff == 0) {
        itemSortCompareByCategoryAndId(a, b);
        return;
    }
}

} /* extern "C" */
