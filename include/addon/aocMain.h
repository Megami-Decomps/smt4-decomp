/* addon/aocMain.c and the add-on content (AOC) system around it. Only the fields the readable
 * code touches are named. */
#ifndef ADDON_AOCMAIN_H
#define ADDON_AOCMAIN_H

#include "common.h"

/* Objects embedded in AocMain; known only through the functions that take them. */
typedef struct AocObjA { u8 unk[0x10]; } AocObjA;
typedef struct AocObjB { u8 unk[0x10]; } AocObjB;
typedef struct AocObjC { u8 unk[1]; } AocObjC;

/* The AOC system's main block (Shin Megami Tensei IV layout). */
typedef struct AocMain {
    union {
        /* 0x000 */ u8 unk000[0x88];
        struct {
            /* 0x000 */ u8 unk000BeforeQuery[0x80];
            /* 0x080 */ u32 queryResult;
        } operation;
    };
    /* 0x088 */ AocObjA objA;
    /* 0x098 */ AocObjB objB;
    /* 0x0A8 */ AocObjC objC;
    /* 0x0A9 */ u8 unk0A9[0x6AB];
    /* 0x754 */ u32 flags;
} AocMain;

/* The display block that AOC drives (Shin Megami Tensei IV layout). */
typedef struct AocDisplay {
    /* 0x0000 */ u8 unk0000[0x450C];
    /* 0x450C */ u8 unk450C;
} AocDisplay;

/* One entry of the content table: an id and 0x50 bytes of data. */
typedef struct AocEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x50];
} AocEntry;

/* The content system's block (Shin Megami Tensei IV layout). */
typedef struct AocSystem {
    /* 0x000 */ union {
        u8 unk000[0x38C];
        struct {
            u8 unk000[0x310];
            s32 count; /* 0x310 */
            u32 unk314;
            struct AocPackage *entries; /* 0x318 */
            u8 unk31c[0x70];
        } packages;
    };
    /* 0x38C */ u32 entryCount;
    /* 0x390 */ AocEntry *entries;
    /* 0x394 */ u32 questCount;
    /* 0x398 */ struct QuestRecord *quests;
} AocSystem;

/* A step of the AOC boot, as the step function sees its owner. */
typedef struct AocStep {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 state;
    /* 0x2C */ s32 substate;
} AocStep;

/* A pending request: two ids and an enabled flag. */
typedef struct AocRequest {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 idA;
    /* 0x0C */ u32 idB;
    /* 0x10 */ s32 enabled;
} AocRequest;

/* One entry of the content table in Apocalypse: an id and 0x40 bytes of data. */
typedef struct AocEntryA {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x40];
} AocEntryA;

/* The content system's block (Apocalypse layout). */
typedef struct AocSystemA {
    /* 0x000 */ u8 unk000[0x38C];
    /* 0x38C */ u32 entryCount;
    /* 0x390 */ AocEntryA *entries;
} AocSystemA;

#endif
