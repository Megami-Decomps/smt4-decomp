#ifndef SHARD_W6_W6MATCH7_ARCHIVEICON_H
#define SHARD_W6_W6MATCH7_ARCHIVEICON_H

#include "shard/W5_W5Match2_ValidationPair.h"

struct ArchiveIconSource {
    u32 first;
    u32 second;
};

struct ArchiveIconPath {
    u32 type;
    const u16 *data;
    u32 byteSize;

    ArchiveIconPath(const u16 *text);
};

struct ArchiveIconFile {
    void *object;

    ArchiveIconFile();
    ~ArchiveIconFile();
    s32 tryOpen(ArchiveIconSource source, const ArchiveIconPath &path);
};

extern "C" {
ValidationPair archiveReadIcon(const ArchiveIconSource *source, void *output, u32 iconId);
ValidationPair archiveReadIcon(const ArchiveIconSource *source, void *output, u32 iconId);
}

#endif
