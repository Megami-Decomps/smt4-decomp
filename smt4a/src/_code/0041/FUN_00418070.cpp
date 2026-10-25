/* NON_MATCHING: the inlined flag clear folds the byte index into scaled ldrb/strb and keeps 0 as an immediate; retail computes id>>3 and ~(1<<bit) in registers (same issue as gameFlagSetValue). */
#include "common.h"
#include "gamedata/GameFlags.h"

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

GameFlagBlock418070 *gameFlagBlockGet(void);
void FUN_004bb6d8(u32 id, s32 value);

static inline void gameFlagWrite(u32 id, s32 value)
{
    u8 *bits = gameFlagBlockGet()->bits;
    FUN_004bb6d8(id, value);
    if (value) {
        bits[id >> 3] |= 1 << (id & 7);
    } else {
        bits[id >> 3] &= ~(1 << (id & 7));
    }
}

// Clear entry `index`'s bits 1-2 (and 6 plus flags 0x500-0x51f when it is the active entry);
// returns 1 when something was cleared.
u32 FUN_00418070(u32 index, s32 force)
{
    GameFlagEntry418070 *entry = &gameFlagBlockGet()->entries[index];
    if (entry->flags & 2) {
        if (gameFlagBlockGet()->activeEntry == index) {
            entry->flags &= ~0x46;
            gameFlagBlockGet()->activeEntry = 0;
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
