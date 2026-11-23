#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "code/Code0015_Smt4a.h"
#include "sound/SoundTestWork.h"

extern "C" {

s32 soundTestActionMenuUpdate(u32 handle);
s32 soundTestDrawJobUpdate(u32 handle);
void FUN_0037a114(u32 handle);

/* Creates the sound test: its work block, the control process and the draw task under it. */
void soundTestCreate(void)
{
    SoundTestWork *work;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\sound\\soundTest.cpp", 49);
    g_requestWork = (SoundTestWork *)asdMemoryAllocTracked(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(SoundTestWork), 1);
    g_requestWork->state = 0;
    g_requestWork->frame = 0;
    g_requestWork->selection = 0;
    soundTestSetRequested(g_requestWork, 0);
    work = g_requestWork;
    work->job = asdProcessCreateSimple((const s8 *)"ST C", 4, 0, 0, soundTestActionMenuUpdate, workRequest, 0);
    taskCreateDraw((const s8 *)"ST D", 0xEA, 0, 0, soundTestDrawJobUpdate, FUN_0037a114, 0, (void *)work->job);
}

} /* extern "C" */
