/* NON_MATCHING: region ids are full words narrowed at each call and the zero result local now reproduces retail's r0-r3 homing prologue (diff 138->93 lines); retail keeps the sound-play tails unmerged, ends with `mov r0,r6`, and computes `position - 1` with a separate cmp. */
#include "common.h"
#include "shard/W5_W5Match7_SelectedRecord.h"
#include "code/Code0026_Smt4a.h"

/* Two halfwords passed together in one register. */
struct ScrollPoint {
    s16 x;
    s16 y;
};

struct ScrollList;


extern "C" {

s32 recordGetModeForId(s32 id);
s32 resourceRunOperationIfUnblocked(ScrollList *list);
s32 resourceRunEmbeddedOperationIfUnblocked(ScrollList *list);
s32 objectApplyIfUnblocked(ScrollList *list);
s32 widgetSubCallIfVisible(ScrollList *list);
s32 FUN_002a4878(ScrollList *list);
s32 FUN_002a4894(ScrollList *list);
void scrollOwnerSelectIndex(ScrollList *list, s32 value);
void FUN_002a4964(ScrollList *list, s32 value);
void eventQueueAddUnique(u32 event);

/* Handles a touch on a scrolling list: the previous/next controls move one step, a touch on the
 * bar jumps to the matching position (horizontal lists use x, vertical ones y). Returns whether
 * the touch was used. */
u32 FUN_002e2848(ScrollList *list, ScrollPoint touch, ScrollPoint barSize, s32 barId, s32 previousId, s32 nextId,
                 s32 horizontal, s32 playSound)
{
    u32 used = 0;
    s32 previousMode = recordGetModeForId((s16)previousId);
    s32 nextMode = recordGetModeForId((s16)nextId);
    s32 barMode = recordGetModeForId((s16)barId);

    if (previousMode == 6 || previousMode == 2) {
        s32 position = resourceRunOperationIfUnblocked(list) + FUN_002a4894(list);
        if (horizontal != 0) {
            position = resourceRunEmbeddedOperationIfUnblocked(list) + FUN_002a4878(list);
        }
        if (position - 1 < 0) {
            return 1;
        }
        if (horizontal != 0) {
            scrollOwnerSelectIndex(list, position - 1);
        } else {
            FUN_002a4964(list, position - 1);
        }
    } else if (nextMode == 6 || nextMode == 2) {
        s32 position = resourceRunOperationIfUnblocked(list) + FUN_002a4894(list) + 1;
        if (horizontal != 0) {
            position = resourceRunEmbeddedOperationIfUnblocked(list) + FUN_002a4878(list) + 1;
            if (widgetSubCallIfVisible(list) <= position) {
                return 1;
            }
            scrollOwnerSelectIndex(list, position);
        } else {
            if (objectApplyIfUnblocked(list) <= position) {
                return 1;
            }
            FUN_002a4964(list, position);
        }
    } else {
        if (barMode == 0) {
            return used;
        }
        s32 total = objectApplyIfUnblocked(list);
        s16 y = FUN_002618e0() - touch.y;
        if (horizontal != 0) {
            total = widgetSubCallIfVisible(list);
            s16 x = FUN_002618c8() - touch.x;
            if (x < 0 || barSize.x <= x) {
                return 1;
            }
            scrollOwnerSelectIndex(list, static_cast<s16>(x * total / barSize.x));
            return 1;
        }
        if (y < 0 || barSize.y <= y) {
            return 1;
        }
        s16 target = y * total / barSize.y;
        if (FUN_002a4894(list) + resourceRunOperationIfUnblocked(list) != target && playSound != 0) {
            eventQueueAddUnique(0x100020d);
        }
        FUN_002a4964(list, target);
        return 1;
    }
    if (playSound != 0) {
        eventQueueAddUnique(0x100020d);
    }
    return 1;
}

}
