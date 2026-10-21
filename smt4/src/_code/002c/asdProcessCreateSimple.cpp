#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {
u32 asdProcessCreate(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcFunc onStart, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);

/* Creates a process without start callback or owner. */
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work)
{
    return asdProcessCreate(name, group, startDelay, endDelay, NULL, onUpdate, onEnd, work, NULL);
}
}
