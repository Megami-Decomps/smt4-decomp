#include "camp/Unite/UniteGlobals.h"
#include "status/StatusCamera.h"

extern "C" {
s32 devilCompareRaceLevelDescending(const u16 *, const u16 *);
s32 devilCompareByRankGradeId(const u16 *, const u16 *);
s32 FUN_001d1d78(const u16 *, const u16 *);
s32 uniteCandidateCompare(const u16 *, const u16 *);
s32 devilCompareBySetCategoryGrade(const u16 *, const u16 *);
s32 devilCompare(const u16 *, const u16 *);
s32 devilCompareTablePriority(const u16 *, const u16 *);
s32 devilCompareByEntryValue(const u16 *, const u16 *);
void qsort(void *entries, u32 count, u32 stride, s32 (*compare)(const u16 *, const u16 *));
void arraySortQsort(void *entries, u32 count, u32 stride, s32 (*compare)(const u16 *, const u16 *));

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
            qsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareRaceLevelDescending);
        else
            qsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareByRankGradeId);
    }
    if ((*preference & 0x7f) == 2) {
        if (ascending)
            qsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), FUN_001d1d78);
        else
            qsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), uniteCandidateCompare);
    }
    if ((*preference & 0x7f) == 0x31) {
        if (ascending)
            qsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareBySetCategoryGrade);
        else
            qsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompare);
    }
    if ((*preference & 0x7f) == 3) {
        if (ascending)
            arraySortQsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareTablePriority);
        else
            arraySortQsort(work->portraitSelectionIV.desired, work->portraitSelectionIV.candidateCount, sizeof(u16), devilCompareByEntryValue);
    }
}
}
