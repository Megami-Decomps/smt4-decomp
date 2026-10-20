#include "common.h"

extern "C" {

void asdMemFree(void *memory);
void asdTMTexTableFreeEntry(s32 entry);
s32 jobStop(u32 job, s32 flag);

typedef struct Task {
    /* 0x00 */ u32 job;
} Task;
extern Task *g_sWin;

/* Frees texture entry 0x34, stops the task's job, frees the task and clears the global. */
void FUN_002ef750(void)
{
    Task *task;

    task = g_sWin;
    if (g_sWin != NULL) {
        asdTMTexTableFreeEntry(0x34);
        jobStop(task->job, 0);
        asdMemFree(task);
        g_sWin = NULL;
    }
}

} /* extern "C" */
