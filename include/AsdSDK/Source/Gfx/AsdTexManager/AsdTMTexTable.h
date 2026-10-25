/* AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.c: the texture manager's table of texture files.
 *
 * A list file names the texture files; the table keeps one entry per name and loads the file
 * (a TMX container) when it is first used. */
#ifndef ASDSDK_SOURCE_GFX_ASDTEXMANAGER_ASDTMTEXTABLE_H
#define ASDSDK_SOURCE_GFX_ASDTEXMANAGER_ASDTMTEXTABLE_H

#include "common.h"

/* First 0x104 bytes of the list file, kept as the table header. */
typedef struct TexTableHeader {
    /* 0x00 */ char dirPrefix[0x80];  /* directory of the TMX files; backslashes become '/' */
    /* 0x80 */ char dirPrefix2[0x80]; /* second directory, used for the loaded file's path */
    /* 0x100 */ s32 count;            /* number of entries */
    /* 0x104 */ u8 entries[1];        /* count records of 0x60 bytes, the first 16 bytes are the name */
} TexTableHeader;

/* A loaded TMX container: the nodes built from it plus the file image. */
typedef struct TexFile {
    /* 0x00 */ struct TexNode *nodes; /* one 0x20-byte node per set in the file */
    /* 0x04 */ u8 *image;             /* the file contents */
    /* 0x08 */ u8 *image2;            /* same pointer */
    /* 0x0C */ char path[0x20];       /* path the file was loaded from */
} TexFile;

typedef struct TexNode {
    /* 0x00 */ TexFile *file;
    /* 0x04 */ u32 *set;              /* set descriptor inside the file image */
    /* 0x08 */ union {
        u8 unk08[0x18];
        struct {
            struct AsdTexture *texture; // 0x08
            void *data; // 0x0c
            u32 state; // 0x10
            u8 unk14[8];
            u32 count; // 0x1c
        } loaded;
    };
} TexNode;

/* One TexTable slot (0x18 bytes). */
typedef struct TexTableEntry {
    /* 0x00 */ TexFile *file;         /* the loaded TMX file, NULL until loaded */
    /* 0x04 */ struct TexSprList *sprites; /* sprite list loaded from the sprite file */
    /* 0x08 */ char name[0x10];
} TexTableEntry;

/* Header of a TMX file image. Offsets are relative to the start of the image until the
 * loader turns them into pointers. */
typedef struct TmxHeader {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 texOffset;         /* texture records, 0x50 bytes each */
    /* 0x18 */ u32 unk18;
    /* 0x1C */ s32 groupOffset;       /* groups, 0x14 bytes each */
    /* 0x20 */ s32 groupCount;
    /* 0x24 */ s32 setOffset;         /* sets, 0x10 bytes each */
    /* 0x28 */ s32 setCount;
    /* 0x2C */ s32 dataOffset;        /* base of set payloads */
} TmxHeader;

/* Sprite list loaded from a sprite file: a chain of 0x14-byte sprites. */
typedef struct TexSprite {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 frameCount;
    /* 0x08 */ u8 flag;
    /* 0x0C */ u8 *frames;            /* frameCount records of 0x14 bytes */
    /* 0x10 */ struct TexSprite *next;
} TexSprite;

/* Header of a sprite file (0x40 bytes); the sprite records follow it. */
typedef struct SprFileHeader {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 spriteCount;
    /* 0x24 */ u8 unk24[0x1C];
} SprFileHeader;

typedef struct TexSprList {
    /* 0x00 */ SprFileHeader *header; /* copy of the file's 0x40-byte header */
    /* 0x04 */ TexSprite *first;
} TexSprList;

/* The table itself: entries and the list file's header, adjacent in .bss. */
typedef struct TexTable {
    /* 0x00 */ TexTableEntry *entries;
    /* 0x04 */ TexTableHeader *header;
} TexTable;

#ifdef __cplusplus
extern "C" {
#endif
/* Table entry helpers (smt4: CallFileA/B, smt4a: CallFileC/FreeEntry; NodeIsLoaded in both). */
struct TexNode *asdTMTexTableCallFileA(s32 idx, s32 arg);
struct TexNode *asdTMTexTableCallFileB(s32 idx, s32 arg);
struct TexNode *asdTMTexTableCallFileC(s32 idx, u32 arg);
void asdTMTexTableFreeEntry(s32 idx);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
#ifdef __cplusplus
}
#endif

#endif
