/* NON_MATCHING: decoding the heap flags after the request is queued schedules a different instruction sequence. */
#include "AsdSDK/Source/Sys/File/AsdLoadPath.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {
void rt_aeabi_memclr(void *buf, u32 size);
AsdFileRequest *asdFileQueueRequest(const char *path, u8 flag);
void asdFileRequestSetHeapKind(AsdFileRequest *request, u8 flags);
void optionalParameterTrySet(AsdFileRequest *request, u32 priority);
void asdFileWait(AsdFileRequest *request);

/* Loads a file synchronously. Returns the buffer (now owned by the caller) and stores its size in
 * *size, or returns 0 when the load failed. */
void *asdLoadFileSync(const char *path, u32 *size, u32 flags, u32 priority)
{
    char fullPath[ASD_FILE_PATH_LEN];
    AsdFileRequest *request;
    void *buffer;

    rt_aeabi_memclr(fullPath, ASD_FILE_PATH_LEN);
    asdLoadFileBuildPath(fullPath, path);

    request = asdFileQueueRequest(fullPath, 0);
    asdFileRequestSetHeapKind(request, ((flags & ASD_LOAD_FLAG_0) != 0) | (((flags & ASD_LOAD_FLAG_1) != 0) ? 0x10 : 0));
    optionalParameterTrySet(request, priority);
    asdFileWait(request);
    if (asdFileRequestHasFailed(reinterpret_cast<s32 *>(request)) != 0) {
        if (size != NULL) {
            *size = 0;
        }
        asdFileRequestRelease(request);
        return NULL;
    }
    buffer = request->buffer;
    if (size != NULL) {
        *size = request->size;
    }
    request->buffer = NULL;
    asdFileRequestRelease(request);
    return buffer;
}

} /* extern "C" */
