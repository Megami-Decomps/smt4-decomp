#ifndef SHARD_W6_W6MATCH7_ARCHIVEICON_H
#define SHARD_W6_W6MATCH7_ARCHIVEICON_H

#include "classes/WindowStatus.h"

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
WindowStatusResult archiveReadIcon(const ArchiveIconSource *source, void *output, u32 iconId);
}

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_004267bc(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_004267dc(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth, u32 seventh);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_004269b0(void *output, u8 flag, const void *input, s32 count);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_004283e0(void);

#ifdef __cplusplus
}
#endif

#endif
