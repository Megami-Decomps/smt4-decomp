#include "sound/SoundTestWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "code/Code002c_Smt4.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
/* Allocates the sound-test state and starts its control and drawing jobs. */
void soundTestCreate(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\sound\\soundTest.cpp", 49);
    g_soundTestWork = (SoundTestWork *)asdMemAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(SoundTestWork), 1);
    g_soundTestWork->state = 0;
    g_soundTestWork->frame = 0;
    g_soundTestWork->selection = 0;
    soundTestSetRequested(g_soundTestWork, 0);
    SoundTestWork *work = g_soundTestWork;
    work->job = asdProcessCreateSimple((const s8 *)"ST C", 2, 0, 0,
        soundTestActionMenuUpdate, callbackStateEnable, 0);
    taskCreateDraw((const s8 *)"ST D", 230, 0, 0, soundTestDrawJobUpdate, FUN_002f4b34, 0, (void *)work->job);
}
} /* extern "C" */
