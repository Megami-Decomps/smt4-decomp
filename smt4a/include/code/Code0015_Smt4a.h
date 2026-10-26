#pragma once
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* Functions in the 0x00150000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct HeapOwner;
extern "C" {

void heapOwnerCreate(HeapOwner *owner, u32 start, u32 size, u32 option);

u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay, AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work, void *owner);

} /* extern "C" */
