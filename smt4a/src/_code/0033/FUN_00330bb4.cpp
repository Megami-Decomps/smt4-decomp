/* NON_MATCHING: register allocation only: retail keeps the save pointer in r2 and the +0x88 base in r1, built reuses r1 for both */
#include "common.h"

extern "C" {

typedef struct GameDataBlocks {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *save;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

#define SAVE_FLAGS_A 0x21548  /* flags for ids 0-63 */
#define SAVE_FLAGS_B 0x27E70  /* flags for ids 64-71 */

/* Bit 2 of the flag byte kept for id 0-71 in the save data; 0 for other ids. */
u32 FUN_00330bb4(s32 id)
{
    u8 *flag;
    u8 *entry;
    u8 *base;

    if (id >= 72) {
        return 0;
    }
    if (id >= 0) {
        base = g_gameDataBlocks.save + 0x88;
        entry = id + base;
        if (id >= 64) {
            flag = entry + SAVE_FLAGS_B;
        } else {
            flag = entry + SAVE_FLAGS_A;
        }
        if (flag != NULL) {
            return (*flag & 4) >> 2;
        }
    }
    return 0;
}

} /* extern "C" */
