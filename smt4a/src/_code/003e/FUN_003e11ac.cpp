/* NON_MATCHING: pending-slot accessor matches; state/counter stores remain reversed in steps 4 and 5. */
#include "common.h"
#include "util/LoadSlotRequestAsync.h"
#include "battle/btlDebug.h"

extern "C" {

typedef struct LoadStepMachine {
    /* 0x00 */ s32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
} LoadStepMachine;

typedef struct LoadStepOwner {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ s32 pendingSlots;
} LoadStepOwner;

extern u32 g_btlEvent;

s32 isEntryUsable(u32 event);
s32 valueAtF0IsReady(LoadStepOwner *owner);
void FUN_003f1334(LoadStepOwner *owner);
s32 loadSlotMainIsLoaded(LoadStepOwner *owner);
u32 FUN_003e1114(LoadStepMachine *machine, LoadStepOwner *owner);
u32 FUN_003e2470(LoadStepMachine *machine, LoadStepOwner *owner);
s32 loadStepGetPendingSlots(LoadStepOwner *owner);

static __inline void loadStepEnter(LoadStepMachine *machine, s32 state)
{
    machine->state = state;
    machine->unk0C = machine->unk10 = 0;
}

/* Starts the load steps: requests slot 0x4E and enters step 3 while slots are pending, otherwise runs steps 4-6. */
u32 FUN_003e11ac(LoadStepMachine *machine, LoadStepOwner *owner)
{
    if (isEntryUsable(g_btlEvent)) {
        return 0;
    }
    if (loadStepGetPendingSlots(owner) > 0) {
        loadStepEnter(machine, 2);
        if (!loadSlotIsLoaded(0x4E)) {
            loadSlotRequestAsync(0x4E, 0);
        }
        loadStepEnter(machine, 3);
        return FUN_003e2470(machine, owner);
    }
    if (valueAtF0IsReady(owner)) {
        loadStepEnter(machine, 4);
        FUN_003f1334(owner);
        loadStepEnter(machine, 5);
        if (!loadSlotMainIsLoaded(owner)) {
            return 0;
        }
    }
    loadStepEnter(machine, 6);
    return FUN_003e1114(machine, owner);
}

} /* extern "C" */
