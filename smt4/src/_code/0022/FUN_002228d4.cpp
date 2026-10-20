/* NON_MATCHING: retail adds the table base (+0x88) as a separate `add r0, r0, #136` and indexes it with the 0x24B27 literal; the build folds both into one 0x24BAF literal. */
#include "common.h"

extern "C" {

typedef struct GameBlock04 {
    /* 0x00000 */ u8 unk00000[0x88];
    /* 0x00088 */ u8 table[0x24B28];   /* indexed by id */
} GameBlock04;

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ GameBlock04 *block04;
} GameDataBlocksView;

extern GameDataBlocksView g_gameDataBlocks; /* 0x43e2a8 */

/* Byte 0x24B27 of the block-04 table. */
u8 FUN_002228d4(void)
{
    return g_gameDataBlocks.block04->table[0x24B27];
}

} /* extern "C" */
