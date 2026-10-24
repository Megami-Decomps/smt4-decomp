/* NON_MATCHING: same loops and tests; retail recomputes the spawn-bit word address (`block + (i >> 5) * 4 + 0x7C8`) at every access and spills the random pick to the stack (push {r3,...}, no ip), while armcc here hoists block+0x7C8 into r9, keeps the pick in a register (push includes ip) and orders the bit-index arithmetic differently. */
#include "common.h"

/* A spawn record of table 49 (only the fields the refresh reads). */
struct SpawnRecord {
    /* 0x00 */ s8 area;
    /* 0x01 */ s8 sub;
    /* 0x02 */ u8 unk02[9];
    /* 0x0B */ s8 kind;             /* 0, 6 and 14 take part in the random pick */
    /* 0x0C */ u8 unk0C[0x1C];
    /* 0x28 */ u16 gateFlag;        /* the record spawns only while this game flag is clear */
    /* 0x2A */ u16 forceFlag;       /* nonzero: spawns regardless of the pick */
};

/* The game flag block: the spawn bits and the game flags. */
struct GameFlagBlock {
    /* 0x000 */ u8 unk000[0x7C8];
    /* 0x7C8 */ u32 spawned[0x84];
    /* 0xD4C */ u32 flags[1];
};

static inline void setBit(u32 *bits, s32 index) { bits[index / 32] |= 1 << (index % 32); }
static inline void clearBit(u32 *bits, s32 index) { bits[index / 32] &= ~(1 << (index % 32)); }
static inline bool testBit(const u32 *bits, s32 index) { return (bits[index / 32] & (1 << (index % 32))) != 0; }

extern "C" {
GameFlagBlock *gameFlagsGetBlock(void);
s32 dataTableGetRecordFortyNine(void);
SpawnRecord *FUN_003689d0(s32 index);
s32 randRange(u32 limit);

static inline bool takesPartInPick(const SpawnRecord *record)
{
    return record->kind == 0 || record->kind == 6 || record->kind == 14;
}

/* Rebuilds the spawn bits of one area: every record of the area is cleared, then one of the
 * candidates (kind 0, 6 or 14) picked at random is enabled, along with the records the game
 * flags or their force flag allow. */
void FUN_003b9720(s32 area, s32 sub)
{
    GameFlagBlock *block = gameFlagsGetBlock();
    s32 candidates = 0;
    for (s32 i = 0; i < dataTableGetRecordFortyNine(); i++) {
        SpawnRecord *record = FUN_003689d0(i);
        if (record->area != -1 && record->area == area && record->sub == sub) {
            clearBit(block->spawned, i);
            if (takesPartInPick(record))
                candidates++;
        }
    }
    if (candidates == 0)
        return;
    s32 pick = candidates == 1 ? 0 : randRange((u16)(candidates - 1));
    s32 seen = 0;
    for (s32 i = 0; i < dataTableGetRecordFortyNine(); i++) {
        SpawnRecord *record = FUN_003689d0(i);
        if (record->area == -1 || record->area != area || record->sub != sub || !takesPartInPick(record))
            continue;
        if (record->gateFlag != 0) {
            if (!testBit(gameFlagsGetBlock()->flags, (s16)record->gateFlag))
                setBit(block->spawned, i);
        } else if (seen == pick) {
            setBit(block->spawned, i);
        }
        if (record->forceFlag != 0)
            setBit(block->spawned, i);
        seen++;
    }
}

} /* extern "C" */
