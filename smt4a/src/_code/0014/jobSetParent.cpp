/* NON_MATCHING: handle-mask scheduling and inline lookup register allocation differ; hierarchy operations match. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" AsdProcessState g_asdProcess;

static __inline AsdProcess *findProcess(u32 handle)
{
    AsdProcess *process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    u32 id = handle & ASD_PROC_ID_MASK;
    for (; process != NULL; process = process->next) {
        if (process->id == id)
            return process;
    }
    return NULL;
}

static __inline void detachProcess(u32 handle)
{
    AsdProcess *process = findProcess(handle);
    AsdProcess *parent = process->parent;
    if (parent != NULL) {
        AsdProcess *previous = parent->firstChild;
        if (previous == process) {
            parent->firstChild = process->nextSibling;
        } else {
            for (AsdProcess *next = previous->nextSibling; next != process; next = next->nextSibling)
                previous = next;
            previous->nextSibling = process->nextSibling;
        }
        process->parent = NULL;
        process->nextSibling = NULL;
    }
}

// Reparent a process, appending it after the new parent's existing children.
extern "C" void jobSetParent(u32 parentHandle, u32 childHandle)
{
    AsdProcess *parent = findProcess(parentHandle);
    AsdProcess *child = findProcess(childHandle);
    if (child->parent != NULL)
        detachProcess(childHandle);
    if (parent != NULL) {
        AsdProcess *previous = parent->firstChild;
        if (previous == NULL) {
            parent->firstChild = child;
        } else {
            for (AsdProcess *next = previous->nextSibling; next != NULL; next = next->nextSibling)
                previous = next;
            previous->nextSibling = child;
        }
    }
    child->parent = parent;
}
