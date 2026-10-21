/* NON_MATCHING: compiler removes the unchanged high-word store and intermediate level-two constant, and uses a leaf BX return. Candidate Thumb O1/O2 or cpu=5TE. */
#include "common.h"

struct PackedLevelState {
    u8 unk000[0x150]; // 0x000
    u32 configuration; // 0x150: level in the low byte, payload in the upper bytes
    u32 unk154;        // 0x154
    u64 flags;         // 0x158
};

// Encode the level-dependent flags and the configuration payload into one mask.
extern "C" void FUN_002f0a5c(PackedLevelState* state)
{
    u32 configuration = state->configuration;
    state->flags = 0;
    u8 level = configuration;
    if (level != 0) {
        state->flags = 0x01000000;
        if (level >= 2) {
            state->flags = 0x07000000;
        }
        if (level >= 3) {
            state->flags |= 0x08000000;
        }
        if (level >= 4) {
            state->flags |= 0x10000000;
        }
    }
    state->flags |= configuration >> 8;
}
