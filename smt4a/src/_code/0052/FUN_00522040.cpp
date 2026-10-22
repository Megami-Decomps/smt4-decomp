/* NON_MATCHING: 64-bit offset temporaries and success-normalization branches use different registers and layout. */
#include "common.h"

struct RomDirectoryReader { u8 unk00[0x10]; u64 base; u32 unk18; void *storage; };
struct RomDirectoryChildren { u32 sibling, directory, file; };
struct RomDirectoryRecord { u32 parent; RomDirectoryChildren children; u32 nextHash, nameBytes; };
extern "C" {
u32 nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(void *storage, u64 offset, void *output, u32 size);

// Read a RomFS directory record and optional name, publishing its links only after successful reads.
u32 FUN_00522040(const RomDirectoryReader *reader, u32 *parent, RomDirectoryChildren *children, void *name, u32 *nameBytes, u32 offset)
{
    u64 position = reader->base + offset;
    RomDirectoryRecord record;
    u32 result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(reader->storage, position, &record, sizeof(record));
    if ((s32)result >= 0) {
        if (name && nameBytes) {
            *nameBytes = record.nameBytes;
            if (record.nameBytes)
                result = nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes(reader->storage, position + sizeof(record), name, record.nameBytes);
        }
        if ((s32)result >= 0)
            result = 0;
    }
    if ((s32)result >= 0) {
        *parent = record.parent;
        *children = record.children;
        return 0;
    }
    return result;
}
}
