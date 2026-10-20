/* The bible screen's object: load-state flags, the buffers its files are loaded into and its page list. */
#ifndef SHARD_W4_MATCH6_BIBLESCREEN_H
#define SHARD_W4_MATCH6_BIBLESCREEN_H

#include "common.h"

/* The two files the bible screen loads; passed by value to the script constructor. */
typedef struct BibleFiles {
    /* 0x0 */ void *bibleBf;   /* buffer of bible/bible.bf */
    /* 0x4 */ void *bibleMbm;  /* buffer of bible/bible.mbm */
} BibleFiles;

typedef struct BibleScript {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 started;
} BibleScript;

typedef struct BiblePage {
    /* 0x00 */ s32 scroll;
    /* 0x04 */ u8 unk04[0x1C];
} BiblePage; /* 0x20 bytes */

typedef struct BibleScreen {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 stateArg;
    /* 0x01C */ u8 helpCreated;       /* button help was created here */
    /* 0x01D */ u8 sprites0dMissing;  /* texture table entry 0x0d was not loaded */
    /* 0x01E */ u8 sprites1dLoaded;   /* this screen loaded texture table entry 0x1d */
    /* 0x01F */ u8 unk01f;
    /* 0x020 */ u8 cursor[0x578];
    /* 0x598 */ BibleFiles files;
    /* 0x5A0 */ BibleScript *script;  /* script process, destroyed on close */
    /* 0x5A4 */ u8 unk5a4[0x10];
    /* 0x5B4 */ BiblePage page[1];    /* indexed by the cursor's selection */
} BibleScreen;

#endif
