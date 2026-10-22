#ifndef SHARD_W8_X20_DATASET_H
#define SHARD_W8_X20_DATASET_H

#include "common.h"
#include <stddef.h>

/* A record of a loaded archive's index; `kind` says what the file holds. */
typedef struct DataArchiveRecord {
    /* 0x00 */ u8 kind; /* '%' and '(' = data table files */
    /* 0x01 */ u8 unk01[0x3F];
} DataArchiveRecord;

/* A packed file: a count and the offset of its 0x10-byte entry table. */
typedef struct DataFileEntry {
    /* 0x0 */ u8 unk00[0x4];
    /* 0x4 */ u32 size;
    /* 0x8 */ u32 offset;   /* from the file start */
    /* 0xC */ u8 unk0C[0x4];
} DataFileEntry;

typedef struct DataFileHeader {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
    /* 0x14 */ u32 entryOffset;
} DataFileHeader;

typedef struct DataArchiveFile {
    union {
        /* 0x0 */ u32 fileId;
        /* 0x0 */ DataFileHeader *header;
    };
    /* 0x4 */ u8 unk04[0x8];
    /* 0xC */ u8 loaded;
    /* 0xD */ u8 unk0D[0x3];
} DataArchiveFile;

typedef struct DataArchive {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ DataArchiveFile *files;
} DataArchive;

/* The archives a lookup walks (Shin Megami Tensei IV). */
typedef struct DataArchiveSet {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 archiveCount;
    /* 0x314 */ u8 unk314[0x4];
    /* 0x318 */ DataArchive *archives;
} DataArchiveSet;

typedef char DataArchiveSetOffsets[sizeof(DataArchive) == 0x50 && sizeof(DataArchiveRecord) == 0x40 &&
    offsetof(DataArchiveSet, archives) == 0x318 ? 1 : -1];

#endif
