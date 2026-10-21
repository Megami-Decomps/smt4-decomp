#include "common.h"

struct UiOpenController { u8 data[0xbc]; };
struct UiOpenAnimation { u8 data[0x73c]; };
struct UiOpenBinding { u8 data[0x34]; };
struct UiBindingObserver;
struct UiBindingCallbacks {
    u8 unk00[0x0c];
    void (*bind)(UiBindingObserver *observer, UiOpenController *controller); // 0x0c
};
struct UiBindingObserver {
    const UiBindingCallbacks *callbacks;
};
struct UiOpenOwner {
    u8 unk000[0x20];
    UiOpenController controller; // 0x20
    UiOpenAnimation animation; // 0xdc
    UiOpenBinding binding; // 0x818
    UiBindingObserver *observer; // 0x84c
};

extern "C" {
void menuSynchronizeFlaggedSelection(UiOpenBinding *binding, UiOpenController *controller);
void sub10OwnerStart(UiOpenController *controller);
u32 FUN_004cf8dc(UiOpenAnimation *animation, s32 stage);

// Bind and start the UI controller, then run its opening animation stages.
u32 uiOpenStartAnimations(UiOpenOwner *owner)
{
    menuSynchronizeFlaggedSelection(&owner->binding, &owner->controller);
    UiBindingObserver *observer = owner->observer;
    observer->callbacks->bind(observer, &owner->controller);
    sub10OwnerStart(&owner->controller);
    FUN_004cf8dc(&owner->animation, 2);
    FUN_004cf8dc(&owner->animation, 3);
    return FUN_004cf8dc(&owner->animation, 12);
}
}
