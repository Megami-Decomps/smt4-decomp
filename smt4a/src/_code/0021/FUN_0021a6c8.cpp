/* NON_MATCHING: sorts the list entries and assigns each its two row ids (one or two groups, centred); written from the decompilation, the loop retail unrolls by two and the group index handling are not compared with retail */
#include "common.h"

struct ListEntry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 key;         /* entries are sorted by this */
    /* 0x14 */ u8 unk14[0x20];
    /* 0x34 */ s32 rowA;
    /* 0x38 */ s32 rowB;
    /* 0x3C */ u8 unk3C[4];
};

struct ListWork {
    /* 0x0000 */ u8 unk0000[0x4850];
    /* 0x4850 */ s32 count;
    /* 0x4854 */ u8 unk4854[2];
    /* 0x4856 */ u8 layoutChosen;
    /* 0x4857 */ u8 singleGroup;
    /* 0x4858 */ ListEntry entries[1];
};

#define LIST_ENTRY_STRIDE 0x40

extern "C" {
s32 qsort(void *base, u32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00270d30(const void *a, const void *b);

/* Centres `size` entries on five slots: `local` is the index inside the block. */
static __inline s32 listCentreSlot(s32 local, s32 size)
{
    return (size & 1) != 0 ? local + (5 - size) / 2 : local + (4 - size) / 2;
}

void FUN_0021a6c8(ListWork *work)
{
    qsort(work->entries, work->count, LIST_ENTRY_STRIDE, FUN_00270d30);

    s32 groupSize[2] = { 0, 0 };
    s32 group = 0;
    for (s32 i = 0; i < work->count; i++) {
        ListEntry *entry = (ListEntry *)((u8 *)work->entries + i * LIST_ENTRY_STRIDE);
        ListEntry *previous = (ListEntry *)((u8 *)entry - LIST_ENTRY_STRIDE);
        if (i > 0 && previous->key < entry->key && group < 1)
            group++;
        groupSize[group]++;
    }

    if (work->layoutChosen == 0) {
        if (groupSize[0] > 0) {
            work->singleGroup = groupSize[1] >= 1 ? 0 : 1;
            work->layoutChosen = 1;
        } else if (groupSize[1] >= 1) {
            work->singleGroup = 1;
            work->layoutChosen = 1;
        }
    }

    for (s32 i = 0; i < work->count; i++) {
        ListEntry *entry = (ListEntry *)((u8 *)work->entries + i * LIST_ENTRY_STRIDE);
        if (work->singleGroup != 0) {
            s32 size = groupSize[0] > i ? groupSize[0] : groupSize[1];
            s32 slot = listCentreSlot(i, size);
            if ((size & 1) != 0) {
                entry->rowA = slot + 0x1A1;
                entry->rowB = slot + 0x1AA;
            } else {
                entry->rowA = slot + 0x1A6;
                entry->rowB = slot + 0x1AF;
            }
        } else if (i < groupSize[0]) {
            s32 slot = listCentreSlot(i, groupSize[0]);
            if ((groupSize[0] & 1) != 0) {
                entry->rowA = slot + 0x14A;
                entry->rowB = slot + 0x154;
            } else {
                entry->rowA = slot + 0x165;
                entry->rowB = slot + 0x16D;
            }
        } else {
            s32 slot = listCentreSlot(i - groupSize[0], groupSize[1]);
            if ((groupSize[1] & 1) != 0) {
                entry->rowA = slot + 0x13B;
                entry->rowB = slot + 0x145;
            } else {
                entry->rowA = slot + 0x159;
                entry->rowB = slot + 0x161;
            }
        }
    }
}

} /* extern "C" */
