/* NON_MATCHING: 64 lines; switch(kind) and testBlockBit match retail, remaining: clearSpawnBit register choice and first-pass loop scheduling. */
#include "gamedata/MapSaveBlockA.h"
#include "util/Random.h"

struct SpawnRecord {
    /* 0x00 */ s8 area;
    /* 0x01 */ s8 sub;
    /* 0x02 */ u8 unk02[9];
    /* 0x0B */ s8 kind;
    /* 0x0C */ u8 unk0C[0x1C];
    /* 0x28 */ u16 gateFlag;
    /* 0x2A */ u16 forceFlag;
};

/* Bit helpers matching twin smt4 FUN_002f3694. */
static __inline void clearSpawnBit(MapSaveBlockA *block, s32 index)
{
    s32 word = index / 32;
    s32 bit = index % 32;
    block->slotBits[word] &= ~(1 << bit);
}

static __inline void setSpawnBit(MapSaveBlockA *block, s32 index)
{
    s32 word = index / 32;
    s32 bit = index % 32;
    block->slotBits[word] |= 1 << bit;
}

static __inline bool testBlockBit(s16 index)
{
    MapSaveBlockA *b = gameFlagsGetBlock();
    s32 word = index / 32;
    s32 bit = index % 32;
    return (b->blockBits[word] & (1 << bit)) != 0;
}

extern "C" {
s32 dataTableGetRecordFortyNine(void);
SpawnRecord *FUN_003689d0(s32 index);

/* Resets and re-rolls active spawn bits for records matching (area, sub). */
void FUN_003b9720(s32 area, s32 sub)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    s32 candidates = 0;
    for (s32 i = 0; i < dataTableGetRecordFortyNine(); i++) {
        SpawnRecord *record = FUN_003689d0(i);
        if (record->area == -1 || record->area != area || record->sub != sub)
            continue;
        clearSpawnBit(block, i);
        switch (record->kind) {
        case 0:
        case 6:
        case 14:
            break;
        default:
            continue;
        }
        candidates++;
    }
    if (candidates == 0)
        return;
    s32 pick = candidates == 1 ? 0 : randRange((u16)(candidates - 1));
    s32 seen = 0;
    for (s32 i = 0; i < dataTableGetRecordFortyNine(); i++) {
        SpawnRecord *record = FUN_003689d0(i);
        if (record->area == -1 || record->area != area || record->sub != sub)
            continue;
        switch (record->kind) {
        case 0:
        case 6:
        case 14:
            break;
        default:
            continue;
        }
        if (record->gateFlag == 0) {
            if (seen == pick)
                setSpawnBit(block, i);
        }
        if (record->gateFlag != 0) {
            if (!testBlockBit((s16)record->gateFlag))
                setSpawnBit(block, i);
        }
        if (record->forceFlag != 0)
            setSpawnBit(block, i);
        seen++;
    }
}

} /* extern "C" */
