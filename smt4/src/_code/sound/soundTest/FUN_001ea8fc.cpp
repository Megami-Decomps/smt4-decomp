/* NON_MATCHING: allocation-result and task-creation argument registers differ, changing literal-pool order. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct SoundTestWork {
    u32 process; // 0x00
    u8 active; // 0x04
    u8 unk05[3];
    u32 selectedSound; // 0x08
    u32 selectedBank; // 0x0c
    u32 playingSound; // 0x10
};
extern "C" {
extern SoundTestWork *DAT_0044e110;
u32 taskCreateDraw(const char *name, u32 priority, u32 workSize, u32 flags, void (*update)(), void (*destroy)(), u32 argument, u32 parent);
void FUN_001e960c();
void FUN_002ca6e0();
void FUN_002ca6f8();
void FUN_002f4b34();

// Allocate the sound-test state and start its control and drawing jobs.
void FUN_001ea8fc()
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\sound\\soundTest.cpp", 49);
    SoundTestWork *work = (SoundTestWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(SoundTestWork), 1);
    DAT_0044e110 = work;
    work->selectedSound = 0;
    work->selectedBank = 0;
    work->playingSound = 0;
    work->active = 0;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("ST Cont"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001e960c), reinterpret_cast<AsdProcFunc>(FUN_002ca6e0), 0);
    taskCreateDraw("ST Draw", 230, 0, 0, FUN_002ca6f8, FUN_002f4b34, 0, work->process);
}
}
