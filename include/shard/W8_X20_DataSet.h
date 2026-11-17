#ifndef SHARD_W8_X20_DATASET_H
#define SHARD_W8_X20_DATASET_H

#include "common.h"
#include <stddef.h>

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

#endif
