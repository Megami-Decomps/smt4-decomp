#include "shard/RomFsParentLookup.h"

extern "C" {
u32 FUN_00522040(RomFsArchive *archive, u32 *directory, u8 *scratch, u32 first, u32 second, u32 flags);
u32 n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF(
    RomFsArchive *archive, u32 id, u32 kind, RomFsParentLookup *lookup);
u32 nn_dbm_RomPathTool_GetParentDirectoryName(RomFsPathView *output, const RomFsPathView *path, u32 limit);

// Resolve the parent directory and path before performing the archive lookup.
u32 FUN_00522278(RomFsArchive *archive, u32 id, RomFsParentLookup *lookup, u32 kind,
                  u32 flags, RomFsPathView path, u32 limit)
{
    u32 directory;
    u8 scratch[12];
    u32 result = FUN_00522040(archive, &directory, scratch, 0, 0, flags);
    if (static_cast<s32>(result & 0x80000000u) >= 0) {
        lookup->directory = directory;
        result = nn_dbm_RomPathTool_GetParentDirectoryName(&lookup->path, &path, limit);
        if (static_cast<s32>(result & 0x80000000u) >= 0)
            result = n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF(
                archive, id, kind, lookup);
    }
    if (static_cast<s32>(result & 0x80000000u) >= 0)
        result = 0;
    return result;
}
}
