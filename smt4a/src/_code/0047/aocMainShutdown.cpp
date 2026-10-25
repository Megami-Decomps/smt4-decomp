#include "addon/AocBufferRequest.h"
#include "classes/Obj422214Owner.h"

extern "C" {

typedef struct AocMain {
    /* 0x000 */ u8 unk000[0x678];
    /* 0x678 */ Obj422214Owner *loader;
} AocMain;

extern AocMain *g_aocMain;

extern void FUN_00169548(s32 arg);
extern void messageMainSetFlag(s32 arg);
extern void gameDataBlocksReleaseHold(s32 arg);
extern void gameDataFlagsClearBits(s32 arg);
extern void aocApplicationReleasePrimaryRequest(AocApplicationRequestView *aoc);
extern void ownerReleaseResources(AocApplicationRequestView *aoc);

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
        delete[] aoc->loader;
        aoc->loader = NULL;
    }
    aocApplicationReleasePrimaryRequest(reinterpret_cast<AocApplicationRequestView *>(aoc));
    ownerReleaseResources(reinterpret_cast<AocApplicationRequestView *>(aoc));
}

} /* extern "C" */
