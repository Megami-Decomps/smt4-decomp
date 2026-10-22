/* AsdSDK/Source/Sys/File/AsdFile.cpp and AsdLoadFile.cpp: asynchronous file loading.
 *
 * Load requests (AsdFileRequest) sit in a singly-owned linked list that a worker thread walks:
 * it opens each file, reads it into a buffer from the chosen heap, calls the request's callback
 * and keeps finished requests around until their lifetime runs out. Callers wait for a request to
 * reach AsdFileRequest.state DONE or FAILED. */
#ifndef ASDSDK_SOURCE_SYS_FILE_ASDFILE_H
#define ASDSDK_SOURCE_SYS_FILE_ASDFILE_H

#include "common.h"

#define ASD_FILE_PATH_LEN 0x100

/* AsdFileRequest.state */
#define ASD_FILE_QUEUED 0 /* waiting for the worker */
#define ASD_FILE_READ 3   /* read in; about to become DONE */
#define ASD_FILE_DONE 4
#define ASD_FILE_FAILED 5

typedef struct AsdFileRequest {
    /* 0x000 */ s32 state;               /* ASD_FILE_* */
    /* 0x004 */ s32 lifetime;            /* DONE/FAILED requests count this down by `lifetimeStep` and are freed at 0 */
    /* 0x008 */ s32 lifetimeStep;
    /* 0x00c */ void *buffer;            /* the file's contents */
    /* 0x010 */ s32 userBuffer;          /* nonzero: `buffer` belongs to the caller */
    /* 0x014 */ u32 unk14;
    /* 0x018 */ u32 size;
    /* 0x01c */ u32 unk1c;
    /* 0x020 */ u8 flag;
    /* 0x021 */ u8 pad21[3];
    /* 0x024 */ s32 heapKind;            /* which heap the buffer comes from: 1, 0x10 or 0x11 */
    /* 0x028 */ u32 alignment;           /* 0x80 by default */
    /* 0x02c */ char path[ASD_FILE_PATH_LEN];
    /* 0x12c */ void *stream;            /* the open file */
    /* 0x130 */ void (*onDone)(struct AsdFileRequest *); /* called when DONE or FAILED */
    /* 0x134 */ struct AsdFileRequest *onDoneArg;        /* what onDone gets (the request itself if NULL) */
    /* 0x138 */ void (*onOpen)(void *stream);            /* called with the open file before it is read */
    /* 0x13c */ struct AsdFileRequest *next;
    /* 0x140 */ struct AsdFileRequest *prev;
} AsdFileRequest;

/* A registered entry: a caller-supplied 0x14c-byte record kept in a doubly linked list. */
typedef struct AsdFileEntry {
    /* 0x000 */ u8 data[0x14C];
    /* 0x14c */ struct AsdFileEntry *next;
    /* 0x150 */ struct AsdFileEntry *prev;
} AsdFileEntry;

/* The loader's globals; the nn::os mutex guarding the list and the worker thread follow separately. */
typedef struct AsdFileGlobals {
    /* 0x00 */ u8 stopRequested;       /* the worker thread should exit */
    /* 0x04 */ u32 reading;            /* set while a read is in flight */
    /* 0x08 */ AsdFileEntry *entries;  /* registered entries, oldest first */
    /* 0x0c */ void *bufferB;
    /* 0x10 */ AsdFileRequest *head;   /* request list */
} AsdFileGlobals;

#endif
