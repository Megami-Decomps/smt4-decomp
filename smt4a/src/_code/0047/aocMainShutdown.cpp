#include "addon/AocBufferRequest.h"
#include "classes/Obj422214Owner.h"
#include "addon/aocMain.h"

extern "C" {

extern void buttonHelpSetEnabled(s32 arg);
extern void messageMainSetFlag(s32 arg);
extern void gameDataBlocksReleaseHold(s32 arg);
extern void gameDataFlagsClearBits(s32 arg);
extern void aocApplicationReleasePrimaryRequest(AocMain *aoc);
extern void ownerReleaseResources(AocMain *aoc);

/* Shuts the add-on content main down: releases its subsystems, deletes the loader and finishes the block. */
void aocMainShutdown(void)
{
    AocMain *aoc;

    buttonHelpSetEnabled(0);
    messageMainSetFlag(1);
    gameDataBlocksReleaseHold(4);
    gameDataFlagsClearBits(4);
    aoc = g_aocMain;
    if (aoc->records != NULL) {
        delete[] aoc->records;
        aoc->records = NULL;
    }
    aocApplicationReleasePrimaryRequest(aoc);
    ownerReleaseResources(aoc);
}

} /* extern "C" */
