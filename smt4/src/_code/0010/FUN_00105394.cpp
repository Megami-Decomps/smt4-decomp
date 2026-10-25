/* NON_MATCHING: register allocation of the temporaries only (retail rotates r2/r3/ip differently in the tick test and in each countdown loop); control flow and instructions are otherwise identical. */
#include "common.h"
#include "shard/SaveWork.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0xBD8];
    /* 0xBD8 */ u8 cooldownA[64];    /* 0xFF means no expiry */
    /* 0xC18 */ u8 cooldownB[128];
    /* 0xC98 */ u8 unkC98[0xC4];
    /* 0xD5C */ s16 cooldownC[16];
    /* 0xD7C */ u8 unkD7C[0xE4];
    /* 0xE60 */ s32 cooldownD[48];
} MapBlock;

typedef struct GameState {
    /* 0x000 */ u8 unk000[0x220];
    /* 0x220 */ s32 tick;
} GameState;

extern GameState g_gameState; /* 0x49f91c */

extern int FUN_0010b580(void);

/* Per-frame tick of the map block's countdowns; every 0x709 frames the slower tables count down as well. */
void FUN_00105394(void)
{
    MapBlock *block = reinterpret_cast<MapBlock *>(gameGetMapBlock());
    int i;

    g_gameState.tick = g_gameState.tick + 1;
    if (g_gameState.tick > 0x708) {
        g_gameState.tick = 0;
        for (i = 0; i < 64; i++) {
            if (block->cooldownA[i] != 0 && block->cooldownA[i] != 0xFF) {
                block->cooldownA[i]--;
            }
        }
        for (i = 0; i < 128; i++) {
            if (block->cooldownB[i] != 0) {
                block->cooldownB[i]--;
            }
        }
        for (i = 0; i < 16; i++) {
            if (block->cooldownC[i] > 0) {
                block->cooldownC[i]--;
            }
        }
    }
    for (i = 0; i < 48; i++) {
        if (block->cooldownD[i] > 0) {
            block->cooldownD[i]--;
        }
    }
    FUN_0010b580();
}

} /* extern "C" */
