/* The add-on content (AOC) packages: each mounted package lists its files in a directory table
 * (packageEntryGetDirectory / packageEntryGetFileCount) and keeps one file slot per directory entry.
 * The same layout in both games. */
#ifndef ADDON_AOC_PACKAGE_H
#define ADDON_AOC_PACKAGE_H
#include "common.h"
#include <stddef.h>

/* One file slot of a package (0x10 bytes), parallel to the directory entries. */
struct AocPackageFile {
    /* 0x00 */ void *data;      /* the file's data tables (dataTableFileGetTable) */
    /* 0x04 */ void *linkedResource; /* kind-specific runtime data built from the file */
    /* 0x08 */ u32 result;      /* result of the last texture load from this file */
    /* 0x0C */ u8 available;    /* the file is loaded */
    /* 0x0D */ u8 completion;   /* texture load completion */
    /* 0x0E */ u8 unk0E[2];
};

/* One entry of a package's directory (0x40 bytes): what the file holds and its name. */
struct AocPackageDirectoryEntry {
    /* 0x00 */ s8 kind;         /* the file's record kind: a character ('#', '$', '0', '1') or a number (7, 8, 0x21, 0x22, 0x29...) */
    /* 0x01 */ char name[0x3B]; /* file name inside the package */
    /* 0x3C */ u32 value;       /* kind-specific word: the item id (kinds 7, 8), the game flag ('0', '1'), the name key */
};

/* A mounted package (0x50 bytes), an element of the content system's package array. */
struct AocPackage {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 id;              /* content index; its state bits are tested by objGetFlagBit0/1 */
    /* 0x0A */ u8 unk0A[0x16];
    /* 0x20 */ u32 archive;
    /* 0x24 */ char mountName[16];  /* the device name ("aocN:") */
    /* 0x34 */ u32 flags;
    /* 0x38 */ u32 directoryRequest[3];  /* the directory file's load request (aocQueueFileLoad) */
    /* 0x44 */ u8 unk44;
    /* 0x45 */ u8 directoryLoaded;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ void *directoryFile; /* the directory's data table file */
    /* 0x4C */ AocPackageFile *files;  /* one per directory entry */
};

typedef char AocPackageLayoutCheck[sizeof(AocPackage) == 0x50 && offsetof(AocPackage, id) == 8 &&
    offsetof(AocPackage, archive) == 0x20 && offsetof(AocPackage, mountName) == 0x24 &&
    offsetof(AocPackage, flags) == 0x34 && offsetof(AocPackage, directoryLoaded) == 0x45 &&
    offsetof(AocPackage, directoryFile) == 0x48 && offsetof(AocPackage, files) == 0x4C ? 1 : -1];
typedef char AocPackageFileLayoutCheck[sizeof(AocPackageFile) == 0x10 &&
    offsetof(AocPackageFile, linkedResource) == 4 && offsetof(AocPackageFile, result) == 8 &&
    offsetof(AocPackageFile, available) == 0xC &&
    offsetof(AocPackageFile, completion) == 0xD ? 1 : -1];
typedef char AocPackageDirectoryEntryLayoutCheck[sizeof(AocPackageDirectoryEntry) == 0x40 &&
    offsetof(AocPackageDirectoryEntry, name) == 1 && offsetof(AocPackageDirectoryEntry, value) == 0x3C ? 1 : -1];

/* Records a package adds to one data table (or table section): searched before the base table. */
struct AocRecordList {
    /* 0x00 */ s32 count;
    /* 0x04 */ void *records;
};

/* Records a package adds to one section of data table 8, with a third word. */
struct AocRecordTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ void *records;
    /* 0x08 */ u32 unk08;
};

extern "C" {
/* The package is mounted and its directory and file slots are loaded. */
u32 packageEntryIsLoaded(AocPackage *package);
/* The package's directory entries (NULL when the directory is not loaded). */
AocPackageDirectoryEntry *packageEntryGetDirectory(AocPackage *package);
/* The number of directory entries. */
u32 packageEntryGetFileCount(AocPackage *package);
}

#endif
