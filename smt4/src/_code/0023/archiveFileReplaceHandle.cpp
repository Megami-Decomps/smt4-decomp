/* NON_MATCHING: the u64 handle clears combine into STRD; result failure/module tests and normalized-error paths schedule differently from retail. */
#include "common.h"

struct ArchiveFile {
    /* 0x00 */ u64 handle;
    /* 0x08 */ u8 path[0x40];
};

struct ArchiveRequest {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 invalid;
    /* 0x05 */ u8 media;
};

struct ArchivePathWork {
    u32 storage[6];
};

extern "C" {
void FUN_0023a170(u64 handle);
void resultPairInitialize(u32 request, u32 result);
u32 FUN_003520dc(u32 *archive, ArchivePathWork *, u32 type, u64 id, u32 flags);
u32 handleRequestSubmit(ArchiveFile *, u32 type, u64 id, u32 zero, u32 flags,
                 u32 mode, void *path, u32 capacity, u32 unused);
u32 FUN_00352920(ArchiveFile *);

// Replace an archive-backed file handle, normalizing archive-not-found results.
void archiveFileReplaceHandle(u32 request, ArchiveFile *file, const ArchiveRequest *source)
{
    if (file->handle != 0) {
        FUN_0023a170(file->handle);
        file->handle = 0;
    }
    if (source->invalid) {
        resultPairInitialize(request, 0xe0e13883);
        return;
    }
    u64 archiveId = (static_cast<u64>(0x4008c) << 32) |
                    ((source->id & 0xff0fffff) << 8) | source->media;
    ArchivePathWork path;
    u32 archive;
    u32 result = FUN_003520dc(&archive, &path, 1, archiveId, 0);
    if (result == 0xd8a083fa) {
        resultPairInitialize(request, 0xd881388a);
        return;
    }
    if (result & 0x80000000) {
        resultPairInitialize(request, result);
        return;
    }
    result = handleRequestSubmit(file, 1, archiveId, 0, 1, 1, file->path, 0x40, 0);
    if (((result >> 10) & 0xff) == 17 &&
        (result & 0x3ff) >= 100 && (result & 0x3ff) < 180) {
        file->handle = 0;
        resultPairInitialize(request, 0xd881388a);
        return;
    }
    if (result & 0x80000000) {
        resultPairInitialize(request, result);
        return;
    }
    result = FUN_00352920(file);
    if (!(result & 0x80000000)) {
        resultPairInitialize(request, 0);
        return;
    }
    FUN_0023a170(file->handle);
    file->handle = 0;
    resultPairInitialize(request, result);
}
}
