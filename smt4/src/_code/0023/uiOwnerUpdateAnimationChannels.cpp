#include "common.h"
#include "classes/Obj55ca08.h"

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
void sub10OwnerStart(OwnerValues* values); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: argument of type "OwnerValues *" is incompatible with parameter of type "Obj *")
u32 uiAnimationAdvanceChannel(OwnerAnimation* animation, s32 channel);

// Updates the owner's values and renderer, then advances animation channels two and three.
u32 uiOwnerUpdateAnimationChannels(UiOwner* owner)
{
    ((Obj55ca08 *)&owner->updater)->Obj55ca08::synchronize((const u8 *)&owner->values);
    owner->renderer->apply(&owner->values);
    sub10OwnerStart(&owner->values);
    uiAnimationAdvanceChannel(&owner->animation, 2);
    return uiAnimationAdvanceChannel(&owner->animation, 3);
}
}
