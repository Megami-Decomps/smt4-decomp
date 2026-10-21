#include "common.h"

struct ValueCandidate {
    u32 unk00;
    f32 value; // 0x04
    u32 unk08;
    s32 active; // 0x0c
    u8 unk10[0x20];
};
struct CandidateState {
    u8 unk00[0x1c];
    s32 selected; // 0x1c
    u32 unk20;
    ValueCandidate candidates[4]; // 0x24
};

extern "C" {
// Prefer the selected candidate, then the two fallback candidates.
f32 candidateGetPreferredValue(CandidateState *state)
{
    ValueCandidate *candidate;
    if (state->candidates[state->selected].active != 0) {
        candidate = &state->candidates[state->selected];
    } else if (state->candidates[2].active != 0) {
        candidate = &state->candidates[2];
    } else if (state->candidates[3].active != 0) {
        candidate = &state->candidates[3];
    } else {
        return 0.0f;
    }
    return candidate->value;
}
}
