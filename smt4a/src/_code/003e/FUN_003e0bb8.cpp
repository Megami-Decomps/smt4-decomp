/* NON_MATCHING: only request initialization differs: compiler interleaves state=24 between the two argument-clear stores. */
#include "battle/BattleTransitionRequest.h"
#include "battle/btlMain.h"
#include "util/CalleeContracts.h"

extern "C" {
u32 FUN_003e0f94(BattleTransitionRequest *request, const BtlMainStateA *state);
void FUN_0013cab8(u32 channel, u32 state, u32 value);
s32 FUN_002e07f4(void);
void FUN_003e16cc(BattleTransitionRequest *, BtlMainStateA *);
void FUN_003e1a30(BattleTransitionRequest *, BtlMainStateA *);
void FUN_003e1b80(BattleTransitionRequest *, BtlMainStateA *);
void FUN_003e2504(BattleTransitionRequest *, BtlMainStateA *);
void FUN_003e26f0(BattleTransitionRequest *, BtlMainStateA *);
void FUN_003e2a88(BattleTransitionRequest *, BtlMainStateA *);

// Wait for ordinary transitions to become ready, then initialize and dispatch the encounter transition.
void FUN_003e0bb8(BattleTransitionRequest *request, BtlMainStateA *state)
{
    u32 mode = FUN_003e0f94(request, state);
    if (mode != 2 && mode != 5) {
        if (FUN_0013def0(0) == 3) {
            FUN_0013cab8(0, 10, 255);
        }
        if (FUN_0013def0(1) == 3) {
            FUN_0013cab8(1, 10, 255);
        }
        if (FUN_002e07f4() == 0) {
            return;
        }
    }
    request->secondArgument = 0;
    request->firstArgument = 0;
    request->state = 24;
    switch (FUN_003e0f94(request, state)) {
    case 2: FUN_003e1b80(request, state); return;
    case 1: FUN_003e26f0(request, state); return;
    case 3: FUN_003e1a30(request, state); return;
    case 4: FUN_003e2a88(request, state); return;
    case 5: FUN_003e2504(request, state); return;
    default: FUN_003e16cc(request, state); return;
    }
}
}
