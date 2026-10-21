/* NON_MATCHING: special-mode preference lookup is placed before the shared sort tests instead of in retail's cold block, changing two alignment NOPs; sort bodies otherwise match. */
#include "shard/W5_W5Match2_UniteWork.h"
#include <stdlib.h>

struct FusionSortPreferences {
    u8 unk00[0x11];
    u8 normal;
    u8 special;
};

extern "C" {
extern UniteWork *g_unite;
FusionSortPreferences *FUN_0026140c(void);
s32 devilCompareByRankGradeAscending(const void *a, const void *b);
s32 recordKindOrderCompare(const void *a, const void *b);
s32 FUN_00270d74(const void *a, const void *b);
s32 FUN_00321cc0(const void *a, const void *b);
s32 FUN_002fe074(const void *a, const void *b);
s32 FUN_00375b80(const void *a, const void *b);
s32 FUN_002b2ca8(const void *a, const void *b);
s32 FUN_0034f6fc(const void *a, const void *b);
void arraySortQsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));

void uniteSortCandidateList(void)
{
    UniteWork *work = g_unite;
    const u8 *setting;
    if (work->menu.mode != 2) {
        setting = &FUN_0026140c()->normal;
    } else {
        setting = &FUN_0026140c()->special;
    }
    bool ascending = (*setting & 0x80) == 0;
    if ((*setting & 0x7f) == 1) {
        if (ascending) {
            qsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), devilCompareByRankGradeAscending);
        } else {
            qsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), recordKindOrderCompare);
        }
    }
    if ((*setting & 0x7f) == 2) {
        if (ascending) {
            qsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), FUN_00270d74);
        } else {
            qsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), FUN_00321cc0);
        }
    }
    if ((*setting & 0x7f) == 0x31) {
        if (ascending) {
            qsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), FUN_002fe074);
        } else {
            qsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), FUN_00375b80);
        }
    }
    if ((*setting & 0x7f) == 3) {
        if (ascending) {
            arraySortQsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), FUN_002b2ca8);
        } else {
            arraySortQsort(work->candidates.devilIds, work->candidates.count, sizeof(u16), FUN_0034f6fc);
        }
    }
}
}
