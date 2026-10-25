#ifndef SHARD_W6_W6MATCH3_WAVEARCHIVEREADER_H
#define SHARD_W6_W6MATCH3_WAVEARCHIVEREADER_H

#include "common.h"

struct WaveArchiveFileBlock {
    u32 signature;
    u32 byteSize;
    u8 data[1];  // variable-length FILE block body
};

struct WaveArchiveSizedReference {
    u16 kind;
    u16 padding;
    u32 offset;  // relative to the FILE block body
    u32 size;
};

struct WaveArchiveIndex {
    u32 count;
    WaveArchiveSizedReference entries[1];
};

struct WaveArchiveReader {
    const void* fileHeader;          // 0x00
    const WaveArchiveIndex* index;   // 0x04
    const u8* const* waveFiles;      // 0x08: individual files, or NULL for an embedded archive
    u8 initialized;                 // 0x0c
    u8 padding[3];
};

extern "C" {
const u8* FUN_002a7a3c(const WaveArchiveReader* reader, u32 index);
const u8* FUN_001a8d40(const WaveArchiveReader* reader, u32 index);
}

#ifdef __cplusplus
extern "C" {
#endif

void FUN_002a60cc(u32 owner, u32 group, u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 itemGetFlagBit1(u32 index);

#ifdef __cplusplus
}
#endif

#endif
