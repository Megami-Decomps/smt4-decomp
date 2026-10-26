/* NON_MATCHING: retail homes r0-r3 at entry (push {r0-r3,...}) and reloads the list pointer from its home slot before every call, and sign-extends the three region ids at the call; ours keeps the pointer in a saved register and passes the ids unextended */
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

s32 ifTouchGetSelectionModeForRegion(s16 id);
s32 FUN_0029efc0(ScrollList *list);
s32 FUN_0029e93c(ScrollList *list);
s32 FUN_0029ee54(ScrollList *list);
s32 FUN_0029e958(ScrollList *list);
s32 objectPartRunUnlessLocked(ScrollList *list);
s32 FUN_0029efa8(ScrollList *list);
void scrollOwnerSelectIndex(ScrollList *list, s32 value);
void FUN_0029eb5c(ScrollList *list, s32 value);
void eventQueueAddUnique(u32 event);

/* Handles a touch on a scrolling list: the previous/next controls move one step, a touch on the
 * bar jumps to the matching position (horizontal lists use x, vertical ones y). Returns whether
 * the touch was used. */
u32 FUN_0026ab64(ScrollList *list, ScrollPoint touch, ScrollPoint barSize, s16 barId, s16 previousId, s16 nextId,
                 s32 horizontal, s32 playSound)
{
    s32 previousMode = ifTouchGetSelectionModeForRegion(previousId);
    s32 nextMode = ifTouchGetSelectionModeForRegion(nextId);
    s32 barMode = ifTouchGetSelectionModeForRegion(barId);

    if (previousMode == 6 || previousMode == 2) {
        s32 position = FUN_0029efc0(list) + FUN_0029efa8(list);
        if (horizontal != 0) {
            position = FUN_0029e93c(list) + objectPartRunUnlessLocked(list);
        }
        if (position - 1 < 0) {
            return 1;
        }
        if (horizontal != 0) {
            scrollOwnerSelectIndex(list, position - 1);
        } else {
            FUN_0029eb5c(list, position - 1);
        }
    } else if (nextMode == 6 || nextMode == 2) {
        s32 position = FUN_0029efc0(list) + FUN_0029efa8(list) + 1;
        if (horizontal != 0) {
            position = FUN_0029e93c(list) + objectPartRunUnlessLocked(list) + 1;
            if (FUN_0029e958(list) <= position) {
                return 1;
            }
            scrollOwnerSelectIndex(list, position);
        } else {
            if (FUN_0029ee54(list) <= position) {
                return 1;
            }
            FUN_0029eb5c(list, position);
        }
    } else {
        if (barMode == 0) {
            return 0;
        }
        s32 total = FUN_0029ee54(list);
        s16 y = FUN_001c36a0() - touch.y;
        if (horizontal != 0) {
            total = FUN_0029e958(list);
            s16 x = FUN_001c3688() - touch.x;
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
        if (FUN_0029efa8(list) + FUN_0029efc0(list) != target && playSound != 0) {
            eventQueueAddUnique(0x100016c);
        }
        FUN_0029eb5c(list, target);
        return 1;
    }
    if (playSound != 0) {
        eventQueueAddUnique(0x100016c);
    }
    return 1;
}

}
