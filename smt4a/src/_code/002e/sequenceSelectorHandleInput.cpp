/* NON_MATCHING: retail copies the state pointer before loading the countdown and has a single zero test;
 * the build loads the count directly and emits an additional loop-limit check. */
#include "title/SequenceSelector.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
s32 padButtonIsPressed(u32 button);
s32 padButtonRepeat(u32 button);

/* Selects a sequence with wrapping single steps and clamped page steps. */
s32 sequenceSelectorHandleInput(u32 handle)
{
    SequenceSelectionState *state = &g_startMenuProcessGroup;
    /* The retail build leaves the countdown after removing the per-entry work. */
    u32 remaining = state->count;
    if (remaining != 0) {
        do {
        } while (--remaining != 0);
    }
    if (padButtonIsPressed(SEQUENCE_SELECTOR_CONFIRM)) {
        asdSequenceRequest(state->entries[state->selection].sequence, NULL, 0);
        return -1;
    }
    if (padButtonRepeat(SEQUENCE_SELECTOR_PREVIOUS)) {
        --state->selection;
    }
    if (padButtonRepeat(SEQUENCE_SELECTOR_NEXT)) {
        ++state->selection;
    }
    if ((s32)state->selection < 0) {
        state->selection = state->count - 1;
    }
    if (state->selection >= state->count) {
        state->selection = 0;
    }
    if (padButtonIsPressed(SEQUENCE_SELECTOR_PAGE_BACK)) {
        state->selection -= SEQUENCE_SELECTOR_PAGE_SIZE;
    }
    if (padButtonIsPressed(SEQUENCE_SELECTOR_PAGE_FORWARD)) {
        state->selection += SEQUENCE_SELECTOR_PAGE_SIZE;
    }
    u32 count = state->count;
    state->selection = (s32)state->selection > 0 ? state->selection : 0;
    if (state->selection >= count) {
        state->selection = count - 1;
    }
    return 0;
}

} /* extern "C" */
