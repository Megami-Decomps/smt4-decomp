#include "common.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameDataAccess_VariantA.h"

extern "C" {

typedef struct GameFlagEntry29016c {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
} GameFlagEntry29016c;

typedef struct GameFlagBlock29016c {
    /* 0x000 */ u8 bits[0x200];
    /* 0x200 */ GameFlagEntry29016c entries[0x190];
    /* 0x840 */ u16 activeEntry;
} GameFlagBlock29016c;

void FUN_0023ddbc(u32 id, s32 value);

static inline void gameFlagWrite(u32 id, u32 value)
{
    u8 *bits = reinterpret_cast<GameFlagBlock29016c *>(gameGetFlagBlock())->bits;
    FUN_0023ddbc(id, value);
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
u32 FUN_0029016c(u32 index, s32 force)
{
    GameFlagEntry29016c *entry = &reinterpret_cast<GameFlagBlock29016c *>(gameGetFlagBlock())->entries[index];
    if (entry->flags & 2) {
        if (reinterpret_cast<GameFlagBlock29016c *>(gameGetFlagBlock())->activeEntry == index) {
            entry->flags &= ~0x46;
            reinterpret_cast<GameFlagBlock29016c *>(gameGetFlagBlock())->activeEntry = 0;
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
