/* NON_MATCHING: lookup result control-flow factoring, frame layout and hash/metadata addressing registers differ. */
#include "shard/RomFsFileLookup.h"
#include "nn/Result.h"

extern "C" {
s32 nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
    RomFsStorage *storage, u64 offset, void *destination, u32 size);
s32 FUN_00102c58(const u16 *left, const u16 *right, u32 count);
}

static inline s32 romFsReadNamedFileEntry(RomFsFileLookupTable *table, u64 offset,
                                         RomFsFileEntry *entry, u16 *name, u32 *nameBytes)
{
    s32 result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
        table->entryStorage, offset, entry, sizeof(*entry));
    *nameBytes = 0;
    if (!nnResultIsFailure(result)) {
        *nameBytes = entry->nameBytes;
        if (*nameBytes == 0 || !nnResultIsFailure(result =
            nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
                table->entryStorage, offset + sizeof(*entry), name, *nameBytes)))
            return 0;
    }
    return result;
}

// Search a file-name hash chain for a UTF-16 name belonging to the requested directory.
extern "C" s32 FUN_00522100(RomFsFileLookupTable *table, u32 *entryOffset,
                            RomFsFileInfo *info, const u32 *parent,
                            u32 hash, const u16 *name, u32 nameBytes)
{
    u32 resolvedOffset = 0;
    u16 storedName[128];
    RomFsFileEntry entry;
    u32 offset;
    s32 result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
        table->bucketStorage, table->bucketsOffset + (hash % table->bucketCount) * 4,
        &offset, sizeof(offset));
    if (result >= 0) {
        while (offset != (u32)-1) {
            u32 storedBytes;
            result = romFsReadNamedFileEntry(table, table->entriesOffset + offset,
                                            &entry, storedName, &storedBytes);
            if (nnResultIsFailure(result))
                break;
            if (*parent == entry.parent && nameBytes == storedBytes &&
                FUN_00102c58(name, storedName, nameBytes >> 1) == 0) {
                resolvedOffset = offset;
                result = 0;
                break;
            }
            offset = entry.nextHash;
        }
        if (offset == (u32)-1)
            result = (s32)0xC880446F;
    }
    if (result >= 0) {
        *entryOffset = resolvedOffset;
        *info = entry.file;
        result = 0;
    }
    return result;
}
