#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

void FUN_002c3940(void *buf, u32 size);
s32 asdLoadFileHasDevice(const char *path);
s32 asdLoadFileIsPatched(const char *path);
s32 FUN_002be624(char *dst, const char *format, ...);
AsdFileRequest *asdFileQueueRequest(const char *path, u8 flag);
void FUN_002b0184(AsdFileRequest *request, u8 flags);
void FUN_0014e834(AsdFileRequest *request, u32 priority);
void asdFileWait(AsdFileRequest *request);
s32 FUN_0014e724(AsdFileRequest *request);
void FUN_002b0174(AsdFileRequest *request);

/* Loads a file synchronously. Returns the buffer (now owned by the caller) and stores its size in
 * *size, or returns 0 when the load failed. */
void *asdLoadFileSync(const char *path, u32 *size, u32 flags, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    AsdFileRequest *request;
    void *buffer;

    FUN_002c3940(fullPath, ASD_FILE_PATH_LEN);
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        FUN_002be624(fullPath, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        FUN_002be624(fullPath, "patch:/%s", path);
    } else {
        FUN_002be624(fullPath, "rom:/%s", path);
    }

    request = asdFileQueueRequest(fullPath, 0);
    FUN_002b0184(request, ((flags & ASD_LOAD_FLAG_0) != 0) | (((flags & ASD_LOAD_FLAG_1) != 0) ? 0x10 : 0));
    FUN_0014e834(request, priority);
    asdFileWait(request);
    if (FUN_0014e724(request) != 0) {
        if (size != NULL) {
            *size = 0;
        }
        FUN_002b0174(request);
        return NULL;
    }
    if (size != NULL) {
        *size = request->size;
    }
    buffer = request->buffer;
    request->buffer = NULL;
    FUN_002b0174(request);
    return buffer;
}

} /* extern "C" */
