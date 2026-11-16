#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
extern "C" {
extern AsdProcessState g_asdProcess;

static __inline AsdProcess* findProcess(u32 handle)
{
    AsdProcess* process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id)
            return process;
    }
    return NULL;
}

// Unlinks a process from its parent's child chain without removing it from its scheduler group.
void jobDetachFromParent(u32 handle)
{
    AsdProcess* process = findProcess(handle);
    AsdProcess* parent = process->parent;
    if (parent != NULL) {
        AsdProcess* previous = parent->firstChild;
        if (previous == process) {
            parent->firstChild = process->nextSibling;
        } else {
            while (previous->nextSibling != process) {
                previous = previous->nextSibling;
            }
            previous->nextSibling = process->nextSibling;
        }
        process->parent = NULL;
        process->nextSibling = NULL;
    }
}
}
