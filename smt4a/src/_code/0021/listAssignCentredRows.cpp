/* NON_MATCHING: 261 lines (233 by shape). The row-id loop is retail's block for block. Retail unrolls the grouping loop by two (a peeled odd iteration, then pairs), cross-jumps the layout choice into one `singleGroup = 1; layoutChosen = 1` tail and stores layoutChosen through a pool-loaded offset; this build keeps the loop rolled and predicates the layout stores, which shifts the registers of the row-id loop. */
#include "common.h"

struct ListEntry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 key;         /* entries are sorted by this */
    /* 0x14 */ u8 unk14[0x20];
    /* 0x34 */ s32 rowA;
    /* 0x38 */ s32 rowB;
    /* 0x3C */ u8 unk3C[4];
};

struct CentredListWork {
    /* 0x0000 */ u8 unk0000[0x4850];
    /* 0x4850 */ s32 count;
    /* 0x4854 */ u8 unk4854[2];
    /* 0x4856 */ u8 layoutChosen;
    /* 0x4857 */ u8 singleGroup;
    /* 0x4858 */ ListEntry entries[1];   /* `count` of them */
};

extern "C" {
s32 qsort(void *base, u32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00270d30(const void *a, const void *b);

/* Sorts the list entries by key, splits them into at most two groups (a new group starts where the key rises) and
   gives each entry its two row ids, each group centred on five slots (one layout for a single group, another for
   two). */
void listAssignCentredRows(CentredListWork *work)
{
    qsort(work->entries, work->count, sizeof(ListEntry), FUN_00270d30);

    s32 groupSize[2] = { 0, 0 };
    s32 group = 0;
    for (s32 i = 0; i < work->count; i++) {
        if (i > 0 && work->entries[i - 1].key < work->entries[i].key && group < 1)
            group++;
        groupSize[group]++;
    }

    if (work->layoutChosen == 0) {
        if (groupSize[0] > 0) {
            if (groupSize[1] > 0)
                work->singleGroup = 0;
            else
                work->singleGroup = 1;
            work->layoutChosen = 1;
        } else if (groupSize[1] > 0) {
            work->singleGroup = 1;
            work->layoutChosen = 1;
        }
    }

    for (s32 i = 0; i < work->count; i++) {
        if (work->singleGroup != 0) {
            s32 size = groupSize[0] > i ? groupSize[0] : groupSize[1];
            if ((size & 1) != 0) {
                s32 slot = i + (5 - size) / 2;
                work->entries[i].rowA = slot + 0x1A1;
                work->entries[i].rowB = slot + 0x1AA;
            } else {
                s32 slot = i + (4 - size) / 2;
                work->entries[i].rowA = slot + 0x1A6;
                work->entries[i].rowB = slot + 0x1AF;
            }
        } else if (groupSize[0] > i) {
            if ((groupSize[0] & 1) != 0) {
                s32 slot = i + (5 - groupSize[0]) / 2;
                work->entries[i].rowA = slot + 0x14A;
                work->entries[i].rowB = slot + 0x154;
            } else {
                s32 slot = i + (4 - groupSize[0]) / 2;
                work->entries[i].rowA = slot + 0x165;
                work->entries[i].rowB = slot + 0x16D;
            }
        } else {
            s32 local = i - groupSize[0];
            if ((groupSize[1] & 1) != 0) {
                s32 slot = local + (5 - groupSize[1]) / 2;
                work->entries[i].rowA = slot + 0x13B;
                work->entries[i].rowB = slot + 0x145;
            } else {
                s32 slot = local + (4 - groupSize[1]) / 2;
                work->entries[i].rowA = slot + 0x159;
                work->entries[i].rowB = slot + 0x161;
            }
        }
    }
}

} /* extern "C" */
