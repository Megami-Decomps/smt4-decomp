/* addon/aocMain.c and the add-on content (AOC) system around it (both games). */
#ifndef ADDON_AOCMAIN_H
#define ADDON_AOCMAIN_H

#include "common.h"
#include "addon/AocScriptHolder.h"
#include <stddef.h>

#include "shard/W6_W6Match5_QueuedRequest.h"
#include "shard/S1NnOs.h"

struct QueuedRequestHandle;
struct Obj422214Owner;
class AocBufferRequest;
class AocAuxBufferRequest;

/* The stack the worker thread runs on: the thread starts at `base + size`. */
typedef struct AocThreadStack {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 base;
    /* 0x0C */ u32 size;
} AocThreadStack;

/* The AOC worker thread (0x10 bytes): the online operations run on it, the operation objects
 * start and join it. */
typedef struct AocWorkerThread {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ AocThreadStack *stack;
} AocWorkerThread;


/* One attribute name of a catalog query (0x40 bytes, copied whole). */
typedef struct AocAttributeName {
    char text[0x40];
} AocAttributeName;

/* The AOC system's main block, g_aocMain (0xD68 bytes, the same layout in both games): the content
 * archive and the online service, the worker thread and its completion event, the quest-script
 * loader, the content tables and per-slot records, and the request the AOC process is running. */
typedef struct AocMain {
    /* Queues `request` unless one is already active (_ZN7AocMain12queueRequestE17RequestParametersji). */
    void queueRequest(RequestParameters request, u32 argument, s32 mode);
    /* Submits `request` for the token `handle` unless one is pending; returns whether the token is valid
     * (_ZN7AocMain18submitTokenRequestE17RequestParameters19QueuedRequestHandle). */
    u32 submitTokenRequest(RequestParameters request, QueuedRequestHandle handle);

    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ u8 contentArchive[0x10];   /* the archive contentFile is reopened from */
    /* 0x028 */ u8 contentFile[0x54];
    /* 0x07C */ u8 service[4];             /* the online service the operations query */
    /* 0x080 */ u32 queryResult;           /* result of the last service query; the content requests are created with it */
    /* 0x084 */ u8 serviceClock[4];        /* what the catalog job reads the service's date from (FUN_00427ff4) */
    /* 0x088 */ AocWorkerThread thread;
    /* 0x098 */ LightEvent operationDone;  /* signalled when the worker finishes an operation */
    /* 0x0A0 */ u8 unk0A0[8];
    /* 0x0A8 */ AocScriptHolder scriptHolder;
    /* 0x0C0 */ u8 jumpRequested;
    /* 0x0C1 */ u8 skipRestore;
    /* 0x0C2 */ u8 unk0C2[0x21];
    /* 0x0E3 */ char catalogFilter[0x281];  /* the catalog query's filter text, used while catalogFilterCount is set */
    /* 0x364 */ u32 catalogFilterCount;
    /* 0x368 */ AocAttributeName attributeNames[9]; /* the attributes a catalog query returns: four item labels, then the sale fields */
    /* 0x5A8 */ AocBufferRequest *contentRequest; /* its buffer holds the 0x30-byte content entries */
    /* 0x5AC */ void *contentBuffer;
    /* 0x5B0 */ AocAuxBufferRequest *itemRequest;  /* the item entries the purchase requests are built from */
    /* 0x5B4 */ void *itemBuffer;
    /* 0x5B8 */ u8 unk5B8[0xC0];
    /* 0x678 */ Obj422214Owner *records;   /* the per-slot content records */
    /* 0x67C */ s32 recordCount;
    /* 0x680 */ u32 catalogTotal;          /* entries the service holds for the last catalog query */
    /* 0x684 */ u32 catalogOffset;         /* first entry the next catalog query asks for */
    /* 0x688 */ Obj422214Owner *selectedRecord;
    /* 0x68C */ u8 unk68C[8];
    /* 0x694 */ union {
        char text[64];                    /* the content code the purchase is made with (UTF-8, from the keyboard) */
        u32 words[16];                    /* cleared a word at a time */
    } contentCode;
    /* 0x6D4 */ u8 contentText[0x80];
    /* 0x754 */ u32 flags;
    /* 0x758 */ RequestParameters request; /* the request the AOC process is running */
    /* 0x76C */ u8 panel[0x415];
    /* 0xB81 */ u8 panelReady;
    /* 0xB82 */ u8 unkB82[0x1CE];
    /* 0xD50 */ u8 mode;
    /* 0xD51 */ u8 unkD51[3];
    /* 0xD54 */ u32 argument;
    /* 0xD58 */ u32 progress;
    /* 0xD5C */ u32 unkD5C;
    /* 0xD60 */ u32 token;                 /* the token of the submitted request */
    /* 0xD64 */ u32 process;
} AocMain;

typedef char AocMainLayoutCheck[sizeof(AocMain) == 0xD68 &&
    offsetof(AocMain, catalogFilter) == 0xE3 && offsetof(AocMain, catalogFilterCount) == 0x364 &&
    offsetof(AocMain, attributeNames) == 0x368 && offsetof(AocMain, catalogOffset) == 0x684 &&
    offsetof(AocMain, contentArchive) == 0x18 && offsetof(AocMain, contentFile) == 0x28 &&
    offsetof(AocMain, service) == 0x7C && offsetof(AocMain, queryResult) == 0x80 &&
    offsetof(AocMain, thread) == 0x88 && offsetof(AocMain, operationDone) == 0x98 &&
    offsetof(AocMain, scriptHolder) == 0xA8 && offsetof(AocMain, jumpRequested) == 0xC0 &&
    offsetof(AocMain, contentRequest) == 0x5A8 && offsetof(AocMain, itemRequest) == 0x5B0 &&
    offsetof(AocMain, records) == 0x678 && offsetof(AocMain, selectedRecord) == 0x688 &&
    offsetof(AocMain, contentCode) == 0x694 && offsetof(AocMain, flags) == 0x754 &&
    offsetof(AocMain, request) == 0x758 && offsetof(AocMain, panelReady) == 0xB81 &&
    offsetof(AocMain, mode) == 0xD50 && offsetof(AocMain, token) == 0xD60 ? 1 : -1];

extern "C" {
extern AocMain *g_aocMain;
/* Whether the content is ready (bit 16 of the flags). */
s32 objHasFlagBit16(AocMain *main);
/* Set the panel-ready byte via the setter armlink inlined in the menu units. */
void aocMenuSetReadyFlag(AocMain *owner, u8 ready);
}

/* Clears the menu's request bits 4-6 and reports whether bit 4 (cancelled or failed) was set (IV's aocTransitionUpdate,
 * Apocalypse's aocTransitionUpdate and FUN_004d7e20). */
static __inline u32 aocMainTakeCancel(void)
{
    u32 flags = g_aocMain->flags;
    g_aocMain->flags = flags & ~0x70U;
    return (flags & 0x10) >> 4;
}

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

typedef char AocMusicJobOffsets[offsetof(AocMusicJob, current) == 0x3C ? 1 : -1];

extern "C" {
u32 aocMainPollShutdown(void);
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

s32 packageKindToRecordKind(s32 kind);

#ifdef __cplusplus
}
#endif

#endif
