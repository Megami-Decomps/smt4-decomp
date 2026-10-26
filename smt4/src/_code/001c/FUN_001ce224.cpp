#include "common.h"
#include "code/Code001c_Smt4.h"

extern "C" {

/* The unite work area: only the selected-entry count is named. */
struct UniteSelectionView {
    /* 0x0000 */ u8 unk0000[0x933A];
    /* 0x933A */ u16 selectedCount;
};

/* A list of entries with ids (u16 at +2) and kinds (u8 at +0x1A). */
struct UniteEntryList {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 ids[12];
    /* 0x1A */ u8 kinds[12];
};

extern UniteSelectionView *g_unite;
s32 FUN_0029ce60(u32 id, s32 a, s32 b, s32 c, s32 d);

/* Sums the results of requesting every entry of kind 3 from the unite list. */
s32 FUN_001ce224(UniteEntryList *list)
{
    UniteSelectionView *unite = g_unite;
    s32 total = 0;
    s32 i;

    for (i = 0; i < unite->selectedCount; i++) {
        if (list->kinds[i] == 3) {
            total += FUN_0029ce60(list->ids[i], 1, 0, 0, 0);
        }
    }
    return total;
}

} /* extern "C" */
