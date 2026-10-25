/* addon/aocMain.c and the add-on content (AOC) system around it. Only the fields the readable
 * code touches are named. */
#ifndef ADDON_AOCMAIN_H
#define ADDON_AOCMAIN_H

#include "common.h"
#include <stddef.h>

/* Objects embedded in AocMain; known only through the functions that take them. */
typedef struct AocObjA { /* 0x00 */ u8 unk[0x10]; } AocObjA;
typedef struct AocObjB { /* 0x00 */ u8 unk[0x10]; } AocObjB;
typedef struct AocObjC { /* 0x00 */ u8 unk[1]; } AocObjC;

#include "shard/W6_W6Match5_QueuedRequest.h"

struct QueuedRequestHandle;

/* The AOC system's main block (Shin Megami Tensei IV layout). */
typedef struct AocMain {
    /* Queues `request` unless one is already active (_ZN7AocMain12queueRequestE17RequestParametersji). */
    void queueRequest(RequestParameters request, u32 argument, s32 mode);
    /* Submits `request` for the token `handle` unless one is pending; returns whether the token is valid
     * (_ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle). */
    u32 submitTokenRequest(RequestParameters request, QueuedRequestHandle handle);

    union {
        /* 0x000 */ u8 unk000[0x88];
        struct {
            /* 0x000 */ u8 unk000BeforeQuery[0x80];
            /* 0x080 */ u32 queryResult;
        } operation;
    };
    /* 0x088 */ AocObjA objA;
    /* 0x098 */ AocObjB objB;
    /* 0x0A8 */ AocObjC scriptHolder;
    /* 0x0A9 */ u8 unk0A9[0x4FF];
    /* 0x5A8 */ void *contentTable; /* owner of the 0x30-byte content entries */
    /* 0x5AC */ u8 unk5AC[0x1A8];
    /* 0x754 */ u32 flags;
} AocMain;

/* The display block that AOC drives (Shin Megami Tensei IV layout). */
typedef struct AocDisplay {
    /* 0x0000 */ u8 unk0000[0x450C];
    /* 0x450C */ u8 operationActive;
} AocDisplay;

/* The AOC job's work block: the request ids it matches, the operation flag and a wait handle. */
typedef struct AocJobWork {
    /* 0x0000 */ u32 requestId;
    /* 0x0004 */ u32 completedId;
    /* 0x0008 */ u8 unk0008[0x4504];
    /* 0x450C */ u8 operationActive;
    /* 0x450D */ u8 unk450D[3];
    /* 0x4510 */ u32 waitHandle;
} AocJobWork;

/* One entry of the content table: an id and 0x50 bytes of data. */
typedef struct AocEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x50];
} AocEntry;

