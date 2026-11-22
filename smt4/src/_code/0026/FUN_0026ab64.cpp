/* NON_MATCHING: 30 lines: the previous and next modes swap registers (retail: previous in sl, next in r9), and armcc keeps the previous-step branch's copy of the shared eventQueueAddUnique tail where retail keeps the next-step (horizontal) copy. */
#include "common.h"
#include "ui/IfTouch.h"
#include "code/Code001c_Smt4.h"

/* Two halfwords passed together in one register. */
struct ScrollPoint {
    s16 x;
    s16 y;
};

struct ScrollList;


extern "C" {

u8 ifTouchGetSelectionModeForRegion(s32 id);
s32 resourceRunOperationIfUnblocked(ScrollList *list);
s32 resourceRunEmbeddedOperationIfUnblocked(ScrollList *list);
s32 gridNavigationGetItemCount(ScrollList *list);
s32 uiGridNavigationEntryCount(ScrollList *list);
s32 objectPartRunUnlessLocked(ScrollList *list);
s32 listCursorGetRowIfUnblocked(ScrollList *list);
void scrollOwnerSelectIndex(ScrollList *list, s32 value);
void scrollListSetSelectionMarkChanged(ScrollList *list, s32 value);
void eventQueueAddUnique(u32 event);

/* Handles a touch on a scrolling list: the previous/next controls move one step, a touch on the
 * bar jumps to the matching position (horizontal lists use x, vertical ones y). Returns whether
 * the touch was used. */
u32 FUN_0026ab64(ScrollList *list, ScrollPoint touch, ScrollPoint barSize, s32 barId, s32 previousId, s32 nextId,
                 s32 horizontal, s32 playSound)
{
    u32 used = 0;
    u8 previousMode = ifTouchGetSelectionModeForRegion((s16)previousId);
    u8 nextMode = ifTouchGetSelectionModeForRegion((s16)nextId);
    u8 barMode = ifTouchGetSelectionModeForRegion((s16)barId);

    if (previousMode == 6 || previousMode == 2) {
        s32 index = resourceRunOperationIfUnblocked(list) + listCursorGetRowIfUnblocked(list) - 1;
        if (horizontal != 0) {
            index = resourceRunEmbeddedOperationIfUnblocked(list) + objectPartRunUnlessLocked(list) - 1;
        }
        if (index >= 0) {
            if (horizontal != 0) {
                scrollOwnerSelectIndex(list, index);
            } else {
                scrollListSetSelectionMarkChanged(list, index);
            }
            if (playSound != 0) {
                eventQueueAddUnique(0x100016c);
            }
        }
        used = 1;
    } else if (nextMode == 6 || nextMode == 2) {
        s32 index = resourceRunOperationIfUnblocked(list) + listCursorGetRowIfUnblocked(list) + 1;
        if (horizontal != 0) {
            index = resourceRunEmbeddedOperationIfUnblocked(list) + objectPartRunUnlessLocked(list) + 1;
            if (index < uiGridNavigationEntryCount(list)) {
                scrollOwnerSelectIndex(list, index);
                if (playSound != 0) {
                    eventQueueAddUnique(0x100016c);
                }
            }
        } else if (index < gridNavigationGetItemCount(list)) {
            scrollListSetSelectionMarkChanged(list, index);
            if (playSound != 0) {
                eventQueueAddUnique(0x100016c);
            }
        }
        used = 1;
    } else if (barMode != 0) {
        s32 total = gridNavigationGetItemCount(list);
        s16 y = FUN_001c36a0() - touch.y;
        if (horizontal != 0) {
            total = uiGridNavigationEntryCount(list);
            s16 x = FUN_001c3688() - touch.x;
            if (x >= 0 && x < barSize.x) {
                scrollOwnerSelectIndex(list, (s16)(x * total / barSize.x));
            }
        } else if (y >= 0 && y < barSize.y) {
            s16 target = y * total / barSize.y;
            if (listCursorGetRowIfUnblocked(list) + resourceRunOperationIfUnblocked(list) != target && playSound != 0) {
                eventQueueAddUnique(0x100016c);
            }
            scrollListSetSelectionMarkChanged(list, target);
        }
        used = 1;
    }
    return used;
}

}
