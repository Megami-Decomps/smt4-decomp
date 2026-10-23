#ifndef SHARD_ROMFSFILELOOKUP_H
#define SHARD_ROMFSFILELOOKUP_H
#include "common.h"
#include <stddef.h>

struct RomFsStorage;
struct RomFsFileLookupTable {
    u64 bucketsOffset;
    u32 bucketCount;
    RomFsStorage *bucketStorage;
    u64 entriesOffset;
    u32 entriesSize;
    RomFsStorage *entryStorage;
};
// The on-disk 64-bit quantities are unaligned in the five-word file-info slice.
struct RomFsFileInfo {
    u32 sibling;
    u32 dataOffset[2];
    u32 dataSize[2];
};
struct RomFsFileEntry {
    u32 parent;
    RomFsFileInfo file;
    u32 nextHash;
    u32 nameBytes;
};
typedef char RomFsFileLookupOffsets[
    sizeof(RomFsFileLookupTable) == 0x20 &&
    offsetof(RomFsFileLookupTable, bucketCount) == 8 &&
    offsetof(RomFsFileLookupTable, bucketStorage) == 0xC &&
    offsetof(RomFsFileLookupTable, entriesOffset) == 0x10 &&
    offsetof(RomFsFileLookupTable, entryStorage) == 0x1C &&
    sizeof(RomFsFileInfo) == 0x14 && sizeof(RomFsFileEntry) == 0x20 &&
    offsetof(RomFsFileEntry, nextHash) == 0x18 &&
    offsetof(RomFsFileEntry, nameBytes) == 0x1C ? 1 : -1];
#endif
