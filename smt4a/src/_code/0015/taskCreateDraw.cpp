#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "code/Code0015_Smt4a.h"


extern "C" {
/* Reads or updates the requested task state. */
u32 asdProcessCreate(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcFunc onStart, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner)
{
    return asdProcessCreate(name, group, startDelay, endDelay, NULL, onUpdate, onEnd, work, owner);
}
}
