/* NON_MATCHING: retail keeps one result register and one shared cleanup tail (the file wrapper's destructor runs once) and a 64-bit running read offset; ours duplicates the tail per return and indexes the offset (157 rows against 154). The module/description range test is also folded differently (cmp #17408, unsigned). */
#include "shard/W6_W6Match7_ArchiveIcon.h"
#include "nn/Result.h"

/* The archive's content header: 7 default pairs, then a count of extra pairs stored after the header. */
struct ArchiveContentHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 pair[7][2];      /* (value, key) */
    /* 0x30 */ u32 extraCount;
};

/* The loader state the chosen pair is written to (observed fields); the archive source leads it. */
struct ArchiveContentTarget {
    /* 0x00 */ ArchiveIconSource source;
    /* 0x08 */ u8 unk08[0x40];
    /* 0x48 */ u16 value;
    /* 0x4A */ u16 key;
};

extern "C" {
s32 stringFormatBounded(char *output, u32 size, const char *format, ...);
u32 multibyteToUtf16(u16 *output, const char *input, u32 count);
s32 wstrlenU16(const u16 *text);
s32 archiveTryOpenFile(void **file, u32 archiveFirst, u32 archiveSecond, const ArchiveIconPath *path, u32 mode);
s32 nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile(u32 *readSize, void *file, s64 offset, void *output, u32 size);
void vcallSlot12IfValid(void *object);
s32 FUN_00430f98(void);
s32 FUN_0043126c(void);
}

inline ArchiveIconFile::ArchiveIconFile() : object(NULL)
{
}

inline ArchiveIconFile::~ArchiveIconFile()
{
    if (object != NULL) {
        vcallSlot12IfValid(object);
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

/* Opens the archive's content header and picks the pair for the current language/region: first the pairs
 * stored after the header (matching both key and value), then the 7 defaults (matching the value only).
 * Returns an nn::Result; the chosen pair is written to the target. */
extern "C" s32 FUN_00427360(ArchiveContentTarget *target)
{
    char path[48];
    u16 widePath[48];
    ArchiveContentHeader header;
    u32 readSize;
    s32 status;
    s32 key;
    s32 value;
    u32 i;

    stringFormatBounded(path, sizeof(path), "/MetaDataContentHeader.bin");
    multibyteToUtf16(widePath, path, 48);
    ArchiveIconFile file;
    status = file.tryOpen(target->source, ArchiveIconPath(widePath));
    if (nnResultModule(status) == 17 && nnResultDescription(status) >= 100 && nnResultDescription(status) <= 179) {
        return static_cast<s32>(0xd901388b);
    }
    if (nnResultIsFailure(status)) {
        return status;
    }
    status = nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile(&readSize, file.object, 0, &header, sizeof(header));
    if (nnResultIsFailure(status)) {
        return status;
    }
    key = FUN_00430f98();
    value = FUN_0043126c();
    for (i = 0; i < header.extraCount; i++) {
        s16 pair[2];

        status = nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile(&readSize, file.object, sizeof(header) + i * 4, pair, 4);
        if (nnResultIsFailure(status)) {
            return status;
        }
        if (pair[1] == key && pair[0] == value) {
            target->key = pair[1];
            target->value = pair[0];
            return 0;
        }
    }
    for (i = 0; i < 7; i++) {
        if (header.pair[i][0] == value) {
            target->key = header.pair[i][1];
            target->value = header.pair[i][0];
            return 0;
        }
    }
    return static_cast<s32>(0xd901388b);
}
