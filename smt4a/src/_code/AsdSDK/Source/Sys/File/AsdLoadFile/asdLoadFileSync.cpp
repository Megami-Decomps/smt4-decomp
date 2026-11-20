#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Sys/File/AsdFileReadRequest.h"
#include "AsdSDK/Source/Sys/File/AsdLoadPath.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"

extern "C" {
void rt_aeabi_memclr(void *data, u32 size);
void pathSetWithRomPrefix(AsdFileReadRequestA *record, const char *path);
void asdLoadConfigureModeFlags(AsdFileReadRequestA *record, u32 flags);
AsdFileEntry *asdFileAddEntry(const void *record);
void asdFileWait(AsdFileReadRequestA *request);

/* Queues a request, waits for completion and returns the caller-owned buffer on success. */
void *asdLoadFileSync(s32 *result, void *context, const char *path, u32 *size, u32 flags, u32 alignment)
{
    char fullPath[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(fullPath, sizeof(fullPath));
    asdLoadFileBuildPath(fullPath, path);

    AsdFileReadRequestA record;
    asdFileResetReadRequest(&record);
    pathSetWithRomPrefix(&record, fullPath);
    asdLoadConfigureModeFlags(&record, flags);
    record.alignment = alignment;
    record.context = context;
    AsdFileReadRequestA *request = (AsdFileReadRequestA *)asdFileAddEntry(&record);
    asdFileWait(request);
    if (result != NULL) {
        *result = request->result;
    }
    if (asdFileRequestHasFailed((s32 *)request) != 0) {
        if (size != NULL) {
            *size = 0;
        }
        asdFileRequestRelease(request);
        return NULL;
    }
    void *buffer = request->buffer;
    if (size != NULL) {
        *size = request->size;
    }
    request->buffer = NULL;
    asdFileRequestRelease(request);
    return buffer;
}
} /* extern "C" */
