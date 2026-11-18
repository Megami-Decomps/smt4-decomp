#include "camp/Unite/UniteGlobals.h"
#include "status/StatusCamera.h"

extern "C" {
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
void uniteSortCandidateList(void)
{
    UniteWork *work = g_unite;
    const u8 *preference;
    if (work->menu.mode == 1)
        preference = &gameDataGetSortPreferences()[0x12];
    else
        preference = &gameDataGetSortPreferences()[0x11];
    bool ascending = (*preference & 0x80) == 0;
    if ((*preference & 0x7f) == 1) {
        if (ascending)
            FUN_002b7bca(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareRaceLevelDescending);
        else
            FUN_002b7bca(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareByRankGradeId);
    }
    if ((*preference & 0x7f) == 2) {
        if (ascending)
            FUN_002b7bca(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), FUN_001d1d78);
        else
            FUN_002b7bca(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), FUN_002c6e90);
    }
    if ((*preference & 0x7f) == 0x31) {
        if (ascending)
            FUN_002b7bca(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareBySetCategoryGrade);
        else
            FUN_002b7bca(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompare);
    }
    if ((*preference & 0x7f) == 3) {
        if (ascending)
            FUN_0027f3dc(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareTablePriority);
        else
            FUN_0027f3dc(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareByEntryValue);
    }
}
}
