/* sys/Task/Task.c: the game's cooperative task lists.
 *
 * Tasks live in TASK_LIST_COUNT lists, each kept sorted by `priority`. Every frame each list
 * runs its tasks' callbacks with the task's work area; a task being killed counts `killDelay`
 * down and is unlinked and freed when it reaches zero. */
#ifndef SYS_TASK_H
#define SYS_TASK_H

#include "common.h"

#define TASK_LIST_COUNT 5

typedef void (*TaskFunc)(void *work);

typedef struct Task {
    /* 0x00 */ u16 priority;    /* lower runs first */
    /* 0x02 */ u8 killDelay;    /* 0 = alive, else frames left before the task is freed */
    /* 0x03 */ u8 list;         /* index into g_taskLists */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ TaskFunc update;  /* every frame while alive */
    /* 0x0C */ TaskFunc phase0;  /* taskRunPhase(0) */
    /* 0x10 */ TaskFunc phase1;  /* taskRunPhase(1) */
    /* 0x14 */ TaskFunc phase3;  /* taskRunPhase(3) */
    /* 0x18 */ TaskFunc destroy; /* when killDelay reaches 0, before the task is freed */
    /* 0x1C */ struct Task *prev;
    /* 0x20 */ struct Task *next;
    /* 0x24 */ u8 unk24[0x10];
    /* 0x34 */ u8 work[1];       /* the task's own state, sized at creation */
} Task;

typedef struct TaskList {
    /* 0x00 */ Task *head;
    /* 0x04 */ Task *tail;
    /* 0x08 */ s32 count;
    /* 0x0C */ s32 enabled;
} TaskList;

#ifdef __cplusplus
extern "C" {
#endif

extern TaskList g_taskLists[TASK_LIST_COUNT];

static __inline TaskList *taskGetList(u8 list)
{
    return &g_taskLists[list];
}

#ifdef __cplusplus
}
#endif

#endif
