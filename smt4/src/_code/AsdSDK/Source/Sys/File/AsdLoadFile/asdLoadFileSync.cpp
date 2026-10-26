/* NON_MATCHING: stack-frame size, argument register allocation, and path-format literal placement differ from retail. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {
extern s8 g_asdLoadFileUseRawPaths; /* 1: use paths exactly as given */

void rt_aeabi_memclr(void *buf, u32 size);
s32 asdLoadFileIsPatched(const char *path);
s32 textFormatBuffer(char *dst, const char *format, ...);
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
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0) {
        textFormatBuffer(fullPath, path);
    } else if (asdLoadFileIsPatched(path) != 0) {
        textFormatBuffer(fullPath, "patch:/%s", path);
    } else {
        textFormatBuffer(fullPath, "rom:/%s", path);
    }

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
    if (size != NULL) {
        *size = request->size;
    }
    buffer = request->buffer;
    request->buffer = NULL;
    asdFileRequestRelease(request);
    return buffer;
}

} /* extern "C" */
