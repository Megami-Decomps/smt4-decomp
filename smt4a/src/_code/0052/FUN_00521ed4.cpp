/* NON_MATCHING: storage result tests, stack layout, and lookup exit branches differ. */
#include "shard/RomFsDirectoryLookup.h"
#include "nn/Result.h"

extern "C" {
s32 nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(RomFsStorage *, u64, void *, u32);
s32 FUN_00102c58(const u16 *, const u16 *, u32);
}

static __inline s32 readDirectoryEntry(RomFsDirectoryLookupTable *table, u32 position,
                                      RomFsDirectoryEntry *entry, u16 *name, u32 *nameBytes)
{
    u64 offset = table->entriesOffset + position;
    *nameBytes = 0;
    s32 result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
        table->entryStorage, offset, entry, sizeof(*entry));
    if (nnResultIsFailure(result))
        return result;
    *nameBytes = entry->nameBytes;
    if (*nameBytes != 0) {
        result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
            table->entryStorage, offset + sizeof(*entry), name, *nameBytes);
        if (nnResultIsFailure(result))
            return result;
    }
    return 0;
}

static __inline s32 findDirectoryEntry(RomFsDirectoryLookupTable *table, u32 *outPosition,
                                      RomFsDirectoryEntry *entry, const u32 *parent, u32 hash,
                                      const u16 *name, u32 nameBytes)
{
    u16 storedName[128];
    u32 bucketHead;
    s32 result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(
        table->bucketStorage, table->bucketsOffset + (hash % table->bucketCount) * 4, &bucketHead, 4);
    if (!nnResultIsSuccess(result))
        return result;
    for (u32 position = bucketHead; position != 0xFFFFFFFF; position = entry->nextHash) {
        u32 storedNameBytes;
        result = readDirectoryEntry(table, position, entry, storedName, &storedNameBytes);
        if (nnResultIsFailure(result))
            return result;
        if (*parent == entry->parent && nameBytes == storedNameBytes &&
            FUN_00102c58(name, storedName, nameBytes >> 1) == 0) {
            *outPosition = position;
            return 0;
        }
    }
    return static_cast<s32>(0xC880446F);
}

extern "C" {
// Find a directory by its parent and UTF-16 name in the selected hash bucket.
s32 FUN_00521ed4(RomFsDirectoryLookupTable *table, u32 *outPosition, RomFsDirectoryInfo *outInfo,
                 const u32 *parent, u32 hash, const u16 *name, u32 nameBytes)
{
    RomFsDirectoryEntry entry;
    u32 position = 0;
    s32 result = findDirectoryEntry(table, &position, &entry, parent, hash, name, nameBytes);
    if (nnResultIsSuccess(result)) {
        *outPosition = position;
        *outInfo = entry.directory;
        return 0;
    }
    return result;
}
}
