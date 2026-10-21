#include "common.h"

extern "C" {

typedef struct AocMain {
    /* 0x000 */ u8 unk000[0x678];
    /* 0x678 */ void *loader;
} AocMain;

extern AocMain *g_aocMain;

extern void FUN_00169548(s32 arg);
extern void messageMainSetFlag(s32 arg);
extern void gameDataBlocksReleaseHold(s32 arg);
extern void gameDataFlagsClearBits(s32 arg);
extern void deletingDtor_002e56ec(void *object, void *callback);
extern void FUN_00473710(AocMain *aoc);
extern void ownerReleaseResources(AocMain *aoc);

/* Shuts the add-on content main down: releases its subsystems, deletes the loader and finishes the block. */
void aocMainShutdown(void)
{
    AocMain *aoc;

    FUN_00169548(0);
    messageMainSetFlag(1);
    gameDataBlocksReleaseHold(4);
    gameDataFlagsClearBits(4);
    aoc = g_aocMain;
    if (aoc->loader != NULL) {
        deletingDtor_002e56ec(aoc->loader, (void *)0x47D8E8);
        aoc->loader = NULL;
    }
    FUN_00473710(aoc);
    ownerReleaseResources(aoc);
}

} /* extern "C" */
