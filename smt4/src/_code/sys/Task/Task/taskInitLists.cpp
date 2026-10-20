#include "sys/Task.h"

extern "C" {
extern s8 g_taskListsNeedInit;

/* Empties and enables every list, the first time it is called. */
void taskInitLists(void)
{
    int i;

    if (g_taskListsNeedInit) {
        for (i = 0; i < TASK_LIST_COUNT; i++) {
            g_taskLists[i].head = NULL;
            g_taskLists[i].tail = NULL;
            g_taskLists[i].count = 0;
            g_taskLists[i].enabled = 1;
        }
        g_taskListsNeedInit = 0;
    }
}

} /* extern "C" */
