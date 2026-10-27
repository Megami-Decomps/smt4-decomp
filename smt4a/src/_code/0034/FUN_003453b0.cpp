/* NON_MATCHING: the 7-slot search is now the plain per-slot loop with separate halfword loads (retail shape); remaining: the rank shift is written to r3 where retail uses r1 (the freed slot-id register). */
#include "common.h"

/* A save-data slot: an ID and a packed word whose bits 10+ hold a rank. */
struct RankedSlot {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 packed;
};

/* The save-data part (+0x88) of the game data block; only the ranked slots are named. */
struct SaveRanks {
    /* 0x00000 */ u8 unk00000[0x28360];
    /* 0x28360 */ RankedSlot slots[7];
};

struct GameBlockView {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ SaveRanks save;
};

extern "C" {

struct GameDataBlocks {
    u32 unk00;
    GameBlockView *block;
};

extern GameDataBlocks g_gameDataBlocks; /* 0x57f698 */
s32 gameFlagIsSet(u32 flag);

/* With flags 0x45b and 0x4f7 set, returns whether the slot with ID `id` has a rank of 1-3. */
u32 FUN_003453b0(u32 id)
{
    if (gameFlagIsSet(0x45b) != 0 && gameFlagIsSet(0x4f7) != 0) {
        SaveRanks *save = &g_gameDataBlocks.block->save;

        for (s32 i = 0; i < 7; i++) {
            u32 slotId = save->slots[i].id;
            u32 rank = save->slots[i].packed >> 10;
            if (slotId == id) {
                if (rank - 1 <= 2) {
                    return 1;
                }
                return 0;
            }
        }
    }
    return 0;
}

} /* extern "C" */
