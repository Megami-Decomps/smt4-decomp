#include "battle/btlMain.h"
#include "code/Code0013.h"

extern "C" {
u32 FUN_003e0f94(BtlStep *step, const BtlMainStateA *state);
void FUN_0013cab8(u32 channel, u32 state, u32 value);
s32 pairedAvailabilityBothReady(void);
void FUN_003e16cc(BtlStep *, BtlMainStateA *);
void FUN_003e1a30(BtlStep *, BtlMainStateA *);
void FUN_003e1b80(BtlStep *, BtlMainStateA *);
void FUN_003e2504(BtlStep *, BtlMainStateA *);
void btlStepInitEncounterFlags(BtlStep *, BtlMainStateA *);
void FUN_003e2a88(BtlStep *, BtlMainStateA *);

// Wait for ordinary transitions to become ready, then initialize and dispatch the encounter transition.
void FUN_003e0bb8(BtlStep *step, BtlMainStateA *state)
{
    u32 mode = FUN_003e0f94(step, state);
    if (mode != 2 && mode != 5) {
        if (pairedAvailabilityGetState(0) == 3) {
            FUN_0013cab8(0, 10, 255);
        }
        if (pairedAvailabilityGetState(1) == 3) {
            FUN_0013cab8(1, 10, 255);
        }
        if (pairedAvailabilityBothReady() == 0) {
            return;
        }
    }
    btlStepEnter(step, 24);
    switch (FUN_003e0f94(step, state)) {
    case 2: FUN_003e1b80(step, state); return;
    case 1: btlStepInitEncounterFlags(step, state); return;
    case 3: FUN_003e1a30(step, state); return;
    case 4: FUN_003e2a88(step, state); return;
    case 5: FUN_003e2504(step, state); return;
    default: FUN_003e16cc(step, state); return;
    }
}
}
