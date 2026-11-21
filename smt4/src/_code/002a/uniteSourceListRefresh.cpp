/* NON_MATCHING: retail keeps the list position's two addends, the row count and a second copy of the selection
 * pointer in saved registers (eight pushed, this build six) and peels the first item-count test of the region loop. */
#include "ui/UiControl.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "camp/Unite/UniteGlobals.h"
#include "camp/Unite/UnitePreferences.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"

extern "C" {
s32 resourceRunOperationIfUnblocked(const ScrollSelection *selection);
void gridNavigationConfigure(ScrollSelection *selection, u32 count, u32 visible, u32 option, u32 first, u32 second);
u16 ifTouchRegionAddRequested(u32 table, u32 index);
}

/* Resizes the source list for the unlocked catalog categories and optionally rebuilds its touch regions. */
extern "C" void uniteSourceListRefresh(s32 refreshRegions)
{
    UniteWork *work = g_unite;
    const FusionCatalogCriteria *criteria = uniteGetCatalogCriteria();
    ScrollSelection *selection = &work->selectionListsIV.sourceList;
    s32 selected = resourceRunOperationIfUnblocked(selection) + listCursorGetRowIfUnblocked(selection);
    u32 count = 3;
    if (criteria->rowsUnlocked[0]) {
        count = 6;
        if (criteria->rowsUnlocked[1]) {
            count = 12;
            if (criteria->rowsUnlocked[2])
                count = 14;
        }
    }
    gridNavigationConfigure(selection, count, 8, 1, 0, 1);
    scrollListSetSelectionMarkChanged(selection, selected);
    if (refreshRegions) {
        for (s32 index = 0; index < 8; ++index) {
            work->touchIV.rowRegions[index] = -1;
            ifTouchRegionRemove();
        }
        work->touchIV.scrollThumbRegion = -1;
        work->touchIV.scrollUpRegion = -1;
        work->touchIV.scrollDownRegion = -1;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        for (s32 index = 0; index < 8 && index < (s32)gridNavigationGetItemCount(selection); ++index)
            work->touchIV.rowRegions[index] = ifTouchRegionAddRequested(36, index + 0xa9);
        work->touchIV.scrollThumbRegion = ifTouchRegionAddRequested(36, 0x1f0);
        work->touchIV.scrollUpRegion = ifTouchRegionAddRequested(36, 0x1ee);
        work->touchIV.scrollDownRegion = ifTouchRegionAddRequested(36, 0x1ef);
    }
}
