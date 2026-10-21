/* NON_MATCHING: retail inlines SVC 0x23; the normal svcCloseHandle call preserves behavior without banned syscall intrinsics. */
#include "shard/W6_W6Match2_HandleRequest.h"
#include "shard/W6_W6Match7_UnitHeapModule.h"
#include "nn/Result.h"
#include <new>

struct DirectFileStream;
struct DirectFileAdapter;

struct DirectFileStreamVtable {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void (*destroy)(DirectFileStream *);
};

struct DirectFileStream {
    /* 0x00 */ const DirectFileStreamVtable *vtable;
    /* 0x04 */ u8 unk04[0x12c];
};

struct DirectFileAdapterVtable {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ void (*destroy)(DirectFileAdapter *);
};

extern "C" const DirectFileAdapterVtable DAT_00420d50;

struct DirectFileAdapter {
    /* 0x00 */ const DirectFileAdapterVtable *vtable;
    /* 0x04 */ u32 handle;

    explicit DirectFileAdapter(u32 fileHandle)
        : vtable(&DAT_00420d50), handle(fileHandle)
    {
    }
};

struct DirectFileSystemGlobals {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 session;
};

struct TitleArchivePath {
    /* 0x00 */ u64 titleId;
    /* 0x08 */ u8 mediaType;
    /* 0x09..0x0f are ProgramInfo padding. */
};

struct TitleContentPath {
    /* 0x00 */ u32 type;
    /* 0x04 */ u32 contentIndex;
    /* 0x08 */ u32 unk08[3];
};

extern "C" {
extern DirectFileSystemGlobals g_titleContentFileSystem;
extern UnitHeapModuleState g_titleContentAdapterHeap;
DirectFileStream *FUN_001392fc();
DirectFileStream *FUN_001393e4(DirectFileStream *);
s32 FUN_00138f14(DirectFileStream *, DirectFileAdapter *, u32, u32, u32, u32, u32);
void memClear(void *, u32 bytes);
void *nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(UnitHeapModuleState *);
u32 nn_fs_ipc_FileSystem_OpenFileDirectly(u32 *session, u32 *fileHandle,
                                         u32 transaction, u32 archiveId,
                                         u32 archivePathType, const void *archivePath, u32 archivePathSize,
                                         u32 filePathType, const void *filePath, u32 filePathSize,
                                         u32 mode, u32 attributes);
s32 svcCloseHandle(u32 handle);
}

// Publish the title-content stream only after its file and stream setup succeed.
extern "C" u32 titleContentStreamCreate(u32 *output, const HandleRequest *request,
                            u32 first, u32 second, u32 third, u32 fourth, u32 fifth)
{
    const u32 outOfMemory = 0xd8604659;
    u32 status = outOfMemory;
    DirectFileStream *result = NULL;
    DirectFileStream *stream = FUN_001392fc();
    if (stream != NULL) {
        memClear(stream, sizeof(*stream));
        stream = FUN_001393e4(stream);
        if (stream != NULL) {
            TitleArchivePath archivePath;
            archivePath.titleId = request->value;
            archivePath.mediaType = static_cast<u8>(request->kind);
            TitleContentPath contentPath = {0, request->argument, {0, 0, 0}};
            u32 fileHandle = 0;
            u32 session = g_titleContentFileSystem.session;
            status = nn_fs_ipc_FileSystem_OpenFileDirectly(
                &session, &fileHandle, 0, 0x2345678a,
                2, &archivePath, sizeof(archivePath), 2, &contentPath, sizeof(contentPath), 1, 0);
            if (!nnResultIsFailure(static_cast<s32>(status))) {
                DirectFileAdapter *adapter = static_cast<DirectFileAdapter *>(
                    nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate(
                        &g_titleContentAdapterHeap));
                if (adapter != NULL) {
                    new (adapter) DirectFileAdapter(fileHandle);
                    status = FUN_00138f14(stream, adapter, first, second, third, fourth, fifth);
                    if (nnResultIsFailure(static_cast<s32>(status)))
                        adapter->vtable->destroy(adapter);
                } else {
                    svcCloseHandle(fileHandle);
                    status = outOfMemory;
                }
            }
            if (nnResultIsFailure(static_cast<s32>(status))) {
                stream->vtable->destroy(stream);
            } else {
                result = stream;
                status = 0;
            }
        }
    }
    if (!nnResultIsFailure(static_cast<s32>(status))) {
        *output = reinterpret_cast<u32>(result);
        return 0;
    }
    return status;
}
