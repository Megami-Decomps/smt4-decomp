#include "common.h"

struct OwnerValues {
    u32 storage[0xbc / 4];
};
struct OwnerAnimation {
    u32 storage[0x480 / 4];
};
struct OwnerUpdater {
    u32 storage[0x34 / 4];
};
class OwnerRenderer {
public:
    virtual void vfunc00() = 0;
    virtual void vfunc04() = 0;
    virtual void vfunc08() = 0;
    virtual void apply(OwnerValues* values) = 0;
};
struct UiOwner {
    u8 unk000[0x20];        // 0x000
    OwnerValues values;    // 0x020
    OwnerAnimation animation; // 0x0dc
    OwnerUpdater updater;  // 0x55c
    OwnerRenderer* renderer; // 0x590
};

extern "C" {
void FUN_00230954(OwnerUpdater* updater, OwnerValues* values);
void FUN_00233410(OwnerValues* values);
u32 FUN_00233344(OwnerAnimation* animation, s32 channel);

// Updates the owner's values and renderer, then advances animation channels two and three.
u32 uiOwnerUpdateAnimationChannels(UiOwner* owner)
{
    FUN_00230954(&owner->updater, &owner->values);
    owner->renderer->apply(&owner->values);
    FUN_00233410(&owner->values);
    FUN_00233344(&owner->animation, 2);
    return FUN_00233344(&owner->animation, 3);
}
}
