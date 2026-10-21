#include "common.h"

extern "C" {

typedef struct Block {
    /* 0x000 */ u8 unk000[0x754];
    /* 0x754 */ u8 effect[4];
} Block;

typedef struct Globals {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Block *block;
} Globals;

typedef struct Context {
    /* 0x00000 */ u8 unk00000[0x1F454];
    /* 0x1F454 */ int active;
} Context;

extern Globals g_messageMain;

Context *gameDataBlocksGetSaveData(void);
int FUN_002bee58(void *target, int arg);

/* Script command: if the context is active, runs FUN_002bee58 on the effect of the global block. */
u32 scrEffectRunIfActive(void)
{
    Block *block = g_messageMain.block;

    if (gameDataBlocksGetSaveData()->active == 0) {
        return 1;
    }
    FUN_002bee58(block->effect, 7);
    return 1;
}

} /* extern "C" */
