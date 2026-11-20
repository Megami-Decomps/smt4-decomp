#include "common.h"

extern "C" {

int itemSortCompareRankThenKey(void *a, void *b);
extern int appGetRemainingCapacity(u32 id);
extern int skillGetDiscountedCost(u32 id, int flag);

typedef struct Entry {
    /* 0x0 */ u32 id;
    /* 0x4 */ s32 key;
} Entry;

/* Compares two entries by the value appGetRemainingCapacity/skillGetDiscountedCost gives their id; falls back to itemSortCompareRankThenKey on a tie. */
int FUN_001f5f20(Entry *a, Entry *b)
{
    int valueA;
    int valueB;

    if (a->key < 0) {
        valueA = skillGetDiscountedCost(a->id, 1);
    } else {
        valueA = appGetRemainingCapacity(a->id);
    }
    if (b->key < 0) {
        valueB = skillGetDiscountedCost(b->id, 1);
    } else {
        valueB = appGetRemainingCapacity(b->id);
    }
    valueB = valueB - valueA;
    if (valueB == 0) {
        return itemSortCompareRankThenKey(a, b);
    }
    return valueB;
}

} /* extern "C" */
