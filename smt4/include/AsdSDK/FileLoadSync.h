/* Synchronous file loading (AsdLoadFile). */
#ifndef SMT4_ASDSDK_FILELOADSYNC_H
#define SMT4_ASDSDK_FILELOADSYNC_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Loads a file synchronously. Returns the buffer (now owned by the caller) and stores its size in
 * *size, or returns 0 when the load failed. */
void *asdLoadFileSync(const char *path, u32 *size, u32 flags, u32 priority);

/* Loads a file synchronously with the default priority (4). */
void *fileLoadSync(const char *path, u32 *size, u32 flags);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
