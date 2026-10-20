/* A job queue (Apocalypse): a manager holding per-priority lists of pending jobs behind a lock,
 * and a blocking queue that wakes the worker. A job embeds a queue node (at +0x64) with the link
 * the lists chain and an event its submitter waits on. */
#ifndef SHARD_S3JOBQUEUE_H
#define SHARD_S3JOBQUEUE_H

#include "common.h"

typedef struct JobLink {
    struct JobLink *next;
    struct JobLink *prev;
} JobLink;

/* nw::ut::LinkListImpl: element count, then the root link. */
typedef struct JobList {
    /* 0x00 */ s32 count;
    /* 0x04 */ JobLink root;
} JobList;

/* The queue node embedded in a job. */
typedef struct JobNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ JobLink link;
    /* 0x0C */ u8 event[8];          /* nn::os::LightEvent */
    /* 0x14 */ u8 pending;           /* 1 until the job has run */
} JobNode;

typedef struct JobManager {
    /* 0x00 */ JobList lists[3];     /* one per priority */
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ u8 lock[0xC];         /* CriticalSection */
    /* 0x38 */ u8 wakeQueue[0x10];   /* nn::os::detail::BlockingQueueBase */
} JobManager;

typedef struct Job {
    /* 0x00 */ u32 head;             /* copy of `next` below, set when the job is queued */
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 next;
    /* 0x18 */ u8 unk18[0x3C];
    /* 0x54 */ u32 result;
    /* 0x58 */ u8 unk58[0xC];
    /* 0x64 */ JobNode node;
    /* 0x7C */ struct Job *self0;    /* both point back at the job */
    /* 0x80 */ struct Job *self1;
} Job;

#endif
