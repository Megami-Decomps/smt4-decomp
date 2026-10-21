/* NON_MATCHING: retail loads the target into R0 then copies/tests it in R4; compiled code loads R4 directly and adds a separate comparison and argument move. */
#include "common.h"

struct Slots4F;
struct SlotTargetHolder {
    u32 unk00;          // 0x00
    Slots4F* target;    // 0x04
};
struct SlotTargetOwner {
    u32 unk00[2];             // 0x00
    SlotTargetHolder* holder; // 0x08
};

extern "C" {
u32 slots4FGetActiveValue(Slots4F* target);
void FUN_003fe86c(Slots4F* target, u32 slot, s32 flags, f32 value, f32 delay);

// Applies a value to the active slot when the owner has a target.
void FUN_003e54b8(SlotTargetOwner* owner, f32 value)
{
    if (Slots4F* target = owner->holder->target) {
        u32 slot = slots4FGetActiveValue(target);
        FUN_003fe86c(target, slot, 0, value, 0.0f);
    }
}
}
