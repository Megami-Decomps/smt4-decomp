/* NON_MATCHING: module/range folding, result capture across file cleanup, stack slots and saved registers differ. */
#include "shard/W6_W6Match7_ArchiveIcon.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"

extern "C" {
s32 stringFormatBounded(char *output, u32 size, const char *format, ...);
u32 multibyteToUtf16(u16 *output, const char *input, u32 count);
s32 wstrlenU16(const u16 *text);
s32 archiveTryOpenFile(void **file, u32 archiveFirst, u32 archiveSecond, const ArchiveIconPath *path, u32 mode);
s32 nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile(u32 *readSize, void *file, s64 offset, void *output, u32 size);
}

inline ArchiveIconFile::ArchiveIconFile() : object(NULL)
{
}

inline ArchiveIconFile::~ArchiveIconFile()
{
    if (object != NULL) {
        vcallSlot12IfValid((u32)(object));
    }
}

inline ArchiveIconPath::ArchiveIconPath(const u16 *text)
    : type(4), data(text), byteSize((wstrlenU16(text) + 1) * sizeof(u16))
{
}

inline s32 ArchiveIconFile::tryOpen(ArchiveIconSource source, const ArchiveIconPath &path)
{
    return archiveTryOpenFile(&object, source.first, source.second, &path, 1);
}


extern "C" WindowStatusResult archiveReadIcon(const ArchiveIconSource *source, void *output, u32 iconId)
{
    if ((source->first | source->second) == 0) {
        return WindowStatusResult(0xe0a13882);
    }
    char path[48];
    u16 widePath[48];
    stringFormatBounded(path, sizeof(path), "/icons/%u.icn", iconId);
    multibyteToUtf16(widePath, path, 48);
    ArchiveIconFile file;
    s32 status = file.tryOpen(*source, ArchiveIconPath(widePath));
    if (nnResultModule(status) == 17 &&
        nnResultDescription(status) >= 100 && nnResultDescription(status) <= 179) {
        return WindowStatusResult(0xd881388c);
    }
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(static_cast<u32>(status));
    }
    u32 readSize;
    status = nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile(&readSize, file.object, 0, output, 0x1200);
    if (nnResultIsFailure(status)) {
        return WindowStatusResult(static_cast<u32>(status));
    }
    return WindowStatusResult(0);
}