/* The content system's block (Shin Megami Tensei IV layout). */
typedef struct AocSystem {
    /* The request waiting on the content system (_ZN9AocSystem17getPendingRequestEv). */
    RequestParameters getPendingRequest();

    /* 0x000 */ union {
        /* 0x000 */ u8 unk000[0x38C];
        struct {
            /* 0x000 */ u8 unk000[0x310];
            s32 count; /* 0x310 */
            /* 0x314 */ u32 unk314;
            struct AocPackage *entries; /* 0x318 */
            /* 0x31C */ u8 unk31c[0x70];
        } packages;
        struct {
            /* 0x000 */ u8 unk000[0x35C];
            /* 0x35C */ u32 count;
            /* 0x360 */ struct DevilRecord *records;
            /* 0x364 */ u8 unk364[0x28];
        } devils;
        struct {
            /* 0x000 */ u8 unk000[0x364];
            /* 0x364 */ u32 count;
            /* 0x368 */ struct Table00Record *records;
            /* 0x36C */ u8 unk36C[0x20];
        } table00;
        struct {
            /* 0x000 */ u8 unk000[0x368];
            /* 0x368 */ u32 enabled;
            /* 0x36C */ u8 unk36C[8];
            /* 0x374 */ struct AocLookupRecord *entries;
            /* 0x378 */ u32 count;
            /* 0x37C */ u8 unk37C[0x10];
        } lookup;

        struct {
            /* 0x000 */ u8 unk000[0x384];
            /* 0x384 */ u32 count;
            /* 0x388 */ struct AocTableSearchRecord *records;
        } table;
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
    /* The request waiting on the content system (_ZN10AocSystemA17getPendingRequestEv). */
    RequestParameters getPendingRequest();

    union {
        struct {
            /* 0x000 */ u8 unk000[0x310];
            /* 0x310 */ s32 count;
            /* 0x314 */ u32 unk314;
            /* 0x318 */ struct AocPackage *entries;
        } packages;
        struct {
            /* 0x000 */ u8 unk000[0x35C];
            /* 0x35C */ u32 count;
            /* 0x360 */ struct DevilRecord *records;
            /* 0x364 */ u8 unk364[0x28];
        } devils;
        /* 0x000 */ u8 unk000[0x38C];
        struct {
            /* 0x000 */ u8 unk000[0x384];
            /* 0x384 */ u32 count;
            /* 0x388 */ struct AocTableSearchRecordA *records;
        } table;
        struct {
            /* 0x000 */ u8 unk000[0x364];
            /* 0x364 */ u32 count;
            /* 0x368 */ struct Table00Record *records;
            /* 0x36C */ u8 unk36C[0x20];
        } table00;
        struct {
            /* 0x000 */ u8 unk000[0x368];
            /* 0x368 */ u32 enabled;
            /* 0x36C */ u8 unk36C[8];
            /* 0x374 */ struct AocLookupRecord *entries;
            /* 0x378 */ u32 count;
            /* 0x37C */ u8 unk37C[0x10];
        } lookup;

    };
    /* 0x38C */ u32 entryCount;
    /* 0x390 */ AocEntryA *entries;
} AocSystemA;

typedef struct AocPackageOwner {
    /* 0x00000 */ u8 unk00000[0x310];
    /* 0x00310 */ u32 unk310;
    /* 0x00314 */ u32 unk314;
    /* 0x00318 */ void * handle;
    /* 0x0031C */ u8 unk0031C[0x34];
    /* 0x00350 */ u32 unk350;
} AocPackageOwner;

struct AocTrackId {
    /* 0x00 */ u32 group;
    /* 0x04 */ u32 track;
};
struct AocMusicJob {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 muted;
    /* 0x10 */ u8 unk10[0x1C];
    /* 0x2C */ f32 volume;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ s32 pending;
    /* 0x38 */ u8 unk38[4];
    /* 0x3C */ AocTrackId current;
    /* 0x44 */ s32 previous;
    /* 0x48 */ s32 locked;
    /* 0x4C */ u8 unk4C[8];
    /* 0x54 */ void *table;
};

struct AocJobStateA {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 started;
};

typedef char AocSystemLayoutCheck[sizeof(AocSystem) == 0x39C && sizeof(AocSystemA) == 0x394 && sizeof(AocMain) == 0x758 ? 1 : -1];

typedef char AocSystemOffsets[offsetof(AocSystem, devils.count) == 0x35C && offsetof(AocSystem, table00.count) == 0x364 && offsetof(AocSystem, lookup.entries) == 0x374 && offsetof(AocSystem, table.count) == 0x384 && offsetof(AocSystemA, table00.records) == 0x368 && offsetof(AocSystemA, table.count) == 0x384 && offsetof(AocMusicJob, current) == 0x3C ? 1 : -1];
typedef char AocSystemAPackagesOffsets[offsetof(AocSystemA, packages.count) == 0x310 && offsetof(AocSystemA, packages.entries) == 0x318 ? 1 : -1];

extern "C" {
u32 FUN_00270a70(void);
}

#ifdef __cplusplus
extern "C" {
#endif
/* Tests an event without waiting (tail call to nn_os_LightEvent_TryWait, linked as a nop). */
s32 FUN_002ad1e0(void *event);
#ifdef __cplusplus
}
#endif



#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_002a6f48(s32 kind);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 *aocFindPackageTable22Record(AocSystem *system, s32 id);

#ifdef __cplusplus
}
#endif

#endif
