#pragma once
#include "common.h"

extern "C" {

/* Loads a file into an owned buffer, optionally returning its size; the full path form of asdLoadFileSync. */
void *asdLoadFileSync(s32 *result, void *context, const char *path, u32 *size, u32 flags, u32 alignment);

/* Loads `path` synchronously with the default request alignment (4); returns the buffer. */
void *asdLoadFileWithSize(const char *path, u32 *size, u32 flags);

/* asdLoadFileSync with no result slot or context (smt4a). */
void *asdLoadFileSyncNoContext(const char *path, u32 *size, u32 flags, u32 alignment);

} /* extern "C" */
