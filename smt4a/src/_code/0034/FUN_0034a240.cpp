/* NON_MATCHING: the save block pointer is loaded into r2 and the flags base formed in r1 (retail); here the load reuses r1. */
#include "common.h"

extern "C" {

typedef struct SaveFlags {
    /* 0x00000 */ u8 unk00000[0x21548];
    /* 0x21548 */ u8 low[0x6928];  /* indexed by ids 0-63 */
    /* 0x27E70 */ u8 high[0x100];  /* indexed by ids 64-71 */
} SaveFlags;

typedef struct SaveBlock {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ SaveFlags flags;
} SaveBlock;

typedef struct GameDataBlocks {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ SaveBlock *saveBlock;
} GameDataBlocks;

extern GameDataBlocks g_gameDataBlocks;

/* Sets bit 2 of the save flag byte of id (0-71). */
void FUN_0034a240(s32 id)
{
    u8 *flag;

    if (id < 0x48) {
        if (id >= 0) {
            SaveFlags *flags = &g_gameDataBlocks.saveBlock->flags;

            if (id >= 0x40) {
                flag = &flags->high[id];
            } else {
                flag = &flags->low[id];
            }
            if (flag != NULL) {
                *flag |= 4;
            }
        }
    }
}

}
