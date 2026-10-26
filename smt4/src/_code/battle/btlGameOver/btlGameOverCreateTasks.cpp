#include "battle/btlGameOver.h"
#include "shard/GameDataBlocks.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
u32 taskCreateDraw(const char *name, s32 priority, s32 flags, s32 workSize,
                   s32 (*run)(u32), void (*destroy)(u32), void *work, u32 parent);
s32 FUN_0020ef14(u32 job);
s32 btlGameOverRunForJob(u32 job);
void btlGameOverDestroy(u32 job);
extern BtlGameOver *g_btlGameOver;
GameSaveData *gameDataBlocksGetSaveData();
s32 gameFlagIsSet(u32 flag);

// Start the calculation and both display tasks, then enable continuation when unlocked.
void btlGameOverCreateTasks(BtlGameOverJobWork *work)
{
    work->job = taskCreateDraw("btlGameOver Calc", 2, 0, 0, FUN_0020ef14, btlGameOverDestroy,
                               work, work->parentJob);
    taskCreateDraw("btlGameOver DrawUpLeft", 0x7a, 0, 0, btlGameOverRunForJob, NULL, work, work->job);
    taskCreateDraw("btlGameOver DrawUpRight", 0xd8, 0, 0, btlGameOverRunForJob, NULL, work, work->job);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlGameOver.cpp", 925);
    g_btlGameOver = static_cast<BtlGameOver *>(asdMemAlloc(0x100, 0x100, 0, 0x40, 1));
    BtlGameOver *state = g_btlGameOver;
    if (gameDataBlocksGetSaveData()->gameOver.gameOverContinueEnabled != 0 && gameFlagIsSet(0x557) == 0) {
        state->unk04 |= 1;
        work->flags |= 0x80000000ULL;
    }
}
}
