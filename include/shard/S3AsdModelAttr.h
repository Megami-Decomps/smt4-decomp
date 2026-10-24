/* AsdSDK model attribute table: a model object (the part this code uses) whose loaded file holds
 * "ATBC" containers of "EPLSIGN" entries. The model keeps one record per matching entry sub-range. */
#ifndef SHARD_S3ASDMODELATTR_H
#define SHARD_S3ASDMODELATTR_H

#include "common.h"

/* "ATBC" container: `count` blocks, the first at `firstOffset`. */
typedef struct AsdAtbcHeader {
    /* 0x00 */ char magic[4];
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 count;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 firstOffset;
} AsdAtbcHeader;

/* Header of an "EPLSIGN" block: its `size` leads to the next block, its entry follows the header. */
typedef struct AsdEplBlockHeader {
    /* 0x00 */ char magic[8];
    /* 0x08 */ s32 size;
    /* 0x0C */ u8 unk0C[4];
} AsdEplBlockHeader;

/* What a record's handle is built from. */
typedef struct AsdEplTail {
    u8 unk00[4];
} AsdEplTail;

/* The entry covering ids lo..hi. */
typedef struct AsdEplEntry {
    /* 0x00 */ u16 lo;
    /* 0x02 */ u16 hi;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 flags;         /* bit 0: entry not used */
    /* 0x10 */ s32 key;           /* matched against the caller's key */
    /* 0x14 */ AsdEplTail tail;
} AsdEplEntry;

/* The queued file request the model is loaded from. */
typedef struct AsdModelFile {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 *data;          /* the loaded file: an "ATBC" container */
} AsdModelFile;

/* One record built per entry id (0xC bytes). */
typedef struct AsdModelAttrRecord {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 id;
    /* 0x08 */ void *handle;      /* resource list, released with resourceListDestroy */
} AsdModelAttrRecord;

/* Number of containers of the file to scan. */
typedef struct AsdModelAttrContainers {
    s32 count;
} AsdModelAttrContainers;

/* The record array and its length. */
typedef struct AsdModelAttrRecords {
    /* 0x00 */ s32 count;
    /* 0x04 */ AsdModelAttrRecord *items;
} AsdModelAttrRecords;

typedef struct AsdModelAttrModel {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ AsdModelFile *file;
    /* 0x008 */ u8 unk008[0x8C];
    /* 0x094 */ AsdModelAttrContainers containers;
    /* 0x098 */ u8 unk098[8];
    /* 0x0A0 */ AsdModelAttrRecords records;
} AsdModelAttrModel;

/* The container count followed by the record array. */
typedef struct AsdModelAttrSet {
    /* 0x00 */ AsdModelAttrContainers containers;
    /* 0x04 */ AsdModelAttrRecords records;
} AsdModelAttrSet;

/* The model variant whose records follow the container count directly. */
typedef struct AsdModelAttrModelB {
    /* 0x000 */ u8 unk000[0x94];
    /* 0x094 */ AsdModelAttrSet attr;
} AsdModelAttrModelB;

#endif
