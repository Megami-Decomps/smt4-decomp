/* NON_MATCHING: preference pointer and ascending flag occupy swapped r5/r6 registers. */
#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {
extern UniteWork *g_unite;
u8 *FUN_002a0d0c(void);
s32 devilCompareRaceLevelDescending(const u16 *, const u16 *);
s32 devilCompareByRankGradeId(const u16 *, const u16 *);
s32 FUN_001d1d78(const u16 *, const u16 *);
s32 FUN_002c6e90(const u16 *, const u16 *);
s32 devilCompareBySetCategoryGrade(const u16 *, const u16 *);
s32 devilCompare(const u16 *, const u16 *);
s32 devilCompareTablePriority(const u16 *, const u16 *);
s32 devilCompareByEntryValue(const u16 *, const u16 *);
void FUN_002b7bca(void *entries, u32 count, u32 stride, s32 (*compare)(const u16 *, const u16 *));
void FUN_0027f3dc(void *entries, u32 count, u32 stride, s32 (*compare)(const u16 *, const u16 *));

// Apply the saved ascending/descending sort preference to the fusion demon list.
void FUN_00191df4(void)
{
    union FusionSortView {
        UniteWork base;
        struct { u8 unk0000[0x6670]; u32 count; } list;
    };
    FusionSortView *work = reinterpret_cast<FusionSortView *>(g_unite);
    u8 *preference = work->base.menu.mode == 1 ? FUN_002a0d0c() + 0x12 : FUN_002a0d0c() + 0x11;
    bool ascending = (*preference & 0x80) == 0;
    if ((*preference & 0x7f) == 1) {
        if (ascending)
            FUN_002b7bca(work->base.portraitSelectionIV.desired, work->list.count, 2, devilCompareRaceLevelDescending);
        else
            FUN_002b7bca(work->base.portraitSelectionIV.desired, work->list.count, 2, devilCompareByRankGradeId);
    }
    if ((*preference & 0x7f) == 2) {
        if (ascending)
            FUN_002b7bca(work->base.portraitSelectionIV.desired, work->list.count, 2, FUN_001d1d78);
        else
            FUN_002b7bca(work->base.portraitSelectionIV.desired, work->list.count, 2, FUN_002c6e90);
    }
    if ((*preference & 0x7f) == 0x31) {
        if (ascending)
            FUN_002b7bca(work->base.portraitSelectionIV.desired, work->list.count, 2, devilCompareBySetCategoryGrade);
        else
            FUN_002b7bca(work->base.portraitSelectionIV.desired, work->list.count, 2, devilCompare);
    }
    if ((*preference & 0x7f) == 3) {
        if (ascending)
            FUN_0027f3dc(work->base.portraitSelectionIV.desired, work->list.count, 2, devilCompareTablePriority);
        else
            FUN_0027f3dc(work->base.portraitSelectionIV.desired, work->list.count, 2, devilCompareByEntryValue);
    }
}
}
