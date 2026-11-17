/* NON_MATCHING: register allocation only: retail loads the data-blocks pointer into r2 and adds 0x88 into r1; built uses r1 for both. */
#include "gamedata/GameSaveBlocks.h"

extern "C" {

static __inline u8 *flagByteGet(GameSaveBody *body, s32 index)
{
    if (index >= 0x40) {
        return &body->extendedFlags.flagsB[index];
    }
    return &body->flagsA[index];
}

/* Returns bit 2 of flag byte `index` (0..0x47), 0 when out of range. */
u32 gameDataBlocksGetFlagBit2(s32 index)
{
    if (index < 0x48) {
        if (index >= 0) {
            GameSaveData *save = g_gameDataBlocks.saveBlock;
            u8 *flag = flagByteGet(&save->body, index);

            if (flag != NULL) {
                return (*flag & 4) >> 2;
            }
        }
    }
    return 0;
}

} /* extern "C" */
