/* NON_MATCHING: UTF-16 hash register allocation and result classification branches differ. */
#include "shard/RomFsDirectoryLookup.h"
#include "nn/Result.h"

static __inline u32 hashDirectoryKey(const RomFsDirectoryKey *key)
{
    u32 hash = key->parent ^ 123456789;
    const u16 *end = key->name + key->nameLength;
    for (const u16 *character = key->name; character != end; ++character)
        hash = *character ^ ((hash >> 5) | (hash << 27));
    return hash;
}

extern "C" {
s32 FUN_00521ed4(RomFsDirectoryLookupTable *, u32 *, RomFsDirectoryInfo *, const u32 *, u32, const u16 *, u32);
s32 FUN_00522100(RomFsFileLookupTable *, u32 *, RomFsFileInfo *, const u32 *, u32, const u16 *, u32);

// Resolve a directory key, distinguishing a missing path from an existing non-directory file.
s32 n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF(
    RomFsDirectoryTablesView *table, u32 *outPosition, RomFsDirectoryInfo *outInfo, const RomFsDirectoryKey *key)
{
    s32 result = FUN_00521ed4(&table->directories, outPosition, outInfo, &key->parent,
                            hashDirectoryKey(key), key->name, key->nameLength * 2);
    if (nnResultIsSuccess(result) || nnResultModule(result) != 17 || nnResultDescription(result) != 0x6F)
        return result;

    u32 filePosition;
    RomFsFileInfo fileInfo;
    result = FUN_00522100(&table->files, &filePosition, &fileInfo, &key->parent,
                         hashDirectoryKey(key), key->name, key->nameLength * 2);
    if (nnResultIsSuccess(result))
        return static_cast<s32>(0xE0C04702);
    if (nnResultModule(result) == 17 && nnResultDescription(result) == 0x6F)
        return static_cast<s32>(0xC8804471);
    return result;
}
}
