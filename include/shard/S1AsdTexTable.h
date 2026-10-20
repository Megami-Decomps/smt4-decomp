/* The texture-table entry (an asdTMTex file request) the asdTMTexTable load functions work on. */
#ifndef SHARD_S1ASDTEXTABLE_H
#define SHARD_S1ASDTEXTABLE_H

#include "common.h"

/* The table's file description. */
typedef struct TexTableFile {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ char directory[1]; /* directory prefix of the files */
} TexTableFile;

/* A texture node: its file name and kind. */
typedef struct TexTableNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ const char *name;   /* "-N" refers to the Nth shared directory */
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 compressed;      /* selects the ".cmp" extension over ".stex" */
} TexTableNode;

/* A table slot: 32 bytes of which the directory node pointer is the first word. */
typedef struct TexTableSlot {
    /* 0x00 */ TexTableNode *node;
    /* 0x04 */ u8 unk04[0x1C];
} TexTableSlot;

enum {
    TEXENTRY_LOADING = 0x1,     /* a load is in flight */
    TEXENTRY_MODE_20 = 0x20,
    TEXENTRY_MODE_40 = 0x40,
    TEXENTRY_RETRY = 0x10000
};

/* A table entry. The slots used by "-N" names lie below +0x604, counted downwards. */
typedef struct TexTableEntry {
    /* 0x00 */ TexTableFile *file;
    /* 0x04 */ TexTableNode *node;
    /* 0x08 */ u32 state;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 flags;
    /* 0x14 */ u8 unk14[0x5F0];
    /* 0x604 */ TexTableSlot slots[1];
} TexTableEntry;

#endif
