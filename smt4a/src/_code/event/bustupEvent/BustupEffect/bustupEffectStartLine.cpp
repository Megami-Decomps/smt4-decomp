#include "shard/W6_W6Match5_EffectLineJob.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
extern const char DAT_0052f720[];
extern const s8 DAT_0052f714[];
extern const s8 DAT_0052f704[];
s32 scrGetArg(u32 index);
s32 FUN_00162ea4();
void *asdMemoryAllocTracked(u32 heap, u32 alignment, s32 offset, u32 bytes, u32 tracked);
BustupEffectLineObject *FUN_002282c8(u32 group, u32 id, u32 flags);
s32 effLineJobUpdate(u32 handle);
void jobWorkDestroy0(u32 handle);
s32 jobResetOwnerCallback(u32 handle);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 startDelay, u16 endDelay,
    AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, void *owner);
void bustupCutAnimSetJobParam(u32 handle);
}

// Start a line effect for the script-specified number of frames.
extern "C" s32 bustupEffectStartLine()
{
    s32 duration = scrGetArg(0);
    if (FUN_00162ea4() == 0) {
        asdDebugTrace(DAT_0052f720, 243);
        EffectLineJobWork *work = static_cast<EffectLineJobWork *>(
            asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EffectLineJobWork), 1));
        memset(work, 0, sizeof(*work));
        work->object = FUN_002282c8(10, 7, 0);
        work->setLifetime(0.0f, (f32)duration);
        u32 process = asdProcessCreateSimple(DAT_0052f714, 4, 0, 0,
            effLineJobUpdate, jobWorkDestroy0, reinterpret_cast<u32>(work));
        taskCreateDraw(DAT_0052f704, 0x73, 0, 0, jobResetOwnerCallback, NULL,
            reinterpret_cast<u32>(work), reinterpret_cast<void *>(process));
        bustupCutAnimSetJobParam(process);
    }
    return 1;
}
