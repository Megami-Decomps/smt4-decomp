/* NON_MATCHING: explicit member lifetime construction adds placement-new null guards and retains the outer owner pointer. */
#include "classes/AocMenu.h"
#include "shard/SelectionPanelOwner.h"
#include <new>

extern "C" {
extern const u8 DAT_0055c6a4[];
TimedState *timeInitializeActiveState(TimedState *state);

// Initialize the owner's timers, selection controls and embedded window panel.
SelectionPanelOwner *_ZN7AocMenuC1Ev(SelectionPanelOwner *owner)
{
    owner->state = 0;
    timeInitializeActiveState(&owner->firstTimer);
    timeInitializeActiveState(&owner->secondTimer);
    new (&owner->selection) SelectionFlags;
    owner->dispatchTable = DAT_0055c6a4;
    new (&owner->panel) Obj4221a4;
    owner->unk0350 = 0;
    owner->unk0354 = 0;
    owner->unk0358 = 0;
    owner->unk1128 = 0;
    owner->unk112c = 0;
    owner->unk11b0 = 0;
    owner->unk1794 = 0;
    owner->unk1798 = 0;
    owner->unk17a0 = 0;
    owner->unk1eec = 0;
    reinterpret_cast<AocMenu *>(owner)->initializeStepCallbacks();
    return owner;
}
}
