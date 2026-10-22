/* NON_MATCHING: Process lookup merges its conditions and removes the retail redundant null-result move. */
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
extern "C" {
extern AsdProcessState g_asdProcess;

// Unlinks a process from its parent's child chain without removing it from its scheduler group.
void FUN_00281178(u32 handle)
{
    u32 id = handle & ASD_PROC_ID_MASK;
    AsdProcess* process = g_asdProcess.groups[handle >> ASD_PROC_GROUP_SHIFT].head;
    while (process != NULL) {
        if (process->id == id) {
            break;
        }
        process = process->next;
    }
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
