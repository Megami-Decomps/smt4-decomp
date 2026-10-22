/* A set of data entries (each listing rows that name data-table files) searched by the FUN_003893xx / dataSetGetTableRecord family. */
#ifndef SHARD_W4_MATCH6_DATASET_H
#define SHARD_W4_MATCH6_DATASET_H

#include "common.h"

typedef struct DataFileRef {
    /* 0x00 */ u32 file;
    union {
        /* 0x04 */ u8 unk04[0xC];
        struct {
            u8 unk04[8];
            u8 requested; /* 0x0c */
            u8 unk0d[3];
        } status;
    };
} DataFileRef; /* 0x10 bytes */

typedef struct DataEntry {
    union {
        /* 0x00 */ u8 unk00[0x4C];
        struct {
            u8 unk00[0x24];
            char directory[0x20]; /* 0x24 */
            u8 unk44;
            u8 hasMetadata;       /* 0x45 */
            u8 unk46[2];
            void *metadataFile;   /* 0x48 */
        } source;
    };
    /* 0x4C */ DataFileRef *files;  /* one per row */
} DataEntry; /* 0x50 bytes */

typedef struct DataRow {
    union {
        /* 0x00 */ u8 type;         /* which kind of data table the row's file holds */
        /* 0x00 */ s8 opcode;
    };
    union {
        /* 0x01 */ u8 unk01[0x3F];
        /* 0x01 */ char name[0x3F];
    };
} DataRow; /* 0x40 bytes */

typedef struct DataSet {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 entryCount;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ DataEntry *entries;
} DataSet;

#endif
