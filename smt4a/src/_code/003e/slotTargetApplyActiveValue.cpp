#include "common.h"

struct Slots4F;
struct SlotTargetHolder;
struct SlotTargetOwner;

extern "C" {
SlotTargetHolder* slotTargetOwnerGetHolder(SlotTargetOwner* owner);
Slots4F* slotTargetHolderGetTarget(SlotTargetHolder* holder);
u32 slots4FGetActiveValue(Slots4F* target);
void FUN_003fe86c(Slots4F* target, u32 slot, s32 flags, f32 value, f32 delay);

// Applies a value to the active slot when the owner has a target.
void slotTargetApplyActiveValue(SlotTargetOwner* owner, f32 value)
{
    if (Slots4F* target = slotTargetHolderGetTarget(slotTargetOwnerGetHolder(owner))) {
        u32 slot = slots4FGetActiveValue(target);
        FUN_003fe86c(target, slot, 0, value, 0.0f);
    }
}
}
