/* NON_MATCHING: phase/ready address allocation, unsigned readiness load and branch-padding NOPs differ. */
#include "shard/ScreenTransitionState.h"
#include "shard/W5_W5Match2_TimedState.h"

extern "C" {
void eventQueueAddUniqueIfValid(u32);
void flagObjAdvance(void *);
void FUN_0047306c(void *, u32, u32, u32);
void jobOwnerFreeSlotAndStop(void *);
void FUN_00477d10(ScreenTransitionState *, s32, u32);
TimedState *timeInitializeActiveState(TimedState *);
s32 FUN_002e1a18(u32);

// Wait for the close animation and input, post the transition event, then release its callback.
void FUN_00478dc4(ScreenTransitionState *transition)
{
    // The animation controller lies beyond the common screen-transition prefix.
    struct CloseStateView {
        ScreenTransitionState base;
        u8 unk20C[0xfa4];
        u8 animation[0x4ca]; // 0x11b0
        s8 ready; // 0x167a
    };
    typedef char CloseStateOffsets[
        offsetof(CloseStateView, animation) == 0x11b0 &&
        offsetof(CloseStateView, ready) == 0x167a ? 1 : -1];
    CloseStateView *view = reinterpret_cast<CloseStateView *>(transition);
    TimedState time;
    timeInitializeActiveState(&time);
    s32 phase = transition->phase;
    void *animation = view->animation;
    if (phase == 0) {
        FUN_0047306c(animation, 0x67, 0, 0);
        FUN_00477d10(transition, 3, 1);
        transition->phase = 1;
        return;
    }
    if (phase != 1) {
        if (phase == 2 && view->ready) {
            jobOwnerFreeSlotAndStop(animation);
            transition->flags = 15;
            transition->phase = 0;
            if (transition->callback) {
                transition->callback->vtable->destroy(transition->callback);
                transition->callback = NULL;
            }
        }
    } else if (view->ready && FUN_002e1a18(0x10)) {
        eventQueueAddUniqueIfValid(0x100020e);
        flagObjAdvance(animation);
        FUN_00477d10(transition, -1, 0);
        transition->phase = 2;
    }
}
}
