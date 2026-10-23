/* NON_MATCHING: transition stores split instead of STRD; animation argument loads and ordered float comparison orientation differ. */
#include "shard/Shard0034.h"

namespace {
// BtlStep ends at 0x30; this controller additionally reads a callback argument at that offset.
struct BattleAnimationControllerView {
    s32 state;
    s32 previous;
    s32 requested;
    u32 frames;
    u32 unk10;
    u32 unk14;
    u8 unk18[0x18];
    void *callbackArgument;
};
typedef char BattleAnimationControllerViewOffsetsCheck[
    __INTADDR__(&((BattleAnimationControllerView *)0)->frames) == 0xC &&
    __INTADDR__(&((BattleAnimationControllerView *)0)->callbackArgument) == 0x30 ? 1 : -1];
}

extern "C" {
void FUN_00410f84(BattleAnimationControllerView *controller);
void FUN_00412248(BattleAnimationControllerView *controller);
void FUN_00416840(void *argument);
BtlStateB *btlGetMainState(void);
f32 asdAnimGetTrackLastFrame(void *animation, u32 track);

// Apply state transitions, advance looping animation slots and saturate the elapsed-frame count.
u32 FUN_0041210c(BattleAnimationControllerView *controller)
{
    if (controller->state != controller->requested) {
        s32 previous = controller->state;
        controller->state = controller->requested;
        controller->previous = previous;
        FUN_00410f84(controller);
        controller->frames = 0;
        controller->unk10 = 0;
        controller->unk14 = 0;
    }
    FUN_00412248(controller);
    BtlStateB *battle = btlGetMainState();
    if (controller->state != 1 && controller->state != 2) {
        for (s32 index = 0; index < 12; ++index) {
            LinkEntry10 *entry = &battle->entries4D78[index];
            if (entry->obj != NULL) {
                entry->animation.frame += 2;
                f32 lastFrame = asdAnimGetTrackLastFrame(entry->obj, entry->animation.track);
                if (lastFrame <= (f32)entry->animation.frame) {
                    entry->animation.frame = (s32)((f32)entry->animation.frame - lastFrame);
                }
                if ((f32)entry->animation.frame >= lastFrame) {
                    entry->animation.frame = 0;
                }
                if (entry->animation.remaining > 0 && --entry->animation.remaining <= 0 && entry->animation.track > 0) {
                    entry->animation.track = 0;
                    entry->animation.frame = 0;
                }
            }
        }
    }
    ++controller->frames;
    if (controller->frames >= 0x10000) {
        controller->frames = 0xFFFF;
    }
    if (controller->callbackArgument != NULL) {
        FUN_00416840(controller->callbackArgument);
    }
    return 0;
}
}
