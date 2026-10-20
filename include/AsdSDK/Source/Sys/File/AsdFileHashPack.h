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
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u16 hashCount;      /* 4-byte entries at +0x18 */
    /* 0x14 */ u16 entryCount;     /* 16-byte entries after the hashes */
    /* 0x16 */ u8 unk16[2];
} AsdHashPackHeader;

/* A file stream (0x18 bytes, with a virtual destructor). */
typedef struct AsdFileStream {
    /* 0x00 */ void **vtable;
    /* 0x04 */ u32 handle;          /* the open file's handle (bit 0 set: needs a sync before closing); 0 when closed */
    /* 0x08 */ u8 unk08[0x10];
} AsdFileStream;

typedef struct AsdFileHashPack {
    /* 0x00 */ AsdHashPackHeader *data;   /* the loaded pack */
    /* 0x04 */ u32 *hashes;               /* data + 0x18 */
    /* 0x08 */ void *entries;             /* after the hashes */
    /* 0x0c */ void *names;               /* after the entries */
    /* 0x10 */ AsdFileStream *stream;
    /* 0x14 */ u8 unk14[0x10];
} AsdFileHashPack;

#endif
