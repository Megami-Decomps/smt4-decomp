#pragma once
#include "common.h"

/* File request and load-file helpers of the Asd SDK. */
extern "C" {

u8 asdFileRequestHasFailed(s32 *message);

void asdFileRequestRelease(void *object);

u32 asdLoadFileHasDevice(const char *path);

void *asdLoadFileSyncDefault(const char *path);

s32 fileSlotFree(u32 index);

u32 loadSlotRequestAsync(u32 index, s32 async);

} /* extern "C" */
