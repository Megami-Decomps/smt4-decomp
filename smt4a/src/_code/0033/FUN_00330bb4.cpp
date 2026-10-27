/* NON_MATCHING: register allocation only: retail keeps the save pointer in r2 and the +0x88 base in r1, built reuses r1 for both */
#include "common.h"

extern "C" {

/* The save sub-block at +0x88 holding the two flag byte arrays (each indexed by flag id). */
typedef struct SaveFlagBlock {
    /* 0x00000 */ u8 unk00000[0x21548];
    /* 0x21548 */ u8 flagsA[0x6928];
    /* 0x27E70 */ u8 flagsB[0x48];
} SaveFlagBlock;

typedef struct SaveDataView {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ SaveFlagBlock block;
} SaveDataView;

typedef struct GameDataBlocks {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SaveDataView *save;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

/* Bit 2 of the flag byte kept for id 0-71 in the save data; 0 for other ids. */
u32 FUN_00330bb4(s32 id)
{
    if (id >= 72) {
        return 0;
    }
    if (id >= 0) {
        SaveFlagBlock *block = &g_gameDataBlocks.save->block;
        u8 *flag;
        if (id >= 64) {
            flag = &block->flagsB[id];
        } else {
            flag = &block->flagsA[id];
        }
        if (flag != NULL) {
            return (*flag & 4) >> 2;
        }
    }
    return 0;
}

} /* extern "C" */
