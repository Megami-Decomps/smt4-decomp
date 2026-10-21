/* AsdSDK/Source/Sys/Kernel/AsdProcess.cpp: the engine's process scheduler.
 *
 * A process has three callbacks: `onStart` runs once after its start delay, `onUpdate` runs every
 * frame (it returns 0 to keep going, -1 to finish, or a new update function) and `onEnd` runs
 * once the end delay has run out. Processes live in `groupCount` groups; each group is a doubly
 * linked list, and a process can own child processes which are ended with it. A process is named
 * by a handle: its id in the low 20 bits and its group above. */
#ifndef ASDSDK_SOURCE_SYS_KERNEL_ASDPROCESS_H
#define ASDSDK_SOURCE_SYS_KERNEL_ASDPROCESS_H

#include "common.h"

#define ASD_PROC_NAME_LEN 0x18
#define ASD_PROC_ID_MASK 0xfffff /* low bits of the handle */
#define ASD_PROC_GROUP_SHIFT 20  /* group index sits above the id in the handle */

/* AsdProcess.state */
#define ASD_PROC_FREE 0       /* unlinked */
#define ASD_PROC_WAIT_START 1 /* waiting for the start timer */
#define ASD_PROC_START_DELAY 2 /* counting down startDelay */
#define ASD_PROC_RUNNING 3    /* onUpdate runs every frame */
#define ASD_PROC_ENDING 4     /* waiting for the end timer */
#define ASD_PROC_END_DELAY 5  /* counting down endDelay */

/* AsdProcess.flags */
#define ASD_PROC_FLAG_SKIP 0x10       /* the update pass leaves it alone */
#define ASD_PROC_FLAG_LOCKED 0x40     /* onUpdate runs inside the locked section (FUN_002c41d0) */
#define ASD_PROC_FLAG_TERMINATE 0x20000 /* ended the next time the process list runs */
#define ASD_PROC_FLAG_PAUSED 0x200000 /* neither started nor updated */
#define ASD_PROC_FLAG_DEFAULT 0x190000

typedef void (*AsdProcFunc)(u32 handle);
typedef s32 (*AsdProcUpdateFunc)(u32 handle);

/* A countdown helper the process embeds (reset by writing 1 to `active`). */
typedef struct AsdProcTimer {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[7];
} AsdProcTimer;

typedef struct AsdProcess {
    /* 0x00 */ char name[ASD_PROC_NAME_LEN]; /* last byte is always 0 */
    /* 0x18 */ s32 nameSum;                  /* sum of the name's characters */
    /* 0x1c */ u32 flags;
    /* 0x20 */ s32 group;
    /* 0x24 */ u32 id;
    /* 0x28 */ u32 handle;
    /* 0x2c */ u32 unk2c;
    /* 0x30 */ s32 frames;                   /* updates run since onStart */
    /* 0x34 */ s16 startDelay;
    /* 0x36 */ s16 endDelay;
    /* 0x38 */ AsdProcFunc onStart;
    /* 0x3c */ AsdProcUpdateFunc onUpdate;
    /* 0x40 */ AsdProcFunc onEnd;
    /* 0x44 */ s32 updateResult;             /* what onUpdate returned last */
    /* 0x48 */ u32 unk48;
    /* 0x4c */ struct AsdProcess *next;      /* in the group's list */
    /* 0x50 */ struct AsdProcess *prev;
    /* 0x54 */ struct AsdProcess *parent;
    /* 0x58 */ struct AsdProcess *firstChild;
    /* 0x5c */ struct AsdProcess *nextSibling;
    /* 0x60 */ u32 cmdList;                   /* this process's GPU command list (AsdGxCommandList), begun/ended around onUpdate */
    /* 0x64 */ union {
        s32 unk64;
        AsdProcFunc onAuxiliary;            /* callback run by the auxiliary process pass */
    };
    /* 0x68 */ u8 unk68[4];
    /* 0x6c */ AsdProcTimer startTimer;
    /* 0x74 */ AsdProcTimer timer74;
    /* 0x7c */ AsdProcTimer endTimer;
    /* 0x84 */ AsdProcTimer timer84;
    /* 0x8c */ u8 unk8c[0xc];
    /* 0x98 */ u8 state;                     /* ASD_PROC_* */
    /* 0x99 */ u8 unk99[3];
    /* 0x9c */ s32 updateCount;
    /* 0xa0 */ s32 lastUpdateCount;
} AsdProcess;

/* One group's process list. */
typedef struct AsdProcGroup {
    /* 0x00 */ AsdProcess *head;
    /* 0x04 */ AsdProcess *tail;
} AsdProcGroup;

/* The scheduler's globals. A separate array (`groupEnabled`, one byte per group, 0x200 of
 * them) follows at 0x18. */
typedef struct AsdProcessState {
    /* 0x00 */ AsdProcGroup *groups;
    /* 0x04 */ s32 groupCount;
    /* 0x08 */ AsdProcess *current;   /* the process whose onUpdate is running */
    /* 0x0c */ s32 count;             /* live processes */
    /* 0x10 */ s8 cmdListsEnabled;
    /* 0x14 */ u32 nextId;
} AsdProcessState;

#endif
