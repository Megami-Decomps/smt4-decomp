/* NON_MATCHING: 174 lines. Case order, callees and each transition's store order follow retail. Still
 * different: retail gives several states their own copies of the arguments, as inlined per-state functions
 * would (state 0 keeps the main state in r6 and its flag word's address in r5; states 9 and 19 store through
 * r0 with the main state still in r1, so no reload before the tail call); state 26's first test has its own
 * `mov r0, #0; pop`; state 14 stores the state before the zero and state 16 after the argument moves. */
#include "battle/btlMain.h"
#include "battle/btlEncount.h"
#include "code/Code0040_Smt4a.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "code/Code0013.h"
#include "battle/BtlGlobals.h"

extern "C" {
extern BtlStep *g_btlEvent;
extern BtlEncounterGlobalsA g_btlEncount;
extern void *g_btlActionReflect;
extern void *g_btlAux;
s32 isEntryUsable(BtlStep *event); // declcheck: local (takes the event step; the shared prototype has the decompiler's s32 *)
s32 FUN_004d7a70(BtlStep *event, u32 kind, u32 value, u32 flags);
void frameTexRequestFade(u32 state);
void screenFadeStartIn(u32 index, u32 first, u32 second);
void FUN_004d7fe4(BtlStep *event);
s32 FUN_003e11ac(BtlStep *step, BtlMainStateA *state);
s32 loadSlotIsLoaded(u32 slot);
void loadSlotRequestAsync(u32 slot, u32 flags);
s32 FUN_003e2470(BtlStep *step, BtlMainStateA *state);
void FUN_003f1334(BtlMainStateA *state); // declcheck: local (retail passes the main state in r0; the shared prototype has no argument)
s32 loadSlotMainIsLoaded(BtlMainStateA *state);
s32 FUN_003e1114(BtlStep *step, BtlMainStateA *state);
s32 FUN_003f0f2c(BtlMainStateA *state); // declcheck: local (the shared prototype takes another view of the main state)
s32 FUN_003e03b0(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e12a8(BtlStep *step, BtlMainStateA *state);
s32 aocLoaderUpdateRecords(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e0510(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e3188(BtlStep *step, BtlMainStateA *state);
void FUN_003ed238(BtlMainStateA *state, u32 flags);
s32 FUN_003e025c(BtlStep *step, BtlMainStateA *state);
s32 FUN_004f2294(BtlCameraA *camera);
void btlCameraObjectCreate(BtlCameraA *camera);
s32 FUN_003e1068(BtlStep *step, BtlMainStateA *state);
s32 FUN_003ece50(BtlMainStateA *state);
void FUN_003eaa9c(BtlMainStateA *state);
s32 FUN_003e1454(BtlStep *step, BtlMainStateA *state);
s32 contentRequestStart(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e21c8(BtlStep *step, BtlMainStateA *state);
u32 FUN_003e0f94(BtlStep *step);
s32 FUN_003e1b80(BtlStep *step, BtlMainStateA *state);
s32 btlStepInitEncounterFlags(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e1a30(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e2a88(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e2504(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e16cc(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e0cd4(BtlStep *step, BtlMainStateA *state);
s32 FUN_003e0bb8(BtlStep *step, BtlMainStateA *state);
s32 recordAreAllCountsNonpositive(void *auxiliary);
s32 eventCommandRangeCheck(BtlCameraA *camera);
void stateFinishIfPresent(BtlMainStateA *state);
void eventCommandClearPending(BtlCameraA *camera);
}

/* State 5: waits for the main slot, then starts the enemy model step. */
static __inline s32 encounterWaitMainSlot(BtlStep *step, BtlMainStateA *state)
{
    if (!loadSlotMainIsLoaded(state))
        return 0;
    step->counters.unk10 = 0;
    step->state = 6;
    step->counters.unk0C = 0;
    return FUN_003e1114(step, state);
}

/* Dispatch encounter phases and finish only after all action and command work drains. */
extern "C" s32 battleEncounterTaskUpdate(BtlStep *step, BtlMainStateA *state)
{
    switch (step->state) {
    case 0:
        if (isEntryUsable(g_btlEvent))
            return 0;
        if (FUN_004d7a70(g_btlEvent, 9, -1u, 0)) {
            if (!(g_btlEncount.initializedMask & state->stateFlags64.bits)) {
                frameTexRequestFade(2);
                state->stateFlags64.bits = g_btlEncount.initializedMask | state->stateFlags64.bits;
                if (pairedAvailabilityGetState(1) == 3)
                    screenFadeStartIn(1, 10, 0xff);
            }
            FUN_004d7fe4(g_btlEvent);
        }
        btlStepEnter(step, 1);
        return FUN_003e11ac(step, state);
    case 1:
        return FUN_003e11ac(step, state);
    case 2:
        if (!loadSlotIsLoaded(0x4e))
            loadSlotRequestAsync(0x4e, 0);
        btlStepEnter(step, 3);
        return FUN_003e2470(step, state);
    case 3:
        return FUN_003e2470(step, state);
    case 4:
        FUN_003f1334(state);
        step->state = 5;
        step->counters.unk0C = step->counters.unk10 = 0;
        return encounterWaitMainSlot(step, state);
    case 5:
        return encounterWaitMainSlot(step, state);
    case 6:
        return FUN_003e1114(step, state);
    case 7:
        if (!FUN_003f0f2c(state))
            return 0;
        btlStepEnter(step, 8);
        return FUN_003e03b0(step, state);
    case 8:
        return FUN_003e03b0(step, state);
    case 9:
        if (state->arrangementFile == NULL)
            return 0;
        step->counters.unk10 = 0;
        step->state = 10;
        step->counters.unk0C = 0;
        return FUN_003e12a8(step, state);
    case 10:
        return FUN_003e12a8(step, state);
    case 11:
        return aocLoaderUpdateRecords(step, state);
    case 12:
        return FUN_003e0510(step, state);
    /* States 17 and 18 come before 13 in retail (18 ends by entering 13). */
    case 17:
        return FUN_003e3188(step, state);
    case 18:
        if (!btlRosterGroupAllInactive(state, 1))
            return 0;
        FUN_003ed238(state, 0x400);
        for (s32 index = 4; index < 54; ++index) {
            BattleRosterRecordA *record = &state->roster[index];
            u32 flags = record->render.flags;
            if ((flags & 1) && (flags & 0x80) && (flags & 0x400))
                ++state->flaggedRoster.count;
        }
        step->counters.unk10 = 0;
        step->state = 13;
        step->counters.unk0C = 0;
        return FUN_003e025c(step, state);
    case 13:
        return FUN_003e025c(step, state);
    case 14:
        if (!FUN_004f2294(g_btlCamera))
            return 0;
        btlCameraObjectCreate(g_btlCamera);
        step->state = 15;
        step->counters.unk0C = step->counters.unk10 = 0;
        return FUN_003e1068(step, state);
    case 15:
        return FUN_003e1068(step, state);
    case 16:
        if (!FUN_003ece50(state))
            return 0;
        FUN_003eaa9c(state);
        btlStepEnter(step, 20);
        return FUN_003e1454(step, state);
    case 19:
        step->counters.unk10 = 0;
        step->state = 20;
        step->counters.unk0C = 0;
        return FUN_003e1454(step, state);
    case 20:
        return FUN_003e1454(step, state);
    case 21:
        return contentRequestStart(step, state);
    case 22:
        return FUN_003e21c8(step, state);
    case 23:
        return FUN_003e0bb8(step, state);
    case 24:
        switch (FUN_003e0f94(step)) {
        case 2: return FUN_003e1b80(step, state);
        case 1: return btlStepInitEncounterFlags(step, state);
        case 3: return FUN_003e1a30(step, state);
        case 4: return FUN_003e2a88(step, state);
        case 5: return FUN_003e2504(step, state);
        default: return FUN_003e16cc(step, state);
        }
    case 25:
        return FUN_003e0cd4(step, state);
    case 26:
        if (chainCountIdUnflagged((ChainOwner *)g_btlActionReflect, (s32)step) > 0 ||
            !recordAreAllCountsNonpositive(g_btlAux) || !eventCommandRangeCheck(g_btlCamera))
            return 0;
        if (g_btlCamera->flags & 0x80000)
            return 0;
        stateFinishIfPresent(state);
        g_btlCamera->flags &= ~0x4000u;
        eventCommandClearPending(g_btlCamera);
        return -1;
    default:
        return 0;
    }
}
