/* NON_MATCHING: native's transient invalid-result initialization is omitted; local request construction and stack/register allocation differ. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include <stddef.h>

namespace {
// Apocalypse stores a context/result pair where the shared IV request prefix has list links,
// and its copied record extends through 0x148. Keep the complete variant local.
struct AsdSyncFileRecordA {
    s32 state;
    s32 lifetime;
    s32 lifetimeStep;
    void *buffer;
    s32 userBuffer;
    u32 unk14;
    u32 size;
    u32 unk1C;
    u8 flag;
    u8 unk21[3];
    s32 heapKind;
    u32 alignment;
    char path[ASD_FILE_PATH_LEN];
    void *stream;
    void (*onDone)(AsdSyncFileRecordA *);
    AsdSyncFileRecordA *onDoneArg;
    void (*onOpen)(void *);
    void *context;
    s32 result;
    u32 unk144;
    u32 unk148;
};
typedef char AsdSyncFileRecordALayoutCheck[sizeof(AsdSyncFileRecordA) == 0x14C &&
    offsetof(AsdSyncFileRecordA, context) == 0x13C &&
    offsetof(AsdSyncFileRecordA, result) == 0x140 ? 1 : -1];
}

extern "C" {
extern s8 g_asdLoadFileUseRawPaths;
extern const char DAT_0053d4c0[];
void rt_aeabi_memclr(void *data, u32 size);
void sysMemClear(void *data, u32 size);
void textFormatBuffer(char *output, const char *format, ...);
s32 asdLoadFileHasDevice(const char *path);
void pathSetWithRomPrefix(AsdSyncFileRecordA *record, const char *path);
void asdLoadConfigureModeFlags(AsdSyncFileRecordA *record, u32 flags);
AsdFileEntry *asdFileAddEntry(const void *record);
void asdFileWait(AsdSyncFileRecordA *request);
s32 asdFileRequestHasFailed(AsdSyncFileRecordA *request);
void asdFileRequestRelease(AsdSyncFileRecordA *request);

// Queue a copied request, wait for completion, and transfer successful buffer ownership to the caller.
void *asdLoadFileSync(s32 *result, void *context, const char *path, u32 *size, u32 flags, u32 alignment)
{
    char fullPath[ASD_FILE_PATH_LEN];
    rt_aeabi_memclr(fullPath, sizeof(fullPath));
    if (g_asdLoadFileUseRawPaths != 0 || asdLoadFileHasDevice(path) != 0)
        textFormatBuffer(fullPath, path);
    else
        textFormatBuffer(fullPath, DAT_0053d4c0, path);
    AsdSyncFileRecordA record;
    record.state = 0;
    record.lifetime = 1;
    record.lifetimeStep = 0;
    record.unk14 = 0;
    record.buffer = NULL;
    record.userBuffer = 0;
    record.alignment = 0x80;
    record.size = 0;
    record.unk1C = 0;
    record.flag = 0;
    record.heapKind = 0;
    sysMemClear(record.path, sizeof(record.path));
    record.stream = NULL;
    record.onDone = NULL;
    record.onDoneArg = NULL;
    record.onOpen = NULL;
    record.context = NULL;
    record.result = 0;
    record.unk144 = 0;
    record.unk148 = 0;
    pathSetWithRomPrefix(&record, fullPath);
    asdLoadConfigureModeFlags(&record, flags);
    record.alignment = alignment;
    record.context = context;
    AsdSyncFileRecordA *request = reinterpret_cast<AsdSyncFileRecordA *>(asdFileAddEntry(&record));
    asdFileWait(request);
    if (result != NULL)
        *result = request->result;
    if (asdFileRequestHasFailed(request) != 0) {
        if (size != NULL)
            *size = 0;
        asdFileRequestRelease(request);
        return NULL;
    }
    if (size != NULL)
        *size = request->size;
    void *buffer = request->buffer;
    request->buffer = NULL;
    asdFileRequestRelease(request);
    return buffer;
}
}
