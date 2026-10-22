#ifndef SHARD_W8X15_PACKAGELIST_H
#define SHARD_W8X15_PACKAGELIST_H
#include "common.h"

/* One table file reference in a loaded package. */
struct PackageFileRef {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ u8 unk04[0xc];
};

/* One 0x40-byte record of a package's record table (FUN_002ac0f8). */
struct PackageRecord {
    /* 0x00 */ s8 kind;
    /* 0x01 */ u8 unk01[0x3b];
    /* 0x3c */ const char *name;
};
typedef char PackageRecordSizeCheck[sizeof(PackageRecord) == 0x40 ? 1 : -1];

/* A loaded package: a list of named files. */
struct PackageEntry {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ PackageFileRef *files;
};

struct PackageList {
    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 count;
    /* 0x314 */ u8 unk314[4];
    /* 0x318 */ PackageEntry *entries;
};

extern "C" {
s32 FUN_002ac12c(PackageEntry *entry);
char (*FUN_002ac0f8(PackageEntry *entry))[0x40];
u32 FUN_002ac0c4(PackageEntry *entry);
void *dataTableFileGetTable(u32 fileId, u32 flags);
s32 dataTableGetCount(void *table);
u8 *dataTableGetEntries(void *table);
}

#endif
