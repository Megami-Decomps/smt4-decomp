/* AsdSDK/Source/Sys/File/AsdFileHashPack.cpp (Apocalypse): a packed archive of hashed file names.
 *
 * The pack file is loaded whole; its header says how many entries and name hashes follow, and the
 * module keeps three pointers into the loaded block (header tables) plus a file stream for
 * reading entries on demand. One pack is open at a time. */
#ifndef ASDSDK_SOURCE_SYS_FILE_ASDFILEHASHPACK_H
#define ASDSDK_SOURCE_SYS_FILE_ASDFILEHASHPACK_H

#include "AsdSDK/Source/Sys/File/AsdFile.h"

/* The header at the start of the loaded pack. */
typedef struct AsdHashPackHeader {
    union {
        /* 0x00 */ u8 unk00[0x12];
        struct {
            /* 0x00 */ char magic[4];
            u8 unk04[0xC];
            /* 0x10 */ u16 formatFlags; /* Named-path lookup requires zero. */
        } identification;
    };
    /* 0x12 */ u16 hashCount;      /* 4-byte entries at +0x18 */
    /* 0x14 */ u16 entryCount;     /* 16-byte entries after the hashes */
    /* 0x16 */ u8 unk16[2];
} AsdHashPackHeader;

struct AsdHashPackEntry {
    union {
        u32 hash;
        u32 nameOffset; /* Byte offset into the named-index string table. */
    };
    u32 offset;
    u32 storedSize;
    u32 uncompressedSize;
};
struct AsdHashPackBucket {
    u16 first; /* Index of the first file entry in this bucket. */
    u16 count; /* Number of consecutive entries to compare. */
};
struct AsdFileStream;
struct AsdFileStreamIoVtable {
    void *entries00[3];
    s32 (*seek)(AsdFileStream *, s64, s32); /* 0x0c */
    void *entries10[6];
    s32 (*read)(AsdFileStream *, u32 *, void *, u32); /* 0x28 */
};

/* A file stream (0x18 bytes, with a virtual destructor). */
typedef struct AsdFileStream {
    /* 0x00 */ union { void **vtable; AsdFileStreamIoVtable *io; };
    /* 0x04 */ u32 handle;          /* the open file's handle (bit 0 set: needs a sync before closing); 0 when closed */
    /* 0x08 */ u8 unk08[0x10];
} AsdFileStream;

typedef struct AsdFileHashPack {
    /* 0x00 */ AsdHashPackHeader *data;   /* the loaded pack */
    union {
        /* 0x04 */ u32 *hashes;          /* data +0x18 */
        /* 0x04 */ AsdHashPackBucket *buckets;
    };
    /* 0x08 */ void *entries;             /* after the hashes */
    /* 0x0c */ void *names;               /* after the entries */
    /* 0x10 */ AsdFileStream *stream;
    /* 0x14 */ u8 unk14[0x10];
} AsdFileHashPack;
typedef char AsdHashPackIoOffsets[
    sizeof(AsdHashPackEntry) == 0x10 &&
    offsetof(AsdFileStreamIoVtable, seek) == 0xc &&
    offsetof(AsdFileStreamIoVtable, read) == 0x28 &&
    sizeof(AsdFileStream) == 0x18 &&
    sizeof(AsdFileHashPack) == 0x24 ? 1 : -1];
typedef char AsdHashPackNameLookupOffsets[
    offsetof(AsdHashPackHeader, identification.magic) == 0 &&
    offsetof(AsdHashPackHeader, identification.formatFlags) == 0x10 &&
    sizeof(AsdHashPackHeader) == 0x18 &&
    sizeof(AsdHashPackBucket) == 4 &&
    offsetof(AsdHashPackBucket, first) == 0 &&
    offsetof(AsdHashPackBucket, count) == 2 &&
    offsetof(AsdHashPackEntry, nameOffset) == 0 &&
    offsetof(AsdFileHashPack, buckets) == 4 &&
    sizeof(AsdFileHashPack) == 0x24 ? 1 : -1];

#endif
