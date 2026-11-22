/* NON_MATCHING: completion work is factored instead of duplicated across retail branches; mask-load scheduling differs. */
#include "battle/btlMain.h"
#include "battle/btlEncount.h"
#include "battle/BtlUiGlobal.h"

struct BtlEventStateA;
extern "C" {
extern BtlEventStateA *g_btlEvent;
extern BtlEncounterGlobalsA g_btlEncount;
u32 isEntryUsable(const BtlEventStateA *event);
u32 FUN_004d7a70(BtlEventStateA *event, u32 kind, s32 index, s32 flags);
void FUN_004d7fe4(BtlEventStateA *event);
void frameTexRequestFade(s32 kind);
u32 pairedAvailabilityGetState(u32 display);
void screenFadeStartIn(u32 display, s32 frames, u32 alpha);
void FUN_003ed6e8(BtlMainStateA *state);
void btlAiBuildTurnOrder(BtlMainStateA *state);
s32 btlFindSelectionIndexByOrdinal(BtlMainStateA *state, s32 flags);
void FUN_0047f444(s32 kind);
void FUN_004aa2e0(BtlUiA *ui, s32 mode);
u32 FUN_003e0cd4(BtlStep *step, BtlMainStateA *state);

u32 FUN_003e2504(BtlStep *step, BtlMainStateA *state)
{
    // The two final masks extend past the canonical encounter-global prefix.
    struct CompletionMaskView {
        u8 prefix[0x50];
        u64 transition;
        u8 unk58[8];
        u64 fadeStarted;
        u64 completed;
    };
    const CompletionMaskView *masks =
        reinterpret_cast<const CompletionMaskView *>(&g_btlEncount);
    BtlEventStateA *event = g_btlEvent;
    if (step->counters.unk10 != 0) {
        if (isEntryUsable(event)) {
            return 0;
        }
        bool special = (state->stateFlags64.bits & g_btlEncount.initialStateMask) != 0;
        FUN_003ed6e8(state);
        btlAiBuildTurnOrder(state);
        state->stateFlags64.bits |= masks->transition | masks->completed;
        if (!special) {
            FUN_004aa2e0(g_btlUiBlock, 0);
        } else if (btlFindSelectionIndexByOrdinal(state, 1) < 0 && !(state->encounter.controlFlags & 0x20)) {
            FUN_0047f444(3);
        }
        step->counters.unk10 = 0;
        step->counters.unk0C = 0;
        step->state = 0x19;
        return FUN_003e0cd4(step, state);
    }
    if (FUN_004d7a70(event, 0xB, -1, 0)) {
        if (!(state->stateFlags64.bits & masks->fadeStarted)) {
            frameTexRequestFade(2);
            state->stateFlags64.bits |= masks->fadeStarted;
        }
        if (pairedAvailabilityGetState(0) == 3) {
            screenFadeStartIn(0, 10, 0xFF);
        }
        if (pairedAvailabilityGetState(1) == 3) {
            screenFadeStartIn(1, 10, 0xFF);
        }
        FUN_004d7fe4(g_btlEvent);
    }
    ++step->counters.unk10;
    return 0;
}
}
