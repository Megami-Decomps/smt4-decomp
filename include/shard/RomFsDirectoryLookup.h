#ifndef SHARD_ROMFSDIRECTORYLOOKUP_H
#define SHARD_ROMFSDIRECTORYLOOKUP_H

#include "common.h"
#include "shard/RomFsFileLookup.h"
#include <stddef.h>

struct RomFsStorage;
struct RomFsDirectoryLookupTable {
    u64 bucketsOffset;
    u32 bucketCount;
    RomFsStorage *bucketStorage;
    u64 entriesOffset;
    u32 entriesSize;
    RomFsStorage *entryStorage;
};
struct RomFsDirectoryInfo {
    u32 sibling;
    u32 firstDirectory;
    u32 firstFile;
};
struct RomFsDirectoryEntry {
    u32 parent;
    RomFsDirectoryInfo directory;
    u32 nextHash;
    u32 nameBytes;
};
typedef char RomFsDirectoryLookupLayoutCheck[
    sizeof(RomFsDirectoryLookupTable) == 0x20 &&
    offsetof(RomFsDirectoryLookupTable, bucketCount) == 8 &&
    offsetof(RomFsDirectoryLookupTable, bucketStorage) == 0xC &&
    offsetof(RomFsDirectoryLookupTable, entriesOffset) == 0x10 &&
    offsetof(RomFsDirectoryLookupTable, entryStorage) == 0x1C &&
    sizeof(RomFsDirectoryInfo) == 0xC && sizeof(RomFsDirectoryEntry) == 0x18 &&
    offsetof(RomFsDirectoryEntry, directory) == 4 &&
    offsetof(RomFsDirectoryEntry, nextHash) == 0x10 &&
    offsetof(RomFsDirectoryEntry, nameBytes) == 0x14 ? 1 : -1];

struct RomFsDirectoryKey {
    u32 parent;
    u32 nameLength;
    const u16 *name;
};
struct RomFsDirectoryTablesView {
    RomFsDirectoryLookupTable directories;
    u8 padding[8];
    RomFsFileLookupTable files;
};
typedef char RomFsDirectoryKeyLayoutCheck[
    sizeof(RomFsDirectoryKey) == 0xC && offsetof(RomFsDirectoryKey, nameLength) == 4 &&
    offsetof(RomFsDirectoryKey, name) == 8 &&
    offsetof(RomFsDirectoryTablesView, files) == 0x28 &&
    sizeof(RomFsDirectoryTablesView) == 0x48 ? 1 : -1];

#endif
