#include "battle/btlMain.h"
#include "battle/btlGameOver.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern BtlGameOverGlobalsA g_btlGameOver;
u32 taskCreateDraw(const char* name, u32 priority, u32 flags, u32 mode,
                   s32 (*update)(void), void (*destroy)(u32), void* work, u32 parent);
void* asdMemoryAllocTracked(u32 heap, u32 alignment, u32 flags, u32 size, u32 mode);
s32 FUN_002dedf0(void);
s32 btlGameOverDispatchCurrentJob(void);
void btlGameOverDestroy(u32 job);

// Attach the game-over calculation and two draw jobs, then allocate their shared state.
void btlCreateGameOverJobs(BtlMainStateA* battle)
{
    battle->jobB = taskCreateDraw("btlGameOver Calc", 4, 0, 0,
                                  FUN_002dedf0, btlGameOverDestroy, battle, battle->job);
    taskCreateDraw("btlGameOver DrawUpLeft", 0x7E, 0, 0,
                   btlGameOverDispatchCurrentJob, NULL, battle, battle->jobB);
    taskCreateDraw("btlGameOver DrawUpRight", 0xDA, 0, 0,
                   btlGameOverDispatchCurrentJob, NULL, battle, battle->jobB);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlGameOver.cpp", 1047);
    g_btlGameOver.state = static_cast<BtlGameOverA*>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x4C, 1));
}
}
