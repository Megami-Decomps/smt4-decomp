/* NON_MATCHING: flag clear now matches retail (byte index + int keep-mask locals); retail keeps the constant 0 passed to the inlined writer in a callee-saved register (r6/r7 pair, push {r4-r8}) where armcc propagates the immediate. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {

typedef struct GameFlagEntry418070 {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
} GameFlagEntry418070;

typedef struct GameFlagBlock418070 {
    /* 0x000 */ u8 bits[0x2A0];
    /* 0x2A0 */ GameFlagEntry418070 entries[0x190];
    /* 0x8E0 */ u16 activeEntry;
} GameFlagBlock418070;

void FUN_004bb6d8(u32 id, s32 value);

static inline void gameFlagWrite(u32 id, s32 value)
{
    u8 *bits = reinterpret_cast<GameFlagBlock418070 *>(gameFlagBlockGet())->bits;
    FUN_004bb6d8(id, value);
    u32 index = id >> 3;
    if (value) {
        bits[index] |= 1 << (id & 7);
    } else {
        s32 keep = ~(1 << (id & 7));
        bits[index] &= keep;
    }
}

// Clear entry `index`'s bits 1-2 (and 6 plus flags 0x500-0x51f when it is the active entry);
// returns 1 when something was cleared.
u32 FUN_00418070(u32 index, s32 force)
{
    GameFlagEntry418070 *entry = &reinterpret_cast<GameFlagBlock418070 *>(gameFlagBlockGet())->entries[index];
    if (entry->flags & 2) {
        if (reinterpret_cast<GameFlagBlock418070 *>(gameFlagBlockGet())->activeEntry == index) {
            entry->flags &= ~0x46;
            reinterpret_cast<GameFlagBlock418070 *>(gameFlagBlockGet())->activeEntry = 0;
            for (u32 id = 0x500; id < 0x520; id++) {
                gameFlagWrite(id, 0);
            }
            return 1;
        }
        if (force) {
            entry->flags &= ~6;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
