#ifndef ADDON_AOC_FILE_BUFFER_API_H
#define ADDON_AOC_FILE_BUFFER_API_H
#include "addon/AocSystem.h"

/* Load package kinds 7 (script) and 8 (messages). A missing package returns
 * NULL; successful callers own and eventually free the returned file buffer. */
struct FileQueue;
extern "C" {
AocPackageFile *packageFindFileByTypeAndId(AocSystem *system, s32 type, s32 id, char *path);
u32 fileQueueRequestAndWait(FileQueue *queue, const char *path, const char *secondPath,
                            u32 *transferredBytes, u32 mode, u32 bytes, void *context);
void *FUN_00289de4(AocSystem *system, s32 id, const char *secondPath);
void *aocBufferQueueDisplay(AocSystem *system, s32 id, const char *secondPath);
}
#endif
